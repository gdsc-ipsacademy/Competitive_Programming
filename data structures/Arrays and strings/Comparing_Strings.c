//Comparing if two strings are identical
#include <stdio.h>
#include <string.h>

int main(){
char str1[100];
//Prompt user for first string
printf("Enter first string : ");
gets(str1);
char str2[100];
//Prompt user for second string
printf("Enter second string : ");
gets(str2);
int i= 0;
//Checking both string lenghts are equal
if(strlen(str1)== strlen(str2)){
    while(i<strlen(str1)){
        //Counting i until the correcponding characters of both strings are equal
        if(str1[i]== str2[i]){
            i++;
        }
        //If characters aren't equal
        else {
            printf("Strings aren't identical");
            return 1;
        }
    }
    //If i counted is equal to string length, all characters were same
    if(i== strlen(str1)){
        printf("Both strings are identical");
    }
}
//If strings aren't of equal length
else if(strlen(str1)!= strlen(str2)){
    printf("Strings aren't identical");
}
return 0;
} 
