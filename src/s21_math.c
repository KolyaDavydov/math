#include "s21_math.h"

int main() {
     for(double i = 0; i > -20; i = i - 0.1) {
      printf("%.1lf: %lf | %Lf\n", i, sin(i), s21_sin(i));
     }
  //printf("%Lf",s21_factorial(5));
  //printf("     %lf",pow(1.25,3));
  // printf("%lF\n", s21_factorial(6));
  // for(int n = 0; n<30;n++) {
  //   printf("%lF\n", s21_factorial(6));
  // }
}

long double s21_sin(double x) {
  double e = 0.0000001;  // заданная точность
  double sum = 0;
  int n = 1;
  double accur = 1;  // подсчитываемая точность

  //printf("n:%d sum:%lf accur:%lf\n", n, sum, accur);
  while(accur >= e) {  // accur >= e
  //if(n > 100) break;
    sum = sum + pow((-1),(n-1))*((pow(x,(2*n-1)))/(s21_factorial(2*n-1)));
    //accur = pow(x,(2*n-1))/s21_factorial(n);
    accur = pow((-1),(n-1))*((pow(x,(2*n-1)))/(s21_factorial(2*n-1)));
    if (accur < 0) {
      accur = accur * (-1);
    }
    //printf("n:%d sum:%lf accur:%lf\n", n, sum, accur);
    n++;
  }
  //printf("Мой sin:%lf\n", sum);
  return sum;
}

long double s21_factorial(int x) {
  long double a = 1;
  if (x == 0) {
    return 1;
  }
  for (int i = 1; i <= x; i++) {
    a = a * i;
  }
  return a;
}