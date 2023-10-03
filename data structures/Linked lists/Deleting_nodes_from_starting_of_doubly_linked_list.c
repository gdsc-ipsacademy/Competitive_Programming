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
    printf("Enter Length of list: ");
    scanf(" %i", &n);
    start = NULL;
    for (int i = 0; i < n; i++)
    {
        p = malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf(" %i", &p->data);
        p->next = NULL;
        if (start == NULL)
        {
            p->prev = NULL;
            start = p;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = p;
            p->prev = ptr;
        }
    }
    p = start;
    printf("List entered is: ");
    for (p = start; p->next != NULL; p = p->next)
    {
        printf("%i\t", p->data);
    }
    printf("%i\t", p->data);
    printf("\n");
    int m;
    printf("Enter the number of entries to be deleted (from the start): ");
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
        start = start->next;
        if (start == NULL)
        {
            printf("List emptied!");
            return 0;
        }
        start->prev = NULL;
        free(p);
    }
    p = start;
    printf("Updated list is: ");
    for (p = start; p->next != NULL; p = p->next)
    {
        printf("%i\t", p->data);
    }
    printf("%i\t", p->data);
    return 0;
}