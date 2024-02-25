#include <stdio.h>

int power(int m, int n) {
  if (n < 0) {
    printf("Only positive exponents are valid.\n");
    return 0;
  }

  int s = 1;

  int i;

  for (i = 1; i <= n; ++i) {
    s = s * m;
    printf("s is currently --> %i\n", s);
  }

  printf("%i to the power of %i is --> %i\n", m, n, s);
  return m;
}

int main() {

  power(2, 5);

  return 0;
}
