#include <stdio.h>

#define MAXLINE 1000

// TODO: still need to check for full blank lines

int fgetline(char line[], int maxline);
void copy(char to[], char from[]);
int removeTrailingBlanks(char line[], int len);

int main()
{
  int len;
  int max;
  char line [MAXLINE];
  char longest [MAXLINE];

  max = 0;
  while ((len = fgetline(line, MAXLINE)) > 0) {
    len = removeTrailingBlanks(line, len);
  
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0)
    printf("%s", longest);
  
  return 0;
}

int fgetline(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    s[i] = c;
  if (c == '\n') {
    s[i++] = c;
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

int removeTrailingBlanks(char s[], int len)
{
  int i;

  i = len;
  while (i > 0 && (s[i-1] == 9 || s[i-1] == 32 || s[i-1] == 10))
    i--;

  s[i++] = 10;
  s[i] = 0;
  return i;
}
