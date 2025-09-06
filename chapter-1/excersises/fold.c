#include <stdio.h>

#define MAX_LENGTH 10

int main()
{
  int c, len;

  len = 0;
  while ((c = getchar()) != EOF)
  {
    if (len >= MAX_LENGTH && c == ' ' || c == '\t')
    {
      putchar('\n');
      len = 0;
    }

    if (len != 0 || (c != ' ' && c != '\t'))
      putchar(c);

    len++;
  }
}
