#include <check.h>
#include <math.h>
#include <stdio.h>

#include "s21_math.h"

// <=== TEST CASES: s21_ceil ===>

START_TEST(tc_ceil_1) {
  double test_value = 1.123456f;
  long double result = s21_ceil(test_value), expecting = ceil(test_value);

  ck_assert_double_eq(expecting, result);
}
END_TEST

START_TEST(tc_ceil_2) {
  double test_value = -1.123456f;
  long double result = s21_ceil(test_value), expecting = ceil(test_value);

  ck_assert_double_eq(expecting, result);
}
END_TEST

START_TEST(tc_ceil_3) {
  double test_value = s21_NAN;
  char result[32] = {0}, expecting[32] = {0};

  sprintf(result, "%Lf", s21_ceil(test_value));
  sprintf(expecting, "%lf", ceil(test_value));

  ck_assert_str_eq(expecting, result);
}
END_TEST

START_TEST(tc_ceil_4) {
  double test_value = s21_INF;
  long double result = s21_ceil(test_value), expecting = ceil(test_value);

  ck_assert_double_eq(expecting, result);
}
END_TEST

START_TEST(tc_ceil_5) {
  double test_value = -s21_INF;
  long double result = s21_ceil(test_value), expecting = ceil(test_value);

  ck_assert_double_eq(expecting, result);
}
END_TEST

START_TEST(tc_ceil_6) {
  double test_value = 10;
  long double result = s21_ceil(test_value), expecting = ceil(test_value);

  ck_assert_double_eq(expecting, result);
}
END_TEST

// <=== TEST CASES: s21_abs ===>

START_TEST(tc_abs_1) {
  int test_value = 1;
  int result = s21_abs(test_value), expecting = abs(test_value);

  ck_assert_int_eq(expecting, result);
}
END_TEST

START_TEST(tc_abs_2) {
  int test_value = -1;
  int result = s21_abs(test_value), expecting = abs(test_value);

  ck_assert_int_eq(expecting, result);
}
END_TEST

START_TEST(tc_abs_3) {
  int test_value = 2147483647;
  int result = s21_abs(test_value), expecting = abs(test_value);

  ck_assert_int_eq(expecting, result);
}
END_TEST

START_TEST(tc_abs_4) {
  int test_value = -2147483647;
  int result = s21_abs(test_value), expecting = abs(test_value);

  ck_assert_int_eq(expecting, result);
}
END_TEST

// <=== TEST CASES: s21_exp ===>

START_TEST(tc_exp_1) {
  int test_value = 1;
  int result = s21_exp(test_value), expecting = exp(test_value);

  ck_assert_int_eq(expecting, result);
}
END_TEST

START_TEST(tc_exp_2) {
  double test_value = s21_NAN;
  char result[32] = {0}, expecting[32] = {0};

  sprintf(result, "%Lf", s21_exp(test_value));
  sprintf(expecting, "%lf", exp(test_value));

  ck_assert_str_eq(expecting, result);
}
END_TEST

START_TEST(tc_exp_3) {
  double test_value = s21_INF;
  long double result = s21_exp(test_value), expecting = exp(test_value);

  ck_assert_double_eq(expecting, result);
}
END_TEST

START_TEST(tc_exp_4) {
  double test_value = -s21_INF;
  long double result = s21_exp(test_value), expecting = exp(test_value);

  ck_assert_double_eq(expecting, result);
}
END_TEST

START_TEST(tc_exp_5) {
  int test_value = 1.1223;
  int result = s21_exp(test_value), expecting = exp(test_value);

  ck_assert_int_eq(expecting, result);
}
END_TEST

START_TEST(tc_exp_6) {
  int test_value = -34.57886;
  int result = s21_exp(test_value), expecting = exp(test_value);

  ck_assert_int_eq(expecting, result);
}
END_TEST

Suite *ts_ceil() {
  Suite *suite = suite_create("ts_ceil");
  TCase *test_case = tcase_create("tc_ceil");

  tcase_add_test(test_case, tc_ceil_1);
  tcase_add_test(test_case, tc_ceil_2);
  tcase_add_test(test_case, tc_ceil_3);
  tcase_add_test(test_case, tc_ceil_4);
  tcase_add_test(test_case, tc_ceil_5);
  tcase_add_test(test_case, tc_ceil_6);

  suite_add_tcase(suite, test_case);

  return suite;
}

Suite *ts_abs() {
  Suite *suite = suite_create("ts_abs");
  TCase *test_case = tcase_create("tc_abs");

  tcase_add_test(test_case, tc_abs_1);
  tcase_add_test(test_case, tc_abs_2);
  tcase_add_test(test_case, tc_abs_3);
  tcase_add_test(test_case, tc_abs_4);

  suite_add_tcase(suite, test_case);

  return suite;
}

Suite *ts_exp() {
  Suite *suite = suite_create("ts_exp");
  TCase *test_case = tcase_create("tc_exp");

  tcase_add_test(test_case, tc_exp_1);
  tcase_add_test(test_case, tc_exp_2);
  tcase_add_test(test_case, tc_exp_3);
  tcase_add_test(test_case, tc_exp_4);
  tcase_add_test(test_case, tc_exp_5);
  tcase_add_test(test_case, tc_exp_6);

  suite_add_tcase(suite, test_case);

  return suite;
}

int main(void) {
  Suite *test_suites[] = {ts_ceil(), ts_abs(), ts_exp(), NULL};
  int failed = 0;

  for (Suite **s = test_suites; *s != NULL; s++) {
    SRunner *runner = srunner_create(*s);
    srunner_run_all(runner, CK_NORMAL);
    failed += srunner_ntests_failed(runner);
    srunner_free(runner);
  }

  return failed;
}
