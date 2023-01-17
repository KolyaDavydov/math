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

int main(void) {
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
  return 0;
}
