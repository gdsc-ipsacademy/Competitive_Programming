//Appending a string at the end of another string
#include <stdio.h>

int main(){
char initial[100];
//Prompt user for first string
printf("Enter initial string : ");
gets(initial);
char destination[100];
//Prompt user for second srting
printf("Enter destination string : ");
gets(destination);
int i= 0, j= 0;
//Counting upto null character in destination string
while(destination[i]!= '\0'){
    i++;
}
//Inserting space at the end of destination string
destination[i]= ' ';
//Copying initial string in destination string after the space
while(initial[j]!= '\0'){
        destination[i+1]= initial[j];
        i++;
        j++;
}
//Inserting null character
destination[i+1]= '\0';
printf("After appending, the final string is : %s", destination);
return 0;
}
