//Inserting an element in an arbitary position in array
#include <stdio.h>

int main(){
int n;
//Asking for size of array
printf("Enter number of elements : ");
scanf("%i", &n);
int array[n];
int i;
//Prompting user for input of elements in array 
printf("Enter %i elements in array : \n", n);
do{
    scanf("%i", &array[i]);
    i++;
}while(i<n);
int a;
//Asking for new element to be inserted
printf("Enter number to insert : \n");
scanf("%i", &a);
int p;
//Asking index to put new elemnt in
printf("Enter index to insert element in : \n");
scanf("%i", &p);
//Increasing length of array by 1
n++;
//Shifting all the elements from selected index upto last index towards next position
for (i= n+1; i>= p; i--){
        array[i] = array[i - 1];
    }
//Inserting new element in emptyed index
array[p-1]= a;
//Printing final array
for (i = 0; i < n; i++)
        printf("%d ", array[i]);
return 0;
}