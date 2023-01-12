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

/**
 * @brief модуль числа типа double
 *
 * @param x число модуль которого необходимо найти
 *
 * @returns модиль числа double
 */
long double s21_fabs(double x) {
  if (x < 0.0) x = -x;
  return x;
}

/**
 * @brief округление вниз
 *
 * @param x число которое нужно округлить
 *
 * @returns число после округления
 */
long double s21_floor(double x) {
  long double result;
  if (x >= LLONG_MAX || x <= LLONG_MIN || x != x) {
    result = x;
  } else {
    result = (int64_t)x;
    if (x < 0) {
      if ((int64_t)x != x) result = (int64_t)(x - 1);
    }
  }
  return result;
}

/**
 * @brief остаток операции деления с плавающей точкой
 *
 * @param x делимое
 * 
 * @param y делитель
 *
 * @returns остаток от деления
 */
long double s21_fmod(double x, double y) {
  long double result;
  
  if (y == 0.0) {
    result = s21_NAN;
  } else if (y == s21_INF || y == s21_NEGINF) {
    result = x;
  } else {
    if (x / y < 0) {
      result = x - s21_ceil(x / y) * y;
    } else {
      result = x - s21_floor(x / y) * y;
    }
  }
  return result;
}