#include <stdio.h>
#include <stdlib.h>

struct stack_node
{
    int data;
    struct stack_node *next;
};
struct stack_node *p, *top = NULL;
int MAX;
int main()
{
    int value, option;
    do
    {
        printf("\n Main Menu");
        printf("\n 1. Create");
        printf("\n 2. Push");
        printf("\n 3. Pop");
        printf("\n 4. Peek");
        printf("\n 5. Display");
        printf("\n 6. Exit");
        printf("\n Enter option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\n");
            printf("Enter length of list: ");
            scanf(" %i", &MAX);
            for (int i = 0; i < MAX; i++)
            {
                p = malloc(sizeof(struct stack_node));
                printf("Enter data: ");
                scanf(" %i", &p->data);
                if (top == NULL)
                {
                    p->next = NULL;
                    top = p;
                }
                else
                {
                    p->next = top;
                    top = p;
                }
                top = p;
            }
            break;

        default:
            break;
        }
    } while (option != 6);

    return 0;
}