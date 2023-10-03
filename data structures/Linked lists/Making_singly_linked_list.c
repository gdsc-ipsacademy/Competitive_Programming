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
    //Initially start points to null
    start = NULL;
    //Inserting nodes at the end of the list
    for (int i = 0; i < n; i++)
    {
        //Malloc allocates the memory equal to the size of the struct node to p
        //This creates a node named p
        p = malloc(sizeof(struct node));
        printf("Enter data: ");
        //Input will be stored at the address of p
        //p points to "data" field which ultimately stores the input in data part of the node
        scanf(" %i", &p->data);
        //p points to "next" field and stores null value in it to mark the termination of list
        p->next = NULL;
        //If start is equal to null, this means list is empty
        if (start == NULL)
        {
            //Start now points to the first node of the list
            start = p;
        }
        //If start is already pointing to the first node, this means the list is not empty
        else
        {
            //Pointer named "prev" which is pointing at the previous node
            //stores the address of p, which is new node, in "next" field of previous node
            //Hence connecting the previous node to current node
            prev->next = p;
        }
        //Now pointer "prev" points to the newly created node p
        prev = p;
    }
    //Transversing the list
    p = start;
    printf("List entered is: ");
    while (p != NULL)
    {
        printf("%i\t", p->data);
        p = p->next;
    }
    return 0;
}