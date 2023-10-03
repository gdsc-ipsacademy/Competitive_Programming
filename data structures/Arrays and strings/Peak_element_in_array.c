#include <stdio.h>

int main(){
int n;
printf("Enter length of array: ");
scanf("%i", &n);
int array[n];
for (int i = 0; i < n; ++i) {
    printf("Enter %d element : ", i + 1);
    scanf("%i", &array[i]);
}
if(n==1){
    printf("Peak element is: %i", array[0]);
    return 0;
}
if(array[0]>=array[1]){
    printf("Peak element is: %i", array[0]);
    return 0;
}
if(array[n-1]>=array[n-2]){
    printf("Peak element is: %i", array[n-1]);
    return 0;
}
for(int i= 1; i< n-1; i++){
    if(array[i]>= array[i-1] && array[i]>= array[i + 1]){
        printf("Peak element is: %i", array[i]);
        return 0;
    }
}
}