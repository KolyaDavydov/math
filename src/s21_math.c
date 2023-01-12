#include "s21_math.h"

long double s21_ceil(double x) {
  long double result;

  if (s21_isnan(x) /* NAN check */ || x == s21_INF || x == -s21_INF || x == 0) {
    result = x;
  } else {
    int floored = (int)x;
    floored += (x > 0.0f && x != floored);
    result = (long double)floored;
  }

  return result;
}

int s21_abs(int x) { return x < 0 ? -x : x; }

/*
  Currently this implementation will timeout.
  fabs function needed to write proper implementation
*/
long double s21_exp(double x) {
  long double result = 0.0f;

  if (s21_isnan(x) || x == s21_INF || x == 0) {
    result = x;
  } else if (x < 0) {
    result = 1 / s21_exp(-x);
  } else {
    long double x1 = 1.0f, precision = 0.000001;
    int n = 0;

    do {
      result += x1;
      x1 *= (x / ++n);
    } while (x1 > precision);
  }

  return result;
}

int s21_isnan(double x) { return x != x; }