//Extracting a substring from a string
#include <stdio.h>
#include <string.h>

int main(){
char string1[100];
//Prompt user for string 
printf("Enter string : ");
gets(string1);
int m;
//Asking user from where the string has to be extracted
printf("Enter the position from which substring would start : ");
scanf("%i", &m);
if(m> strlen(string1)){
    printf("Error : string is shorter than this position");
    return 1;
}
int n;
//Asking user the length of substring
printf("Enter length of substring : ");
scanf("%i", &n);
if(n> strlen(string1)- m){
    printf("Error : string is shorter than this position");
    return 2;
}
char string2[100];
int j= 0;
//Iterating until reaching null character and also until n characters are copied
while(string1[m]!= '\0' && n>0){
    string2[j]= string1[m];
    j++;
    m++;
    n--;
}
string2[j]= '\0';
printf("%s", string2);
return 0;
}