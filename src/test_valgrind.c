#include <stdio.h>
#include <stdlib.h>

#include "s21_math.h"

void tc_ceil() {
  s21_ceil(1.123456f);
  s21_ceil(-1.123456f);
  s21_ceil(s21_NAN);
  s21_ceil(s21_INF);
  s21_ceil(-s21_INF);
  s21_ceil(10);
}

void tc_abs() {
  s21_abs(1);
  s21_abs(-1);
}

void tc_exp() {
  s21_exp(1);
  s21_exp(s21_NAN);
  s21_exp(s21_INF);
  s21_exp(-s21_INF);
  s21_exp(1.1223);
  s21_exp(-34.57886);
  s21_exp(-123456789.97531);
  s21_exp(709.8);
  s21_exp(7093562174.8454);
  s21_exp(0.0);
}

int main(void) {
  tc_ceil();
  tc_abs();
  tc_exp();

  return 0;
}