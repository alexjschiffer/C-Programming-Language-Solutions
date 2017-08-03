#include <stdio.h>

/* Exercise 1-15: Program for printing a table of Celsius and Fahrenheit values, rewritten using a function */

float fahr(float c);

int main(void){
  float cels;
  int lower, upper, step;

  /* Assign values to the variables */
  lower = 0;
  upper = 300;
  step = 20;
  cels = lower;

  printf("   Celsius\tFahrenheit\n");

  while(cels < upper){
    printf("%10.0f \t %9.1f \n", cels, fahr(cels));
    cels = cels + step;
  }
  return 0;
}

float fahr(float c){
  return (9.0/5.0*c) + 32.0;
}
