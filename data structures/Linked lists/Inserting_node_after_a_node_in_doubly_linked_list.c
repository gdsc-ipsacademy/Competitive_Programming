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
        ptr = start;
        while (ptr->data != value)
        {
            ptr = ptr->next;
            if (ptr->next == NULL)
            {
                if (ptr->data != value)
                {
                    printf("Error: Value not found in the list!");
                    return 1;
                }
            }
        }
        p = malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf(" %i", &p->data);
        ptr = start;
        while (ptr->data != value)
        {
            ptr = ptr->next;
        }
        p->next = ptr->next;
        p->prev = ptr;
        ptr->next->prev = p;
        ptr->next = p;
    }
    p = start;
    printf("Updated list is: ");
    for (p = start; p->next != NULL; p = p->next)
    {
        printf("%i\t", p->data);
    }
    printf("%i", p->data);
    return 0;
}