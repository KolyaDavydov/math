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
/**
 * @brief округление вверх
 *
 * @param x число которое нужно округлить
 *
 * @returns число после округления
 */
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

/**
 * @brief модуль целого числа
 *
 * @param x число модуль которого необходимо найти
 *
 * @returns модуль числа
 */
int s21_abs(int x) { return x < 0 ? -x : x; }

/**
 * @brief Возводит константу E в степень x
 *
 * @param x степень числа E
 *
 * @returns inf | nan | e | полученный результат
 */
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

/**
 * @brief проверка числа на NAN
 *
 * @param x проверяемое число
 *
 * @returns 1 или 0
 */
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

long double s21_sqrt(double x) {
  long double result = 0.0f;
  if (x < 0) {
    result = s21_NAN;
  } else {
    result = s21_pow(x, 0.5);
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
