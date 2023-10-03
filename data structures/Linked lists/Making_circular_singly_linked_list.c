#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *prev, *start, *p;
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
            p->next = p;
            start = p;
        }
        else
        {
            prev = start;
            while (prev->next != start)
            {
                prev = prev->next;
            }
            prev->next = p;
            p->next = start;
        }
    }
    printf("List entered is: ");
    for (p = start; p->next != start; p = p->next)
    {
        printf("%i\t", p->data);
    }
    printf("%i", p->data);
    return 0;
}