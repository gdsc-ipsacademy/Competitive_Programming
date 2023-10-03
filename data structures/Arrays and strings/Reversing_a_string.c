//Reversing a string
#include <stdio.h>
#include <string.h>

int main(){
char str[100];
//Prompt user for input
printf("Enter string : ");
gets(str);
int i;
char temp;
int j= strlen(str)- 1;
//Storing last jth element in a temporary char 
//Then writing first ith element over last jth element 
//Then writing temporary char over first ith element
while(i< j){
    temp= str[j];
    str[j]= str[i];
    str[i]= temp;
    i++;
    j--;
}
printf("Reversed string is : %s", str);
return 0;
}