//Encrypting user input by using 26 character long alphabetic key provided by user
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
char key[26];
char text[1000];
//Prompt user for key
do{
    printf("Provide a 26 character long key : ");
    scanf("%s", key);
    //If key is empty, exit code
    if(strlen(key) == 0){
        printf("Error: Empty input");
        return 1;
    }
    //If key is incomplete, prompt user again for complete key
    if(strlen(key)!= 26){
        printf("Error: Incomplete key\n");
    }
}while(strlen(key) != 26);
//If key has values other than alphabets, exit code
for(int i= 0, n= strlen(key); i<n; i++){
    if((key[i]< 'a' || key[i]> 'z') && (key[i]< 'A' || key[i]> 'Z')){
        printf("Error: Invalid key");
        return 2;
    }
}
//If key has repeated values, exit code
for(int i= 0; i< strlen(key); i++){
    for(int j= i+ 1; key[j]!= '\0'; j++){
        int x, y;
        if(islower(key[i])){
            x = key[i] - 'a';
        }
        else {
            x = key[i] - 'A';
        }
        if(islower(key[j])){
            y = key[j] - 'a';
        }
        else {
            y = key[j] - 'A';
        }
    if(x == y){
    printf("Error: Repeated characters in key");
    return 3;
    }
    }
}
//Prompt user for input
printf("Plaintext : ");
scanf("%s", text);
//If input is empty, exit code
if(strlen(text) == 0){
    printf("Error: Empty input");
    return 4;
}
printf("Ciphertext: ");
for(int i= 0, n= strlen(text); i< n; i++){
    //Encrypting small letters
    if(text[i] >= 'a' && text[i] <= 'z'){
         printf("%c", key[text[i]-'a']);
    }
    //Encrypting capital letters
    else if(text[i] >= 'A' && text[i] <= 'Z'){
         printf("%c", key[text[i]-'A']-('a'-'A'));
    }
    //Printing characters other than alphabets
    else{
        printf("%c", text[i]);
    }
}
return 0;
}
//qwertyuioplkjhgfdsazxcvbnm