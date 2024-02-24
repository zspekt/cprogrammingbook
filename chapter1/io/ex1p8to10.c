// LEFT AT PAGE 20/34

#include <stdbool.h>
#include <stdio.h>

// ex 1-8 count blanks tabs and newlines
void countLinesBlankSpaces() {
  int nl = 0, nb = 0, nt = 0; // counters for new lines, blanks, and tabs

  int sumOfAll = 0;

  int c = 0;

  while ((c = getchar()) != EOF) {
    switch (c) {
    case '\n':
      ++nl;
      break;
    case ' ':
      ++nb;
      break;
    case '\t':
      ++nt;
      break;
    }
  }

  sumOfAll = nl + nt + nb;

  printf("%d\n", sumOfAll);
}

// ex 1-9 write a program to copy its input to its output, replacing
// each string of one or more blanks by a single blank

void replaceBlanks() {
  int c = 0;

  bool inBlankString;

  inBlankString = false;

  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      if (inBlankString) {
        putchar(' ');
        inBlankString = false;
      }
      putchar(c);
      continue;
    }
    inBlankString = true;
  }
}

// ex 1-10 write a program to copy its input to output, replacing
// each tab by \t, each backspace by \b, and each backslash by \\.
// this makes tabs and backspaces visible in an unambiguous way.

void metaCharacterExpliciter() {
  int c = 0;

  while ((c = getchar()) != EOF) {
    switch (c) {
    case '\t':
      putchar('\\');
      putchar('t');
      break;
    case '\b':
      putchar('\\');
      putchar('b');
      break;
    case '\\':
      putchar('\\');
      putchar('\\');
      break;
    default:
      putchar(c);
    }
  }
}

int main() {

  // countLinesBlankSpaces();
  // replaceBlanks();
  metaCharacterExpliciter();

  return 0;
}
