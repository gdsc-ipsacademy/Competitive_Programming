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
        prev = p;
        while (prev->data != value)
        {
            prev = p;
            p = p->next;
            if (prev->next == NULL)
            {
                if (prev->data != value)
                {
                    printf("Error: Value not found in the list!");
                    return 2;
                }
                printf("Error: There is no value after %i in list!", p->data);
                return 3;
            }
        }
        prev->next = p->next;
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