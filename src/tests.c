#include <check.h>
#include <math.h>
#include <stdio.h>

#include "s21_math.h"
#define s21_NAN (0.0 / 0.0)
#define s21_INF (1.0 / 0.0)
#define s21_NEGINF (-1.0 / 0.0)

// <=== TEST CASES: s21_sin ===>

START_TEST(tc_sin) {
  char result[32] = {0}, expecting[32] = {0};
  double test_value = s21_NAN;
  ck_assert_ldouble_eq_tol(s21_sin(100), sin(100), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-100), sin(-100), 1e-6);

  sprintf(result, "%Lf", s21_sin(test_value));
  sprintf(expecting, "%lf", sin(test_value));
  ck_assert_str_eq(expecting, result);
  test_value = s21_INF;
  sprintf(result, "%Lf", s21_sin(test_value));
  sprintf(expecting, "%lf", sin(test_value));
  ck_assert_str_eq(expecting, result);

  ck_assert_ldouble_eq_tol(s21_sin(0), sin(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(PI / 6), sin(PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(PI / 4), sin(PI / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(PI / 3), sin(PI / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(PI / 2), sin(PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(PI), sin(PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(3 * PI / 2), sin(3 * PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(2 * PI), sin(2 * PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-PI / 6), sin(-PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-PI / 4), sin(-PI / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-PI / 3), sin(-PI / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-PI / 2), sin(-PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-PI), sin(-PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-3 * PI / 2), sin(-3 * PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-2 * PI), sin(-2 * PI), 1e-6);
}
END_TEST

// <=== TEST CASES: s21_cos ===>

START_TEST(tc_cos) {
  char result[32] = {0}, expecting[32] = {0};
  double test_value = s21_NAN;
  ck_assert_ldouble_eq_tol(s21_cos(100), cos(100), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-100), cos(-100), 1e-6);

  sprintf(result, "%Lf", s21_cos(test_value));
  sprintf(expecting, "%lf", cos(test_value));
  ck_assert_str_eq(expecting, result);
  test_value = s21_INF;
  sprintf(result, "%Lf", s21_cos(test_value));
  sprintf(expecting, "%lf", cos(test_value));
  ck_assert_str_eq(expecting, result);

  ck_assert_ldouble_eq_tol(s21_cos(0), cos(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(PI / 6), cos(PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(PI / 4), cos(PI / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(PI / 3), cos(PI / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(PI / 2), cos(PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(PI), cos(PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(3 * PI / 2), cos(3 * PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(2 * PI), cos(2 * PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-PI / 6), cos(-PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-PI / 4), cos(-PI / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-PI / 3), cos(-PI / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-PI / 2), cos(-PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-PI), cos(-PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-3 * PI / 2), cos(-3 * PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-2 * PI), cos(-2 * PI), 1e-6);
}
END_TEST

// <=== TEST CASES: s21_tan ===>

START_TEST(tc_tan) {
  char result[32] = {0}, expecting[32] = {0};
  double test_value = s21_NAN;
  ck_assert_ldouble_eq_tol(s21_tan(100), tan(100), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-100), tan(-100), 1e-6);

  sprintf(result, "%Lf", s21_tan(test_value));
  sprintf(expecting, "%lf", tan(test_value));
  ck_assert_str_eq(expecting, result);
  test_value = s21_INF;
  sprintf(result, "%Lf", s21_tan(test_value));
  sprintf(expecting, "%lf", tan(test_value));
  ck_assert_str_eq(expecting, result);

  ck_assert_ldouble_eq_tol(s21_tan(0), tan(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(PI / 6), tan(PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(PI / 4), tan(PI / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(PI / 3), tan(PI / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(PI / 2), tan(PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(PI), tan(PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(3 * PI / 2), tan(3 * PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(2 * PI), tan(2 * PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-PI / 6), tan(-PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-PI / 4), tan(-PI / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-PI / 3), tan(-PI / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-PI / 2), tan(-PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-PI), tan(-PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-3 * PI / 2), tan(-3 * PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-2 * PI), tan(-2 * PI), 1e-6);
}
END_TEST

// <=== TEST CASES: s21_asin ===>

START_TEST(tc_asin) {
  ck_assert_ldouble_nan(s21_asin(100));
  ck_assert_double_nan(asin(100));
  ck_assert_ldouble_nan(s21_asin(-100));
  ck_assert_double_nan(asin(-100));

  ck_assert_ldouble_nan(s21_asin(s21_NAN));
  ck_assert_double_nan(asin(s21_NAN));
  ck_assert_ldouble_nan(s21_asin(s21_INF));
  ck_assert_double_nan(asin(s21_INF));

  ck_assert_ldouble_eq_tol(s21_asin(0), asin(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(PI / 6), asin(PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(PI / 4), asin(PI / 4), 1e-6);

  ck_assert_ldouble_eq_tol(s21_asin(-PI / 6), asin(-PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-PI / 4), asin(-PI / 4), 1e-6);
}
END_TEST

// <=== TEST CASES: s21_acos ===>

START_TEST(tc_acos) {
  ck_assert_ldouble_nan(s21_acos(100));
  ck_assert_double_nan(acos(100));
  ck_assert_ldouble_nan(s21_acos(-100));
  ck_assert_double_nan(acos(-100));

  ck_assert_ldouble_nan(s21_acos(s21_NAN));
  ck_assert_double_nan(acos(s21_NAN));
  ck_assert_ldouble_nan(s21_acos(s21_INF));
  ck_assert_double_nan(acos(s21_INF));

  ck_assert_ldouble_eq_tol(s21_acos(0), acos(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(PI / 6), acos(PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(PI / 4), acos(PI / 4), 1e-6);

  ck_assert_ldouble_eq_tol(s21_acos(-PI / 6), acos(-PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-PI / 4), acos(-PI / 4), 1e-6);
}
END_TEST

// <=== TEST CASES: s21_atan ===>

START_TEST(tc_atan) {
  ck_assert_ldouble_eq_tol(s21_atan(100), atan(100), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-100), atan(-100), 1e-6);

  ck_assert_ldouble_nan(s21_atan(s21_NAN));
  ck_assert_double_nan(atan(s21_NAN));
  ck_assert_ldouble_eq_tol(s21_atan(s21_INF), atan(s21_INF), 1e-6);

  ck_assert_ldouble_eq_tol(s21_atan(0), atan(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(PI / 6), atan(PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(PI / 4), atan(PI / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(PI / 3), atan(PI / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(PI / 2), atan(PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(PI), atan(PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(3 * PI / 2), atan(3 * PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(2 * PI), atan(2 * PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-PI / 6), atan(-PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-PI / 4), atan(-PI / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-PI / 3), atan(-PI / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-PI / 2), atan(-PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-PI), atan(-PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-3 * PI / 2), atan(-3 * PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-2 * PI), atan(-2 * PI), 1e-6);
}
END_TEST

Suite *ts_sin() {
  Suite *suite = suite_create("ts_sin");
  TCase *test_case = tcase_create("tc_sin");

  tcase_add_test(test_case, tc_sin);

  suite_add_tcase(suite, test_case);

  return suite;
}

Suite *ts_cos() {
  Suite *suite = suite_create("ts_cos");
  TCase *test_case = tcase_create("tc_cos");

  tcase_add_test(test_case, tc_cos);

  suite_add_tcase(suite, test_case);

  return suite;
}

Suite *ts_tan() {
  Suite *suite = suite_create("ts_tan");
  TCase *test_case = tcase_create("tc_tan");

  tcase_add_test(test_case, tc_tan);

  suite_add_tcase(suite, test_case);

  return suite;
}

Suite *ts_asin() {
  Suite *suite = suite_create("ts_asin");
  TCase *test_case = tcase_create("tc_asin");

  tcase_add_test(test_case, tc_asin);

  suite_add_tcase(suite, test_case);

  return suite;
}

Suite *ts_acos() {
  Suite *suite = suite_create("ts_acos");
  TCase *test_case = tcase_create("tc_acos");

  tcase_add_test(test_case, tc_acos);

  suite_add_tcase(suite, test_case);

  return suite;
}

Suite *ts_atan() {
  Suite *suite = suite_create("ts_atan");
  TCase *test_case = tcase_create("tc_atan");

  tcase_add_test(test_case, tc_atan);

  suite_add_tcase(suite, test_case);

  return suite;
}

int main(void) {
  Suite *test_suites[] = {ts_sin(),  ts_cos(),  ts_tan(), ts_asin(),
                          ts_acos(), ts_atan(), NULL};
  int failed = 0;

  for (Suite **s = test_suites; *s != NULL; s++) {
    SRunner *runner = srunner_create(*s);
    srunner_run_all(runner, CK_NORMAL);
    failed += srunner_ntests_failed(runner);
    srunner_free(runner);
  }

  return failed;
}
