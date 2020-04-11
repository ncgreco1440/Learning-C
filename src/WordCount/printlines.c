#include <stdio.h>

/**
 * Prints out all input words on 1 line each.
 */
int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\t' && c != '\n') {
      putchar(c);
    } else {
      putchar('\n');
    }
  }

  return 0;
}
