#include "s21_math.h"

long double s21_log(double x) {
  int step = 0.0;
  long double result = 0.0f;

  if (x == 0.0f) {
    result = s21_NEGINF;
  } else if (x < 0.0f) {
    result = s21_NAN;
  } else {
    while (x >= s21_E) {
      x /= s21_E;
      step++;
    }
    for (int i = 0; i < 100; i++) {
      result = result + 2 * ((x - exp(result)) / (x + exp(result)));
    }
    result = result + step;
  }
  return result;
}

long double s21_pow(double base, double exp) {
  long double result = 0.0;
  if (base < 0.0) {
    base = -base;
    result = s21_exp(exp * s21_log(base));
    result = -result;
  } else {
    result = s21_exp(exp * s21_log(base));
  }
  return result;
}

long double s21_sqrt(double x) {
  long double result = 0.0f;
  if (x < 0) {
    result = s21_NAN;
  } else {
    result = s21_pow(x, 0.5);
  }
  return result;
}