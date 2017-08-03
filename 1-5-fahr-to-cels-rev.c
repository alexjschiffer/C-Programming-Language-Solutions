#include <stdio.h>

/* Exercise 1-5: Program for printing a table of Fahrenheit and Celsius values from 300 to 0 */

main(){
  float fahr, cels;
  int lower, upper, step;

  /* Assign values to the variables */
  step = 20;
  fahr = lower;

  /* Print a header for the table */
  printf("Fahrenheit\t    Celsius\n");

  for (fahr = 300; fahr > 0; fahr = fahr - step){
    printf("%10.0f \t %10.1f \n", fahr, 5.0/9.0 * (fahr - 32.0));
  }
}
