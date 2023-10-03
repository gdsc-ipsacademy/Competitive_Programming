// Encrypting user input by using numeric key provided by user
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char s[1000];
  int j;
  char buf[1024];
  // Prompt user for input
  printf("Plaintext : ");
  fgets(s, sizeof s, stdin);
  ;
  // If input is empty, exit code
  if (strlen(s) == 0) {
    printf("Error: Empty input");
    return 1;
  }
  // Prompt user for key
  do {
    printf("Enter numeric key : ");
    if (!fgets(buf, 1024, stdin)) {
      // reading input failed, give up:
      return 2;
    }
    // have some input, convert it to integer:
    j = atoi(buf);
  } while (j == 0); // repeat until we got a valid number

  printf("Ciphertext : ");
  // Making sure that value of key provided stays in the range of -25 to 25
  if (j > 25) {
    do {
      j = j - 25;
    } while (j >= 25);
  } else if (j < -25) {
    do {
      j = j + 25;
    } while (j <= -25);
  }
  for (int i = 0, n = strlen(s); i < n; i++) {
    // Encrypting small letters
    if (s[i] >= 'a' && s[i] <= 'z') {
      if ((s[i] + j) > 'z') {
        do {
          s[i] = s[i] + j - 26;
        } while ((s[i] + j) > 'z');
        printf("%c", s[i]);
      } else if (j < 0 && (s[i] + j) < 'a') {
        do {
          s[i] = s[i] + j + 26;
        } while ((s[i] + j) < 'a');
        printf("%c", s[i]);
      } else {
        printf("%c", s[i] + j);
      }
    }
    // Encrypting capital letters
    else if (s[i] >= 'A' && s[i] <= 'Z') {
      if ((s[i] + j) > 'Z') {
        do {
          s[i] = s[i] + j - 26;
        } while ((s[i] + j) > 'Z');
        printf("%c", s[i]);
      } else if (j < 0 && (s[i] + j) < 'A') {
        do {
          s[i] = s[i] + j + 26;
        } while ((s[i] + j) < 'A');
        printf("%c", s[i]);
      } else {
        printf("%c", s[i] + j);
      }
    }
    // Printing characters other than alphabets
    else {
      printf("%c", s[i]);
    }
  }
  return 0;
}