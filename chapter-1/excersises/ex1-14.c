#include <stdio.h>

#define BUFFER 94

int main()
{
  int c;
  int nchars[BUFFER];

  for (int i = 0; i < BUFFER; i++)
    nchars[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c >= 33 && c <= 126)
      ++nchars[c - 33];
  }

  printf("Histogram of Character Counts\n");
  for (int i = 0; i < BUFFER; i++) {
    putchar(i + 33);
    printf(": ");
    for (int j = 0; j < nchars[i]; j++) {
      printf("-");
    }
    printf("\n");
  }
}
