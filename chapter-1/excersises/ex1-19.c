#include <stdio.h>

#define MAXLINE 1000

int fgetline(char line[], int maxline);
void copy(char to[], char from[]);
void freverse(char line[], char rev[], int len);

int main()
{
  int len;
  int max;
  char line [MAXLINE];
  char longest [MAXLINE];
  char reverse [MAXLINE];

  max = 0;
  while ((len = fgetline(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }

  if (max > 0)
  {
    freverse(longest, reverse, max);
    printf("%s", longest);
    printf("%s", reverse);
  }
  
  return 0;
}

int fgetline(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[])
{
  int i;

  i = 0;
  while((to[i] = from[i]) != '\0')
    i++;
}

void freverse(char line[], char rev[], int len)
{
  int i;

  for (i = 0; i < len - 1; i++)
  {
    rev[i] = line[len - i - 2];
  }
  rev[i++] = '\n';
  rev[i] = '\0';
}
