#include <stdio.h>

#define BUFFER 25

int main()
{
  int c, pc, currWordCount;
  int nwords[BUFFER];

  // initialize array
  for (int i = 0; i < BUFFER; i++)
    nwords[i] = 0;

  // determine what's a word and store its length
  currWordCount = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (pc != ' ' && pc != '\n' && pc != '\t') {
        ++nwords[currWordCount - 1];
        currWordCount = 0;
      }
    } else {
      ++currWordCount;
    }
    pc = c;
  }

  // print a graph of the word frequencies
  printf("Histogram of Word Lengths\n");
  for (int i = 0; i < BUFFER; ++i) {
    int curr = nwords[i];

    printf("%d: ", i + 1);

    for (int j = 0; j < curr; ++j)
      printf("-");
    
    printf("\n");
  }
}
