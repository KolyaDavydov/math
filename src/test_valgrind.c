#include <stdio.h>
#include <stdlib.h>

#include "s21_math.h"

// <=== TEST CASES: s21_abs ===>

void tc_log_1() {
  long double x = 1.1f;
  long double res = s21_pow(x, -3);
  printf("%Lf", res);
}

int main(void) {
  tc_log_1();

  return 0;
}