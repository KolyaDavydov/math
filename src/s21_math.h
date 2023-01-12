#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

// HEADER TO s21_math.c

// - Библиотека должна быть разработана на языке Си стандарта C11 с
// использованием компиятора gcc

// - Код библиотеки должен находиться в папке src в ветке develop

// - Не использовать устаревшие и выведенные из употребления конструкции языка и
//   библиотечные функции. Обращать внимания на пометки legacy и obsolete в
//   официальной документации по языку и используемым библиотекам.

// - Ориентироваться на стандарт POSIX.1-2017

// - При написании кода необходимо придерживаться Google Style

// - Оформить решение как статическую библиотеку (с заголовочным файлом
// s21_math.h)

// - Библиотека должна быть разработана в соответствии с принципами структурного
// программирования,
//   должно быть исключено дублирование кода

// - Перед каждой функцией использовать префикс s21_

// - Подготовить полное покрытие unit-тестами функций библиотеки c помощью
// библиотеки Check

// - Unit-тесты должны проверять результаты работы вашей реализации путём
// сравнения ее с реализацией стандартной библиотеки math.h

// - Unit-тесты должны покрывать не менее 80% каждой функции

// - В цели gcov_report должен формироваться отчёт gcov в виде html страницы.
// Для этого unit-тесты должны запускаться с флагами gcov

// - Предусмотреть Makefile для сборки библиотеки и тестов (с целями all, clean,
// test, s21_math.a, gcov_report)

// - Запрещено копирование реализации и использование стандартной библиотеки
// math.h везде, кроме unit-тестов

// - Необходимо соблюсти логику работы стандартной библиотеки (в части проверок,
// работы с памятью и поведения
//   в нештатных ситуациях - здесь помогут тесты)

// - Общая проверяемая точность - 16 значащих цифр

// - Проверяемая точность дробной части - максимум 6 знаков после запятой.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define s21_NAN (0.0 / 0.0)
#define s21_INF (1.0 / 0.0)

#define s21_E 2.71828182845904523536

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
int s21_isnan(double x);

// |Функции Коляна|
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);

// |Функции Макса|
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sqrt(double x);

#endif  // SRC_S21_MATH_H_
