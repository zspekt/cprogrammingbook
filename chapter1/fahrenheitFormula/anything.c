#include <stdio.h>

#define LOWER 0   /* lower limit of the table */
#define UPPER 300 /* upper limit of the table  */
#define STEP 20   /* the step in which the F degrees will increase  */

/*   */

// print fahrenheit on left, celsius on right, on 20 F increments
int main() {

  int start, end, step;
  float celsius, fahrenheit;

  start = 0;
  end = 300;
  step = 20;

  printf("Fahrenheit to Celsius conversion table\n\n");
  for (fahrenheit = end; fahrenheit >= start; fahrenheit = fahrenheit - step) {
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%3.0f\t%6.1f\n", fahrenheit, celsius);
  }
}
