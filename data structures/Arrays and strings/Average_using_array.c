//Average of N numbers using array
#include <stdio.h>

int main(){
int N; 
int sum;
int array[N];
//Getting number of inputs
printf("Number of inputs : ");
scanf("%i", &N);
//Getting all the numbers
for (int i = 0; i < N; ++i) {
    printf("Enter %d number : ", i + 1);
    scanf("%i", &array[i]);
}
//Adding all the numbers
for(int i = 0; i <N; i++){ 
    sum += array[i];
}
printf("Average : %f\n", (sum)/(float) N);
}