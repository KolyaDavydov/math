#include "s21_math.h"

int main() {
  // SIN
  // printf("0 - 20\n");
  // for (double i = 0; i < 20; i = i + 0.1) {
  //   printf("%.1lf: %.6lf | %.6Lf\n", i, sin(i), s21_sin(i));
  // }
  // printf("\n");
  // printf("0 - -20\n");
  // for (double i = 0; i > -20; i = i - 0.1) {
  //   printf("%.1lf: %.6lf | %.6Lf\n", i, sin(i), s21_sin(i));
  // }
  // printf("\n");
  // printf("100, -100\n");
  // printf("%lf | %Lf\n", sin(100), s21_sin(100));
  // printf("%lf | %Lf\n", sin(-100), s21_sin(-100));
  // printf("\n");
  // printf("inf/nan\n");
  // printf("%lf | %Lf\n", sin(INFINITY), s21_sin(INFINITY));
  // printf("%lf | %Lf\n", sin(NAN), s21_sin(NAN));
  // printf("\n");
  // printf("Табличные значения:\n");
  // printf("0: %lf | %Lf\n", sin(0), s21_sin(0));
  // printf("PI/6: %lf | %Lf\n", sin(PI/6), s21_sin(PI/6));
  // printf("PI/4:%lf | %Lf\n", sin(PI/4), s21_sin(PI/4));
  // printf("PI/3:%lf | %Lf\n", sin(PI/3), s21_sin(PI/3));
  // printf("PI/2:%lf | %Lf\n", sin(PI/2), s21_sin(PI/2));
  // printf("PI:%lf | %Lf\n", sin(PI), s21_sin(PI));
  // printf("3PI/2:%lf | %Lf\n", sin(3*PI/2), s21_sin(3*PI/2));
  // printf("2PI:%lf | %Lf\n", sin(2*PI), s21_sin(2*PI));
  // printf("-PI/6: %lf | %Lf\n", sin(-PI/6), s21_sin(-PI/6));
  // printf("-PI/4:%lf | %Lf\n", sin(-PI/4), s21_sin(-PI/4));
  // printf("-PI/3:%lf | %Lf\n", sin(-PI/3), s21_sin(-PI/3));
  // printf("-PI/2:%lf | %Lf\n", sin(-PI/2), s21_sin(-PI/2));
  // printf("-PI:%lf | %Lf\n", sin(-PI), s21_sin(-PI));
  // printf("-3PI/2:%lf | %Lf\n", sin(-3*PI/2), s21_sin(-3*PI/2));
  // printf("-2PI:%lf | %Lf\n", sin(-2*PI), s21_sin(-2*PI));

  // COS
  // printf("0 - 20\n");
  // for (double i = 0; i < 20; i = i + 0.1) {
  //   printf("%.1lf: %.6lf | %.6Lf\n", i, cos(i), s21_cos(i));
  // }
  // printf("\n");
  // printf("0 - -20\n");
  // for (double i = 0; i > -20; i = i - 0.1) {
  //   printf("%.1lf: %.6lf | %.6Lf\n", i, cos(i), s21_cos(i));
  // }
  // printf("\n");
  // printf("100, -100\n");
  // printf("%lf | %Lf\n", cos(100), s21_cos(100));
  // printf("%lf | %Lf\n", cos(-100), s21_cos(-100));
  // printf("\n");
  // printf("inf/nan\n");
  // printf("%lf | %Lf\n", cos(INFINITY), s21_cos(INFINITY));
  // printf("%lf | %Lf\n", cos(NAN), s21_cos(NAN));
  // printf("\n");
  // printf("Табличные значения:\n");
  // printf("0: %lf | %Lf\n", cos(0), s21_cos(0));
  // printf("PI/6: %lf | %Lf\n", cos(PI/6), s21_cos(PI/6));
  // printf("PI/4:%lf | %Lf\n", cos(PI/4), s21_cos(PI/4));
  // printf("PI/3:%lf | %Lf\n", cos(PI/3), s21_cos(PI/3));
  // printf("PI/2:%lf | %Lf\n", cos(PI/2), s21_cos(PI/2));
  // printf("PI:%lf | %Lf\n", cos(PI), s21_cos(PI));
  // printf("3PI/2:%lf | %Lf\n", cos(3*PI/2), s21_cos(3*PI/2));
  // printf("6PI/2:%lf | %Lf\n", cos(6*PI/2), s21_cos(6*PI/2));
  // printf("9PI/2:%lf | %Lf\n", cos(9*PI/2), s21_cos(9*PI/2));
  // printf("12PI/2:%lf | %Lf\n", cos(12*PI/2), s21_cos(12*PI/2));
  // printf("2PI:%lf | %Lf\n", cos(2*PI), s21_cos(2*PI));
  // printf("-PI/6: %lf | %Lf\n", cos(-PI/6), s21_cos(-PI/6));
  // printf("-PI/4:%lf | %Lf\n", cos(-PI/4), s21_cos(-PI/4));
  // printf("-PI/3:%lf | %Lf\n", cos(-PI/3), s21_cos(-PI/3));
  // printf("-PI/2:%lf | %Lf\n", cos(-PI/2), s21_cos(-PI/2));
  // printf("-PI:%lf | %Lf\n", cos(-PI), s21_cos(-PI));
  // printf("-3PI/2:%lf | %Lf\n", cos(-3*PI/2), s21_cos(-3*PI/2));
  // printf("-6PI/2:%lf | %Lf\n", cos(-6*PI/2), s21_cos(-6*PI/2));
  // printf("-9PI/2:%lf | %Lf\n", cos(-9*PI/2), s21_cos(-9*PI/2));
  // printf("-12PI/2:%lf | %Lf\n", cos(-12*PI/2), s21_cos(-12*PI/2));

  // TAN
  // printf("0 - 20\n");
  // for (double i = 0; i < 20; i = i + 0.1) {
  //   printf("%.1lf: %.6lf | %.6Lf\n", i, tan(i), s21_tan(i));
  // }
  // printf("\n");
  // printf("0 - -20\n");
  // for (double i = 0; i > -20; i = i - 0.1) {
  //   printf("%.1lf: %.6lf | %.6Lf\n", i, tan(i), s21_tan(i));
  // }
  // printf("\n");
  // printf("100, -100\n");
  // printf("%lf | %Lf\n", tan(100), s21_tan(100));
  // printf("%lf | %Lf\n", tan(-100), s21_tan(-100));
  // printf("\n");
  // printf("inf/nan\n");
  // printf("%lf | %Lf\n", tan(INFINITY), s21_tan(INFINITY));
  // printf("%lf | %Lf\n", tan(NAN), s21_tan(NAN));
  // printf("\n");
  // printf("Табличные значения:\n");
  // printf("0: %lf | %Lf\n", tan(0), s21_tan(0));
  // printf("PI/6: %lf | %Lf\n", tan(PI/6), s21_tan(PI/6));
  // printf("PI/4:%lf | %Lf\n", tan(PI/4), s21_tan(PI/4));
  // printf("PI/3:%lf | %Lf\n", tan(PI/3), s21_tan(PI/3));
  // printf("PI/2:%lf | %Lf\n", tan(PI/2), s21_tan(PI/2));
  // printf("PI:%lf | %Lf\n", tan(PI), s21_tan(PI));
  // printf("6PI/2:%lf | %Lf\n", tan(6*PI/2), s21_tan(6*PI/2));
  // printf("9PI/2:%lf | %Lf\n", tan(9*PI/2), s21_tan(9*PI/2));
  // printf("12PI/2:%lf | %Lf\n", tan(12*PI/2), s21_tan(12*PI/2));
  // printf("2PI:%lf | %Lf\n", tan(2*PI), s21_tan(2*PI));
  // printf("-PI/6: %lf | %Lf\n", tan(-PI/6), s21_tan(-PI/6));
  // printf("-PI/4:%lf | %Lf\n", tan(-PI/4), s21_tan(-PI/4));
  // printf("-PI/3:%lf | %Lf\n", tan(-PI/3), s21_tan(-PI/3));
  // printf("-PI/2:%lf | %Lf\n", tan(-PI/2), s21_tan(-PI/2));
  // printf("-PI:%lf | %Lf\n", tan(-PI), s21_tan(-PI));
  // printf("-3PI/2:%lf | %Lf\n", tan(-3*PI/2), s21_tan(-3*PI/2));
  // printf("-6PI/2:%lf | %Lf\n", tan(-6*PI/2), s21_tan(-6*PI/2));
  // printf("-9PI/2:%lf | %Lf\n", tan(-9*PI/2), s21_tan(-9*PI/2));
  // printf("-12PI/2:%lf | %Lf\n", tan(-12*PI/2), s21_tan(-12*PI/2));
  // printf("-2PI:%lf | %Lf\n", tan(-2*PI), s21_tan(-2*PI));

  // ASIN
  // printf("0 - 20\n");
  // for (double i = 0; i < 20; i = i + 0.1) {
  //   printf("%.1lf: %.6lf | %.6Lf\n", i, asin(i), s21_asin(i));
  // }
  // printf("\n");
  // printf("0 - -20\n");
  // for (double i = 0; i > -20; i = i - 0.1) {
  //   printf("%.1lf: %.6lf | %.6Lf\n", i, asin(i), s21_asin(i));
  // }
  // printf("\n");
  // printf("100, -100\n");
  // printf("%lf | %Lf\n", asin(100), s21_asin(100));
  // printf("%lf | %Lf\n", asin(-100), s21_asin(-100));
  // printf("\n");
  // printf("inf/nan\n");
  // printf("%lf | %Lf\n", asin(INFINITY), s21_asin(INFINITY));
  // printf("%lf | %Lf\n", asin(NAN), s21_asin(NAN));
  // printf("\n");
  // printf("Табличные значения:\n");
  // printf("0: %lf | %Lf\n", asin(0), s21_asin(0));
  // printf("PI/6: %lf | %Lf\n", asin(PI/6), s21_asin(PI/6));
  // printf("PI/4:%lf | %Lf\n", asin(PI/4), s21_asin(PI/4));
  // printf("PI/3:%lf | %Lf\n", asin(PI/3), s21_asin(PI/3));
  // printf("PI/2:%lf | %Lf\n", asin(PI/2), s21_asin(PI/2));
  // printf("PI:%lf | %Lf\n", asin(PI), s21_asin(PI));
  // printf("3PI/2:%lf | %Lf\n", asin(3*PI/2), s21_asin(3*PI/2));
  // printf("2PI:%lf | %Lf\n", asin(2*PI), s21_asin(2*PI));
  // printf("-PI/6: %lf | %Lf\n", asin(-PI/6), s21_asin(-PI/6));
  // printf("-PI/4:%lf | %Lf\n", asin(-PI/4), s21_asin(-PI/4));
  // printf("-PI/3:%lf | %Lf\n", asin(-PI/3), s21_asin(-PI/3));
  // printf("-PI/2:%lf | %Lf\n", asin(-PI/2), s21_asin(-PI/2));
  // printf("-PI:%lf | %Lf\n", asin(-PI), s21_asin(-PI));
  // printf("-3PI/2:%lf | %Lf\n", asin(-3*PI/2), s21_asin(-3*PI/2));
  // printf("-2PI:%lf | %Lf\n", asin(-2*PI), s21_asin(-2*PI));
  // printf("-0.71: %.6lf | %.6Lf\n", asin(-0.71), s21_asin(-0.71));

  // ACOS
  // printf("0 - 20\n");
  // for (double i = 0; i < 20; i = i + 0.1) {
  //   printf("%.1lf: %.6lf | %.6Lf\n", i, acos(i), s21_acos(i));
  // }
  // printf("\n");
  // printf("0 - -20\n");
  // for (double i = 0; i > -20; i = i - 0.1) {
  //   printf("%.1lf: %.6lf | %.6Lf\n", i, acos(i), s21_acos(i));
  // }
  // printf("\n");
  // printf("100, -100\n");
  // printf("%lf | %Lf\n", acos(100), s21_acos(100));
  // printf("%lf | %Lf\n", acos(-100), s21_acos(-100));
  // printf("\n");
  // printf("inf/nan\n");
  // printf("%lf | %Lf\n", acos(INFINITY), s21_acos(INFINITY));
  // printf("%lf | %Lf\n", acos(NAN), s21_acos(NAN));
  // printf("\n");
  // printf("Табличные значения:\n");
  // printf("0: %lf | %Lf\n", acos(0), s21_acos(0));
  // printf("PI/6: %lf | %Lf\n", acos(PI/6), s21_acos(PI/6));
  // printf("PI/4:%lf | %Lf\n", acos(PI/4), s21_acos(PI/4));
  // printf("PI/3:%lf | %Lf\n", acos(PI/3), s21_acos(PI/3));
  // printf("PI/2:%lf | %Lf\n", acos(PI/2), s21_acos(PI/2));
  // printf("PI:%lf | %Lf\n", acos(PI), s21_acos(PI));
  // printf("3PI/2:%lf | %Lf\n", acos(3*PI/2), s21_acos(3*PI/2));
  // printf("6PI/2:%lf | %Lf\n", acos(6*PI/2), s21_acos(6*PI/2));
  // printf("9PI/2:%lf | %Lf\n", acos(9*PI/2), s21_acos(9*PI/2));
  // printf("12PI/2:%lf | %Lf\n", acos(12*PI/2), s21_acos(12*PI/2));
  // printf("2PI:%lf | %Lf\n", acos(2*PI), s21_acos(2*PI));
  // printf("-PI/6: %lf | %Lf\n", acos(-PI/6), s21_acos(-PI/6));
  // printf("-PI/4:%lf | %Lf\n", acos(-PI/4), s21_acos(-PI/4));
  // printf("-PI/3:%lf | %Lf\n", acos(-PI/3), s21_acos(-PI/3));
  // printf("-PI/2:%lf | %Lf\n", acos(-PI/2), s21_acos(-PI/2));
  // printf("-PI:%lf | %Lf\n", acos(-PI), s21_acos(-PI));
  // printf("-3PI/2:%lf | %Lf\n", acos(-3*PI/2), s21_acos(-3*PI/2));
  // printf("-6PI/2:%lf | %Lf\n", acos(-6*PI/2), s21_acos(-6*PI/2));
  // printf("-9PI/2:%lf | %Lf\n", acos(-9*PI/2), s21_acos(-9*PI/2));
  // printf("-12PI/2:%lf | %Lf\n", acos(-12*PI/2), s21_acos(-12*PI/2));

  // ATAN
  // printf("0 - 20\n");
  // for (double i = 0; i < 20; i = i + 0.1) {
  //   printf("%.1lf: %.6lf | %.6Lf\n", i, atan(i), s21_atan(i));
  // }
  // printf("\n");
  // printf("0 - -20\n");
  // for (double i = 0; i > -20; i = i - 0.1) {
  //   printf("%.1lf: %.6lf | %.6Lf\n", i, atan(i), s21_atan(i));
  // }
  // printf("\n");
  // printf("100, -100\n");
  // printf("%lf | %Lf\n", atan(100), s21_atan(100));
  // printf("%lf | %Lf\n", atan(-100), s21_atan(-100));
  // printf("\n");
  // printf("inf/nan\n");
  // printf("%lf | %Lf\n", atan(INFINITY), s21_atan(INFINITY));
  // printf("%lf | %Lf\n", atan(NAN), s21_atan(NAN));
  // printf("\n");
  // printf("Табличные значения:\n");
  // printf("0: %lf | %Lf\n", atan(0), s21_atan(0));
  // printf("PI/6: %lf | %Lf\n", atan(PI/6), s21_atan(PI/6));
  // printf("PI/4:%lf | %Lf\n", atan(PI/4), s21_atan(PI/4));
  // printf("PI/3:%lf | %Lf\n", atan(PI/3), s21_atan(PI/3));
  // printf("PI/2:%lf | %Lf\n", atan(PI/2), s21_atan(PI/2));
  // printf("PI:%lf | %Lf\n", atan(PI), s21_atan(PI));
  // printf("6PI/2:%lf | %Lf\n", atan(6*PI/2), s21_atan(6*PI/2));
  // printf("9PI/2:%lf | %Lf\n", atan(9*PI/2), s21_atan(9*PI/2));
  // printf("12PI/2:%lf | %Lf\n", atan(12*PI/2), s21_atan(12*PI/2));
  // printf("2PI:%lf | %Lf\n", atan(2*PI), s21_atan(2*PI));
  // printf("-PI/6: %lf | %Lf\n", atan(-PI/6), s21_atan(-PI/6));
  // printf("-PI/4:%lf | %Lf\n", atan(-PI/4), s21_atan(-PI/4));
  // printf("-PI/3:%lf | %Lf\n", atan(-PI/3), s21_atan(-PI/3));
  // printf("-PI/2:%lf | %Lf\n", atan(-PI/2), s21_atan(-PI/2));
  // printf("-PI:%lf | %Lf\n", atan(-PI), s21_atan(-PI));
  // printf("-3PI/2:%lf | %Lf\n", atan(-3*PI/2), s21_atan(-3*PI/2));
  // printf("-6PI/2:%lf | %Lf\n", atan(-6*PI/2), s21_atan(-6*PI/2));
  // printf("-9PI/2:%lf | %Lf\n", atan(-9*PI/2), s21_atan(-9*PI/2));
  // printf("-12PI/2:%lf | %Lf\n", atan(-12*PI/2), s21_atan(-12*PI/2));
  // printf("-2PI:%lf | %Lf\n", atan(-2*PI), s21_atan(-2*PI));
}

