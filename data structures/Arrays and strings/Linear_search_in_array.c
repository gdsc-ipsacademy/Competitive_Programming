//Linearly searching for an element in an array
#include <stdio.h>

int main(){
int n;
printf("Enter number of elements : ");
scanf("%i", &n);
int array[n+1];
int i;
printf("Enter %i elements in array : \n", n);
do{
    scanf("%i", &array[i]);
    i++;
}while(i<n);
int a;
printf("Enter number to search : \n");
scanf("%i", &a);
for(int j= 0; j<n; j++){
    if(array[j]== a){
    printf("Number found at index %i", j);
    return 0;
    }
}
printf("Not found");
return 1;
}