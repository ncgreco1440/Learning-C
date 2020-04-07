#include <stdio.h>

int main() {
  int c;
  int word, i, n;
  int count[10];
  word = i = 0;

  for (; i < 10; i++) {
    count[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (word <= 9) {
        count[word]++;
      }
      word = 0;
    } else {
      word++;
    }
  }

  /**
   * Print the histogram here, to avoid the indicies that have 0 entries
   */
  for (i = 1; i < 10; i++) {
    if (count[i] > 0) {
      printf("[%d]:", i);
      for (int j = 0; j < count[i]; j++) {
        printf("=");
      }
      printf("\n");
    }
  }

  return 0;
}