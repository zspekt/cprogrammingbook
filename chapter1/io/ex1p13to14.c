#include <stdio.h>

#define IN_WORD 1
#define OUT_WORD 0

#define MAX_WORD_LENGTH 20
#define CHAR_MAX 120

// ex 1-13 write a program to print a histogram of the lengths of
// words in its input. it is easy to draw the histogram with the
// bars horizontal; a vertical orientation is more challenging

void printHistogram() {
  // if theres a word with more than 20 chars we crash
  // a word with 20 chars looks like this..
  // aaaaaaaaaaaaaaaaaaaa so i think we're good

  // we store the word length in the wordLenCounter array
  // the 'key', which is just the index, will be the length of the word
  // the value, an int, will be the amount of times a word of that length has
  // been processed this is why we have a maximum length, the maximum length
  // will be the size of the array, and array sizes have to be known at compile
  // time.

  int lenCounter, i, state, c;
  int wordLenCounter[MAX_WORD_LENGTH];

  lenCounter = c = 0;

  state = OUT_WORD;

  // we initialize the array
  for (i = 1; i <= (MAX_WORD_LENGTH);
       ++i) { // indexes start at 0 so gotta substract 1
    wordLenCounter[i] = 0;
  }

  while ((c = getchar()) != EOF) {

    if (c == ' ' || c == '\t' || c == '\n') { // if c is a WORD ENDER

      if (state == IN_WORD) { // AND we were in a word...
        state = OUT_WORD;     // THE WORD HAS ENDED

        ++wordLenCounter[lenCounter];
        lenCounter = 0; // we reset the WORD LENGTH counter AFTER WE EXEC

        continue;
      } else { // STILL NOT in WORD
        continue;
      }
    } else {
      state = IN_WORD; // WORD has BEGUN || CONTINUED
      ++lenCounter;    // action to take when WORD has BEGUN || CONTINUED
    }
  }

  // we print the word length and its frequency

  for (i = 1; i <= (MAX_WORD_LENGTH); ++i) {
    // indexes start at 0 so gotta substract 1
    printf("%2i --> %i\n", i, wordLenCounter[i]);
  }
}

// ex 1-14 write a program to print a histogram of the frequencies of different
// characters in its input

void printCharHistogram() {
  // literally pasted the code from the previous exercise and made
  // minimal changes

  int lenCounter, i, c;
  int wordLenCounter[CHAR_MAX];

  lenCounter = c = 0;

  // we initialize the array
  for (i = 1; i <= (CHAR_MAX);
       ++i) { // indexes start at 0 so gotta substract 1
    wordLenCounter[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    ++wordLenCounter[c];
  }

  // we print the word length and its frequency

  for (i = 1; i <= (CHAR_MAX); ++i) {
    // indexes start at 0 so gotta substract 1
    printf("%2i --> %i\n", i, wordLenCounter[i]);
  }
  return;
}

int main() {

  // printHistogram();

  printCharHistogram();

  return 0;
}
