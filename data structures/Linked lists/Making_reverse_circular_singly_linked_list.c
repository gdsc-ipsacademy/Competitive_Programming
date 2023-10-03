#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *start, *p;
    int n;
    printf("Enter length of list: ");
    scanf(" %i", &n);
    start = NULL;
    for (int i = 0; i < n; i++)
    {
        p = malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf(" %i", &p->data);
        p->next = start;
        start = p;
    }
    printf("List entered is: ");
    for (p = start; p->next != start; p = p->next)
    {
        printf("%i\t", p->data);
    }
    printf("%i", p->data);
    return 0;
}