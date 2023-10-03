//Deleting an element from an arbitary position in an array
#include <stdio.h>

int main(){

int n;
//Prompt user for array size
printf("Enter number of elements in array : ");
scanf("%d", &n);
int array[n];
//Prompt user for elements
printf("Enter %i elements in array : \n", n);
int i;
do{
    scanf("%i", &array[i]);
    i++;
}while(i<n);
int p;
//Asking index to delete element from 
printf("Enter index to delete element from : \n");
scanf("%d", &p);
//If index exceeds array length, deletion isn't possible
if (p> n)
    printf("Deletion not possible.\n");
else{
    //Overwriting elements from chosen index upto last index with elements right after them
    for (int j= p- 1; j<= n; j++)
        array[j] = array[j+1];
    //Printing Final array
    printf("Result : \n");
    for (int j= 0; j< n- 1; j++)
        printf("%d\n", array[j]);
}
return 0;
}