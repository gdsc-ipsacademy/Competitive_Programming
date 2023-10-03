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
    printf("\n");
    int m;
    printf("Enter the number of entries to be deleted (from end): ");
    scanf(" %i", &m);
    if (m > n)
    {
        printf("Error: List has less than %i items!", m);
        return 1;
    }
    if (start == NULL)
    {
        printf("Error: Underflow!");
        return 2;
    }
    for (int i = 0; i < m; i++)
    {
        p = start;
        if (p->next == start)
        {
            free(p);
            printf("List emptied!");
            return 0;
        }
        while (p->next != start)
        {
            prev = p;
            p = p->next;
        }
        prev->next = start;
        free(p);
    }
    printf("Updated list is: ");
    for (p = start; p->next != start; p = p->next)
    {
        printf("%i\t", p->data);
    }
    printf("%i", p->data);
    return 0;
}