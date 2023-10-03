//Determine the length of a string without strlen
#include <stdio.h>

int main(){
char s[1000];
printf("Input name: ");
gets(s);
int i = 0;
while(s[i]!='\0'){
    i++;
}
printf("Length of name: %d", i);
return 0;
}
