#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

int main()
{
    struct node *ptr, *start, *p;
    int n;
    printf("Enter length of list: ");
    scanf(" %i", &n);
    start = NULL;
    for (int i = 0; i < n; i++)
    {
        p = malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf(" %i", &p->data);
        if (start == NULL)
        {
            p->next = NULL;
            p->prev = NULL;
            start = p;
        }
        else
        {
            ptr = start;
            p->prev = NULL;
            p->next = ptr;
            ptr->prev = p;
            start = p;
        }
    }
    p = start;
    printf("List entered is: ");
    for (p = start; p->next != NULL; p = p->next)
    {
        printf("%i\t", p->data);
    }
    printf("%i", p->data);
    return 0;
}