/* Exercise 1-8 */
#include <stdio.h>

main(){
  int c, bn, tn, nn;

  bn = 0;
  tn = 0;
  nn = 0;

  while ((c = getchar()) != EOF){
    if (c == '\n'){
      ++nn;
    }
    if (c == '\t'){
      ++tn;
    }
    if (c == ' '){
      ++bn;
    }
  }
  printf("\n");
  printf("Blanks Tabs New Lines\n", bn, tn, nn);
  printf("%6d %4d %9d\n", bn, tn, nn);
}
