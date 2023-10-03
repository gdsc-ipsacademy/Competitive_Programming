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
    printf("Enter the number of entries to delete: ");
    scanf(" %i", &m);
    if (m > n)
    {
        printf("Error: List has less than %i items!", m);
        return 1;
    }
    for (int i = 0; i < m; i++)
    {
        int value;
        printf("Enter the value after which data should be deleted: ");
        scanf(" %i", &value);
        p = start;
        while (p->data != value)
        {
            p = p->next;
            if (p->next == NULL)
            {
                if (p->data != value)
                {
                    printf("Error: Value not found in the list!");
                    return 2;
                }
                printf("Error: There is no value after %i in list!", p->data);
                return 3;
            }
        }
        ptr = p->next;
        p->next = ptr->next;
        ptr->next->prev = p;
        free(ptr);
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