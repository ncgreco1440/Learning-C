#include <stdio.h>

int hasWords(int* array, int length) { 
  for (int i = 1; i < length; i++) {
    if (array[i] > 0) {
      return 1;
    }
  }
  return 0;
}

int main() {
  int c, word, n, i;
  int count[10];
  
  word = n = i = 0;

  for (; i < 10; i++) {
    count[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == ' ') {
      if (word <= 9) {
        count[word]++;
      }
      word = 0;
    } else {
      ++word;
    }
  }

  printf("123456789\n");
  while (hasWords(count, 10)) {
    for (i = 1; i < 10; i++, n++) {
      if (count[i] > 0) {
        printf("=");
        count[i]--;
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0; 
}