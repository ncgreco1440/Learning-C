#include <stdio.h>

int power(int base, int n) {
  for (int i = 1; i < n; i++) {
    base *= base;
  }
  return base;
}

/**
 * Exercise 1-15, write up a temperature converter function
 * Formula
 * 1) C = (F - 32) * 5/9
 * 2) F = (C / (5/9)) + 32
 */
float toFarenhiet(float celcius) {
  return (celcius / 0.555555) + 32; 
}

float toCelcius(float farenhiet) {
  return (farenhiet - 32) * 0.55555;
}

int main() {
  int i;

  for (i = 0; i < 10; i++) {
    printf("%d %d %d\n", i, power(i, 2), power(-3, i));
  }

  printf("32 degrees Farenheit = %.0f degrees Celcius\n", toCelcius(32));
  printf("32 degrees Celcius = %.0f degrees Farenheit\n", toFarenhiet(0));
  printf("212 degrees Farenheit = %.0f degrees Celcius\n", toCelcius(212));
  printf("100 degrees Celcius = %.0f degrees Farenheit\n", toFarenhiet(100));

  return 0;
}
