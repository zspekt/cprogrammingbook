#include <stdio.h>

// exercise 1.6 & 1.7

int main() {

  // verify expression

  int number;
  number = (getchar() != EOF);
  printf("\n result of expression -> %i\n", number);


  // print value of EOF

  printf("%i\n", EOF);

  return 0;
}
