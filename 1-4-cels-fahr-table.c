#include <stdio.h>

/* Exercise 1-4: Program for printing a table of Celsius and Fahrenheit values */

main(){
  float fahr, cels;
  int lower, upper, step;

  /* Assign values to the variables */
  lower = 0;
  upper = 300;
  step = 20;
  cels = lower;

  printf("   Celsius\tFahrenheit\n");

  while(cels < upper){
    fahr = (9.0/5.0*cels) + 32.0;
    printf("%10.0f \t %9.1f \n", cels, fahr);
    cels = cels + step;
  }
}
