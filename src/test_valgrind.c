#include <math.h>
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

void tc_log_1() {
  long double x = 1.1f;
  long double res = s21_log(x);
  printf("%Lf\n", res);
}

void tc_log_2() {
  long double x = -1.0f;
  long double res = s21_log(x);
  printf("%Lf\n", res);
}

void tc_log_3() {
  long double x = 1.01212121221212212122122212121212121212121212121f;
  long double res = s21_log(x);
  printf("%Lf\n", res);
}

void tc_log_4() {
  long double x = 0.0f;
  long double res = s21_log(x);
  printf("%Lf\n", res);
}

void tc_log_5() {
  long double x = 0.000000000000000000000000000000001f;
  long double res1 = s21_log(x);
  long double exp = s21_exp(res1);
  printf("%Lf\n%Lf\n", res1, exp);
}

void tc_log_6() {
  long double x = 0.000000000000000000000000000000001f;
  int i = 0;
  while (i < 100) {
    x = s21_log(s21_log(x));
    i++;
  }
  printf("%Lf\n", x);
}

void tc_log_7() {
  long double x = -0.000000000000000000000000000000001f;
  int i = 0;
  while (i < 100) {
    x = s21_log(s21_log(x));
    i++;
  }
  printf("%Lf\n", x);
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

void tc_log_8() {
  long double x =
      -0.1;  // если число отрицательное , то степень должна быть всегда целой ,
             // но может быть и отрицательной и положительной
  x = pow(x, 0.1);
  printf("%Lf\n", x);
}

void tc_log_9() {
  long double x =
      10.0f;  // если число положительное , то степень может быть и не целым
  x = s21_pow(x, -0.01f);
  printf("%Lf\n", x);
}

void tc_log_10() {
  for (double i = -10; i < 10; i += 1.5) {
    for (double j = -7; j < 15; j++) {
      long double a = s21_pow(i, j);
      long double b = pow(i, j);
      if ((!isnan(a) && !isnan(b)) && !(a == s21_INF && b == s21_INF) &&
          !(a == -s21_INF && b == -s21_INF)) {
        printf("%Lf\n%Lf\n", a, b);
      } else {
        a = s21_pow(i, j);
        b = pow(i, j);
        printf("%Lf\n%Lf\n", a, b);
      }
    }
  }
}

void tc_log_11() {
  double k = 9;
  long double a = s21_log(k);
  long double b = log(k);
  printf("(1)%Lf\n(2)%Lf\n", a, b);
  a = s21_log(a);
  b = log(b);
  printf("(3)%Lf\n(4)%Lf\n", a, b);
  a = s21_log(a);
  b = log(b);
  printf("(1)%Lf\n(2)%Lf\n", a, b);
}

void tc_log_12() {
  double p = 129.12;
  double g = 129.12;
  long double a = s21_sqrt(p);
  long double b = sqrt(g);
  for (int i = 0; i < 10; i++) {
    a = s21_sqrt(a);
    b = sqrt(b);
    printf("(1)%Lf\n(2)%Lf\n", a, b);
  }
}

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
  tc_log_1();
  tc_log_2();
  tc_log_3();
  tc_log_4();
  tc_log_5();
  tc_log_6();
  tc_log_7();
  tc_log_8();
  tc_log_9();
  tc_log_10();
  tc_log_11();
  tc_log_12();
  tc_ceil();
  tc_abs();
  tc_exp();
  return 0;
}
