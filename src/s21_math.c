#include "s21_math.h"

int s21_abs(int x) { return x < 0 ? -x : x; }

long double s21_exp(double x) {
  long double x1 = 1.0f, precision = 0.000001, x, result = 0.0f;
  int n = 0;

  do {
    result += x1;
    x1 *= (x / ++n);
  } while (x1 > precision);

  return result;
}
