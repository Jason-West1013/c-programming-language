#include <stdio.h>

int main()
{
  int c, pc;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (pc != ' ' && pc != '\n' && pc != '\t') {
        putchar('\n');
      }
    } else {
      putchar(c);
    }
    pc = c;
  }
}
