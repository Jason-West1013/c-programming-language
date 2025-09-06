#include <stdio.h>

#define TAB_STOP 8

int main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
      for (int i = 0; i < TAB_STOP; i++)
        putchar(' ');
    else
      putchar(c);
  }
}
