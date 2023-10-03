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
        p->next = NULL;
        if (start == NULL)
        {
            start = p;
        }
        else
        {
            prev->next = p;
        }
        prev = p;
    }
    p = start;
    printf("List entered is: ");
    while (p != NULL)
    {
        printf("%i\t", p->data);
        p = p->next;
    }
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
        if (p->next == NULL)
        {
            printf("List emptied!");
            return 0;
        }
        while (p->next != NULL)
        {
            prev = p;
            p = p->next;
        }
        prev->next = NULL;
        free(p);
    }
    p = start;
    printf("Updated list is: ");
    while (p != NULL)
    {
        printf("%i\t", p->data);
        p = p->next;
    }
    return 0;
}