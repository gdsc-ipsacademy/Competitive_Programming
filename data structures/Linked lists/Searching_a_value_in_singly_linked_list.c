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
    int search, count = 1;
    printf("Enter data to search: ");
    scanf(" %i", &search);
    p = start;
    while (p != NULL)
    {
        if (search == p->data)
        {
            printf("Data %i is at node: %i", search, count);
            return 0;
        }
        p = p->next;
        count++;
    }
    printf("%i is not in the list", search);
}