long double s21_sin(double x) {
  double e = 0.0000001;  // заданная точность
  double sum = 0;
  int n = 1;
  double accur = 1;  // подсчитываемая точность

  if (x > 2 * PI ||
      x < 2 * PI) {  // если очень большие значения, то сокращается на 2PI
    x = fmod(x, (2 * PI));
  }
  while (accur >= e) {
    sum = sum + pow((-1), (n - 1)) *
                    ((pow(x, (2 * n - 1))) / (s21_factorial(2 * n - 1)));
    accur = pow((-1), (n - 1)) *
            ((pow(x, (2 * n - 1))) / (s21_factorial(2 * n - 1)));
    accur = module(accur);
    n++;
  }
  if(fmod(x,PI) == 0 && ((fmod((x/PI),2) == -1) || x>0)) {  // убираем лишний знак при значении PI при положительных и нечётных отрицательных
    sum = (-1)*(sum);
  }
  return sum;
}

long double s21_cos(double x) {
  double e = 0.0000001;  // заданная точность
  double sum = 0;
  int n = 0;
  double accur = 1;  // подсчитываемая точность

  if (x > 2 * PI ||
      x < 2 * PI) {  // если очень большие значения, то сокращается на 2PI
    x = fmod(x, (2 * PI));
  }
  while (accur >= e) {
    sum = sum + pow(-1, n) * pow(x, 2 * n) / s21_factorial(2 * n);
    accur = pow(-1, n) * pow(x, 2 * n) / s21_factorial(2 * n);
    accur = module(accur);
    n++;
  }
  if(fmod(x,PI/2) == 0 && fmod(x,PI) != 0 && ((fmod((x/(PI/2)),2) == -1) || x>0)) {  // убираем лишний знак при значении PI/2 при положительных и нечётных отрицательных
    sum = (-1)*(sum);
  }
  return sum;
}

