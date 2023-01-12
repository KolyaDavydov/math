#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <math.h>  // для проверки
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// |Функции Маркуса|
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_cos(double x);
long double s21_sin(double x);
long double s21_tan(double x);

// |Функции Никиты|
long double s21_ceil(double x);
int s21_abs(int x);
long double s21_exp(double x);

// |Функции Коляна|
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);

// |Функции Макса|
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sqrt(double x);

#endif  // SRC_S21_MATH_H_