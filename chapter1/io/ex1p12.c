#include <stdio.h>

// ex 1-12 write a program that prints its input one word per line

#define IN_WORD 1
#define OUT_WORD 0

void printOneWordPerLine() {

  int state = OUT_WORD;
  int c = 0;

  while ((c = getchar()) != EOF) {
    
    if (c == ' ' || c == '\t' || c == '\n') { // if c is a space or a tab or newline
      
      if (state == IN_WORD) { // AND we were in a word...
        state = OUT_WORD;
        putchar('\n'); // we print a new line,
        continue;
      } else {
        continue;
      }
    } else {
      state = IN_WORD;
      putchar(c);
    }
  }
}

int main() {

  printOneWordPerLine();

  return 0;
}
