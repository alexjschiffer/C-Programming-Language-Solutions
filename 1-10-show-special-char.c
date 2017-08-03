#include <stdio.h>

/* Exercise 1-10: explicitly print special characters from the input */

int main(){
  int c;

  while ((c = getchar()) != EOF){
    if (c == '\t'){
      putchar("\\");
      putchar("t");
    }
    if (c == '\b'){
      putchar("\\");
      putchar("b");
    }
    if (c == '\\'){
      putchar("\\");
      putchar("\\");
    }
    else{
      putchar(c);
    }
  }
}
