#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char str[], int len);

int main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];
  max = 0;

  while ((len = getline(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0) {
    printf("String: %s, Length: %d\n", longest, max);
  }

  return 0;
}

int getline(char s[], int lim) {
  int c = 0;
  int i = 0;

  for (; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}

void reverse(char str[], int len) {
  int m = len / 2;
  for (int i = 0; i <= m; i++) {
    printf("%c replaced by %c\n", str[i], str[(len - 1) - i]);
    char tmp = str[i];
    str[i] = str[(len - 1) - i];
    str[(len - 1) - i] = tmp;
  }
}
