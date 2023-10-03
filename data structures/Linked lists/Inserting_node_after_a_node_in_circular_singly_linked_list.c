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
    p = start;
    printf("List entered is: ");
    for (p = start; p->next != start; p = p->next)
    {
        printf("%i\t", p->data);
    }
    printf("%i", p->data);
    printf("\n");
    int m;
    printf("Enter number of entries to add: ");
    scanf(" %i", &m);
    for (int i = 0; i < m; i++)
    {
        int value;
        printf("Enter the value after which new data should be added: ");
        scanf(" %i", &value);
        prev = start;
        while (prev->data != value)
        {
            prev = prev->next;
            if (prev->next == start)
            {
                if (prev->data != value)
                {
                    printf("Error: Value not found in the list!");
                    return 1;
                }
            }
        }
        p = malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf(" %i", &p->data);
        p->next = prev->next;
        prev->next = p;
    }
    p = start;
    printf("Updated list is: ");
    for (p = start; p->next != start; p = p->next)
    {
        printf("%i\t", p->data);
    }
    printf("%i", p->data);
    return 0;
}