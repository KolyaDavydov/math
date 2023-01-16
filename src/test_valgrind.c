#include <stdio.h>
#include <stdlib.h>

#include "s21_math.h"

// <=== TEST CASES: s21_abs ===>

void tc_log_1() {
  long double x = 1.1f;
  long double res = log(x);
  printf("%Lf\n", res);
}

void tc_log_2() {
  long double x = -1.0f;
  long double res = log(x);
  printf("%Lf\n", res);
}

void tc_log_3() {
  long double x = 1.01212121221212212122122212121212121212121212121f;
  long double res = log(x);
  printf("%Lf\n", res);
}

void tc_log_4() {
  long double x = 0.0f;
  long double res = log(x);
  printf("%Lf\n", res);
}

void tc_log_5() {
  long double x = 0.000000000000000000000000000000001f;
  long double res1 = log(x);
  long double exp1 = exp(res1);
  printf("%Lf\n%Lf\n", res1, exp1);
}

void tc_log_6() {
  long double x = 0.000000000000000000000000000000001f;
  int i = 0;
  while (i < 100) {
    x = log(log(x));
    i++;
  }
  printf("%Lf\n", x);
}

void tc_log_7() {
  long double x = -0.000000000000000000000000000000001f;
  int i = 0;
  while (i < 100) {
    x = log(log(x));
    i++;
  }
  printf("%Lf\n", x);
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
  // long double x = 709.8f; // если число положительное , то степень может быть
  // и не целым x = pow(x, 700.1f); printf("%Lf\n", x);

  // for (double k = -9; k <= 9; k += 1.7) {
  //   for (double g = -5; g < 5; g += 1) {
  //     long double a = s21_pow(k, g);
  //     long double b = pow(k, g);
  //     if ((!isnan(a) && !isnan(b)) && !(a == INFINITY && b == INFINITY) &&
  //         !(a == -INFINITY && b == -INFINITY)) {
  //       printf("(1)%Lf\n(2)%Lf\n", a, b);
  //     }
  //     a = s21_pow(g, k);
  //     b = pow(g, k);
  //     if ((!isnan(a) && !isnan(b)) && !(a == INFINITY && b == INFINITY) &&
  //         !(a == -INFINITY && b == -INFINITY)) {
  //       printf("(3)%Lf\n(4)%Lf\n", a, b);
  //     }
  //   }
  // }

  // double k = -9;
  // double g = -5;
  // long double a = s21_pow(k, g);
  // long double b = pow(k, g);
  // printf("(1)%Lf\n(2)%Lf\n", a, b);
  // a = s21_pow(g, k);
  // b = pow(g, k);
  // printf("(3)%Lf\n(4)%Lf\n", a, b);
  // a = s21_pow(g, k);
  // b = pow(g, k);
  // printf("(1)%Lf\n(2)%Lf\n", a, b);

  // double k = 9;
  // double g = -0.00100000000000000000000000001;

  // long double a = pow(INFINITY, 1.0);
  // long double b = s21_pow(INFINITY, 1.0);

  // long double a = pow(-INFINITY, -1);
  // long double b = s21_pow(-INFINITY, -1);

  // long double a = pow(-INFINITY, -1);
  // long double b = s21_pow(-INFINITY, -1);

  // long double a = pow(INFINITY, -1);
  // long double b = s21_pow(INFINITY, -1);

  long double a = pow(1.0, -s21_NAN);
  long double b = s21_pow(1.0, -s21_NAN);

  // long double b = pow(1.1, INFINITY);

  // long double a = pow(-1, INFINITY);
  // long double b = s21_pow(-1, INFINITY);

  // long double a = pow(-1, -INFINITY);
  // long double b = s21_pow(-1, -INFINITY);

  // long double a = pow(-1.5, -INFINITY);
  // long double b = s21_pow(-1.5, -INFINITY);

  // long double b = pow(-INFINITY, 1);
  // long double b = pow(INFINITY, -1);
  // long double b = pow(-INFINITY, -1);
  // long double b = pow(k, g);
  // printf("%Lf", a);
  printf("%Lf\n%Lf", a, b);
}

int main(void) {
  // tc_log_1();
  // tc_log_2();
  // tc_log_3();
  // tc_log_4();
  // tc_log_5();
  // tc_log_6();
  // tc_log_7();
  // tc_log_8();
  // tc_log_9();
  tc_log_10();

  return 0;
}
