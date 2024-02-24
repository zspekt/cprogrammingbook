#include <stdio.h>

int main() {

  long nc;
  int c;

  // one way
  while ((c = getchar()) != EOF && c != '\n') {
    ++nc;
  }

  printf("%li\n", nc);

  // another
  for (nc = 0 ; (c = getchar()) != EOF && c != '\n'; ++nc)
    ; // for loops NEEDS to have a body. semicolon here fulfills that requirement
  printf("%li\n", nc);

  return 0;
}
