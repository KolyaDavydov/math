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
  long double ost = exp - (int)exp;
  if (exp == 0.0) {
    result = 1.0;
  } else {
    if (base < 0.0 && ost) {
      result = s21_NAN;
    } else {
      if (base < 0.0f) {
        base = -base;  // перевели в положительное число
        result = s21_exp(exp * s21_log(base));  // получили число в степени
        if (fmod(exp, 2.0)) result = -result;
      } else {
        result = s21_exp(exp * s21_log(base));
      }
    }
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

long double s21_exp(double x) {
  long double result = 1.0f;
  if (s21_isnan(x) || x == s21_INF) {
    result = x;
  } else if (x < 0) {
    result = 1 / s21_exp(-x);
  } else if (x == 0.0f) {
    result = 1.0f;
  } else if (x == 1.0f) {
    result = s21_E;
  } else if (x >= 709.8) {
    result = s21_INF;
  } else {
    long double step = result, precision = 1e-16, fact = 1.0f, pow = 1.0f;
    int n = 0;

    do {
      step = result;
      fact *= ++n;
      pow *= x;
      result += pow / fact;
    } while (s21_fabs(step - result) > precision);
  }

  return result;
}

int s21_isnan(double x) { return x != x; }

long double s21_fabs(double x) {
  if (x < 0.0) x = -x;
  return x;
}
