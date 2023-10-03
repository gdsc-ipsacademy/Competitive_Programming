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
            if (prev->next == NULL)
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
    while (p != NULL)
    {
        printf("%i\t", p->data);
        p = p->next;
    }
    return 0;
}