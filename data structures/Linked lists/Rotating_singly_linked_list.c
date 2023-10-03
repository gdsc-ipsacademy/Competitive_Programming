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
    int a;
    printf("Enter number of rotations: ");
    scanf("%i", &a);
    p =start;
    while (p->next!=NULL)
    {
        p= p->next;
    }
    
    
    return 0;
}