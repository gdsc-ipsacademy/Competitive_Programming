//Uppercasing a string
#include <stdio.h>
#include <string.h>

int main(){
char s[1000];
printf("Enter name : ");
gets(s);
printf("Uppercase : ");
for(int i= 0,n= strlen(s); i<n; i++){
    if(s[i]>= 'a' && s[i]<= 'z'){
        printf("%c", s[i]-('a'-'A'));
    }
    else{
        printf("%c", s[i]);
    }

}
return 0;
}