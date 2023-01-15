#include <stdio.h>
#include <stdlib.h>

#include "s21_math.h"

void tc_sin() {
  s21_sin(100);
  s21_sin(-100);
  s21_sin(INFINITY);
  s21_sin(NAN);
  s21_sin(0);
  s21_sin(PI / 6);
  s21_sin(PI / 4);
  s21_sin(PI / 3);
  s21_sin(PI / 2);
  s21_sin(PI);
  s21_sin(3 * PI / 2);
  s21_sin(2 * PI);
  s21_sin(-PI / 6);
  s21_sin(-PI / 4);
  s21_sin(-PI / 3);
  s21_sin(-PI / 2);
  s21_sin(-PI);
  s21_sin(-3 * PI / 2);
  s21_sin(-2 * PI);
}

void tc_cos() {
  s21_cos(100);
  s21_cos(-100);
  s21_cos(INFINITY);
  s21_cos(NAN);
  s21_cos(0);
  s21_cos(PI / 6);
  s21_cos(PI / 4);
  s21_cos(PI / 3);
  s21_cos(PI / 2);
  s21_cos(PI);
  s21_cos(3 * PI / 2);
  s21_cos(2 * PI);
  s21_cos(-PI / 6);
  s21_cos(-PI / 4);
  s21_cos(-PI / 3);
  s21_cos(-PI / 2);
  s21_cos(-PI);
  s21_cos(-3 * PI / 2);
  s21_cos(-2 * PI);
}

void tc_tan() {
  s21_tan(100);
  s21_tan(-100);
  s21_tan(INFINITY);
  s21_tan(NAN);
  s21_tan(0);
  s21_tan(PI / 6);
  s21_tan(PI / 4);
  s21_tan(PI / 3);
  s21_tan(PI / 2);
  s21_tan(PI);
  s21_tan(3 * PI / 2);
  s21_tan(2 * PI);
  s21_tan(-PI / 6);
  s21_tan(-PI / 4);
  s21_tan(-PI / 3);
  s21_tan(-PI / 2);
  s21_tan(-PI);
  s21_tan(-3 * PI / 2);
  s21_tan(-2 * PI);
}

void tc_asin() {
  s21_asin(100);
  s21_asin(-100);
  s21_asin(INFINITY);
  s21_asin(NAN);
  s21_asin(0);
  s21_asin(PI / 6);
  s21_asin(PI / 4);
  s21_asin(PI / 3);
  s21_asin(PI / 2);
  s21_asin(PI);
  s21_asin(3 * PI / 2);
  s21_asin(2 * PI);
  s21_asin(-PI / 6);
  s21_asin(-PI / 4);
  s21_asin(-PI / 3);
  s21_asin(-PI / 2);
  s21_asin(-PI);
  s21_asin(-3 * PI / 2);
  s21_asin(-2 * PI);
}

void tc_acos() {
  s21_acos(100);
  s21_acos(-100);
  s21_acos(INFINITY);
  s21_acos(NAN);
  s21_acos(0);
  s21_acos(PI / 6);
  s21_acos(PI / 4);
  s21_acos(PI / 3);
  s21_acos(PI / 2);
  s21_acos(PI);
  s21_acos(3 * PI / 2);
  s21_acos(2 * PI);
  s21_acos(-PI / 6);
  s21_acos(-PI / 4);
  s21_acos(-PI / 3);
  s21_acos(-PI / 2);
  s21_acos(-PI);
  s21_acos(-3 * PI / 2);
  s21_acos(-2 * PI);
}

void tc_atan() {
  s21_atan(100);
  s21_atan(-100);
  s21_atan(INFINITY);
  s21_atan(NAN);
  s21_atan(0);
  s21_atan(PI / 6);
  s21_atan(PI / 4);
  s21_atan(PI / 3);
  s21_atan(PI / 2);
  s21_atan(PI);
  s21_atan(3 * PI / 2);
  s21_atan(2 * PI);
  s21_atan(-PI / 6);
  s21_atan(-PI / 4);
  s21_atan(-PI / 3);
  s21_atan(-PI / 2);
  s21_atan(-PI);
  s21_atan(-3 * PI / 2);
  s21_atan(-2 * PI);
}

int main(void) {
  tc_sin();
  tc_cos();
  tc_tan();
  tc_asin();
  tc_acos();
  tc_atan();

  return 0;
}
