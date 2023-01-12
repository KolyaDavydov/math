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

#include <math.h>  // для проверки
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// |Функции Маркуса|
long double acos(double x);
long double asin(double x);
long double atan(double x);
long double cos(double x);
long double sin(double x);
long double tan(double x);

// |Функции Никиты|
long double ceil(double x);
int abs(int x);
long double exp(double x);

// |Функции Коляна|
long double fabs(double x);
long double floor(double x);
long double fmod(double x, double y);

// |Функции Макса|
long double log(double x);
long double pow(double base, double exp);
long double sqrt(double x);
