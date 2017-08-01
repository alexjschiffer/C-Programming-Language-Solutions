/* Exercise 1-13 */
/* Write a program that prints a histogram of the lengths of words in its input */
#include <stdio.h>

int main(void)
{
  int c, i, wl;
  int nchar[10];

  i = 0;
  wl = 0;

  for (int k=0; k<10; k++){
    nchar[k] = 0;
  }

  while ((c = getchar()) != EOF){
    if (c == ' ' || c == '\n' || c == '\t'){
      if (wl == 1){
        nchar[0]++;
      }else if (wl == 2){
        nchar[1]++;
      }else if (wl == 3){
        nchar[2]++;
      }else if (wl == 4){
        nchar[3]++;
      }else if (wl == 5){
        nchar[4]++;
      }else if (wl == 6){
        nchar[5]++;
      }else if (wl == 7){
        nchar[6]++;
      }else if (wl == 8){
        nchar[7]++;
      }else if (wl == 9){
        nchar[8]++;
      }else if (wl == 10){
        nchar[9]++;
      }
      wl = 0;
    }else{
      wl++;
    }
  }
  for (int j=0; j <10; j++){
    printf("%2d |", j+1);
    for (int l = 0; l < nchar[j]; l++){
      putchar("X");
    }
    putchar('\n');
  }
  return 0;
}
