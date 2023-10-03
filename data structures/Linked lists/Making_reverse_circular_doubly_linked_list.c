#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;

};

int main(){
struct node *ptr, *start, *p;
int n;
printf("Enter length of list: ");
scanf(" %i", &n);
start =NULL;
for(int i=0; i<n; i++){
p =malloc(sizeof(struct node));
printf("Enter data: ");
scanf(" %i", &p->data);
ptr=start;
if(start==NULL){
    p->prev=NULL;
    p->next=start;
    start=p;
}
else{
    while(ptr->next!=start){
        ptr=ptr->next;
    }
    p->prev=ptr;
    ptr->next=p;
    p->next=start;
    start->prev=p;
    start=p;  
}
}
printf("List entered is: ");
for (p =start; p->next!=start; p=p->next)
{
    printf("%i\t", &p->data);
}
printf("%i", p->data);
return 0;
}