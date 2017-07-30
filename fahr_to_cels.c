#include <stdio.h>

/* Program for printing a table of Fahrenheit and Celsius values */

main(){
  float fahr, cels;
  int lower, upper, step;

  /* Assign values to the variables */
  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;

  printf("Fahrenheit\t    Celsius\n");

  while(fahr < upper){
    cels = 5.0/9.0 * (fahr - 32.0);
    printf("%10.0f \t %10.1f \n", fahr, cels);
    fahr = fahr + step;
  }
}
