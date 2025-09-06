#include <stdio.h>

#define TAB_STOP 3

void entab(int c, int pc);

int main()
{
  int c, pc;

  while ((c = getchar()) != EOF)
  {
    if (c == '\t' || c == ' ')
      entab(c, pc);
    else
      putchar(c);
    pc = c;
  }
}

void entab(int c, int pc)
{
  if ((pc == ' ' || pc == '\t') && (c == '\t' || c == ' '))
    return;

  for (int i = 0; i < TAB_STOP; i++)
    putchar(' ');
}

