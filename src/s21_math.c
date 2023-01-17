#include "s21_math.h"

long double s21_log(double x) {
  int step = 0.0;
  long double result = 0.0f;

  if (x == s21_INF) {
    result = s21_INF;
  } else if (x == 0.0f) {
    result = s21_NEGINF;
  } else if (x < 0.0f) {
    result = s21_NAN;
  } else {
    while (x >= s21_E) {
      x /= s21_E;
      step++;
    }
    for (int i = 0; i < 100; i++) {
      result = result + 2 * ((x - s21_exp(result)) / (x + s21_exp(result)));
    }
    result = result + step;
  }
  return result;
}

long double s21_pow(double base, double exp) {
  long double result = 0.0;
  long double ost = exp - (int)exp;  // узнали есть ли остаток в дробной части
  if (exp == 0.0) {
    result = 1.0;
  } else {
    if (s21_isnan(base) || s21_isnan(exp)) {
      if (base == 1.0)
        result = 1.0;
      else
        result = s21_NAN;
    } else {
      if (base == s21_INF) {
        if (exp > 0.0) result = s21_INF;
        if (exp < 0.0) result = 0.0;
      } else if (base == -s21_INF) {
        if ((exp > 0.0) && (ost == 0.0 || s21_fmod(exp, 2.0) != 0.0))
          result = -s21_INF;
        if ((exp > 0.0) && (ost != 0.0 || s21_fmod(exp, 2.0) == 0.0))
          result = s21_INF;
        if ((exp < 0.0) && (ost == 0.0 || s21_fmod(exp, 2.0) != 0.0))
          result = -0.0;
        if ((exp < 0.0) && (ost != 0.0 || s21_fmod(exp, 2.0) == 0.0))
          result = 0.0;
      } else if (exp == s21_INF) {
        if (base > -1.0 && base < 1.0) result = 0.0;
        if (base == -1.0 || base == 1.0) result = 1.0;
        if (base < -1.0 || base > 1.0) result = s21_INF;
      } else if (exp == -s21_INF) {
        if (base > -1.0 && base < 1.0) result = s21_INF;
        if (base == -1.0 || base == 1.0) result = 1.0;
        if (base < -1.0 || base > 1.0) result = 0.0;
      } else {
        if (base < 0.0 && ost) {
          result = s21_NAN;
        } else {
          if (base < 0.0f) {
            base = s21_fabs(base);  // перевели в положительное число // тут

            result = s21_exp(exp * s21_log(base));
            // получили число в exp степени
            if (s21_fmod(exp, 2.0)) result = -result;
            // тут проверили была ли степень четной
          } else {
            result = s21_exp(exp * s21_log(base));
          }
        }
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