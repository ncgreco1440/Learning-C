#include <stdio.h>

int power(int base, int n) {
  for (int i = 1; i < n; i++) {
    base *= base;
  }
  return base;
}

int main() {
  int i;

  for (i = 0; i < 10; i++) {
    printf("%d %d %d\n", i, power(i, 2), power(-3, i));
  }

  return 0;
}
