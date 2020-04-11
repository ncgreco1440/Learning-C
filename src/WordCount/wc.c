#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  int c, nl, nw, nc, state;
  state = OUT;
  nl = nw = nc = 0;

  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n') {
      // Newline detected, increment the new line counter
      ++nl;
    }
    if (c == ' ' || c == '\t' || c == '\n') {
      // Space/Tab/Newline detected, swap STATE to be OUT mode
      state = OUT;
    } else if (state == OUT) {
      // Since state is in OUT mode, change it to IN mode and increment the word count
      // We will come back into this block when we encounter the next newline, space, or tab char
      state = IN;
      ++nw;
    }
  }

  printf("Lines: %d\nWords: %d\nCharacters: %d\n", nl, nw, nc);

  return 0;
}