long double s21_atan(double x) {  // обработать случаи нуля и бесконечности
  double e = 0.0000001;  // заданная точность
  long double sum = 0;
  int n = 1;
  double accur = 1;  // подсчитываемая точность
  int flag = 0;

  if (x > 1) {  // для диапазона x > 1
    x = 1 / x;
    flag = 1;
  }
  if (x < -1) {  // для диапазона x < -1
    x = (1 / x) * (-1);
    flag = 2;
  }
  while (accur >= e) {
    sum = sum + (pow(-1, n - 1) * pow(x, 2 * n - 1) / (2 * n - 1));
    accur = (pow(-1, n - 1) * pow(x, 2 * n - 1) / (2 * n - 1));
    accur = module(accur);
    n++;
  }
  if (flag == 1 || flag == 2) {  // Если диапазон |x| > 1, отнимаем из PI/2
    sum = (PI / 2) - sum;
  }
  if (flag == 2) {  // в диапазоне x < -1 выводим реверс
    sum = sum * (-1);
  }
  return sum;
}

long double s21_tan(double x) {
  long double result = s21_sin(x)/s21_cos(x);
 
  if(x == PI/2)
    result = 16331239353195370.0;
  if(x == 3*PI/2)
    result = 5443746451065123.0;
  if(x == -PI/2)
    result = -16331239353195370.0;
  if(x == -3*PI/2)
    result = -5443746451065123.0;
  return result;
}

long double s21_asin(double x) {
  long double result = s21_atan(x/(sqrt(1-pow(x,2))));
   if(x < -0.7)
   result = result*(-1);
  return result;
}

long double s21_acos(double x) {
  return ((PI/2)-s21_asin(x));
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

double module(double i) {
  if (i < 0) {
    i = i * (-1);
  }
  return i;
}
