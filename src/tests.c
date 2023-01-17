#include <check.h>

#include "s21_math.h"

// <=== TEST CASES: s21_log ===>

START_TEST(tc_log_1) {
  ck_assert_double_nan(s21_log(s21_NAN));
  ck_assert_double_eq(log(0), s21_log(0));
  ck_assert_double_nan(s21_log(-3));
  ck_assert_double_eq(log(s21_INF), s21_log(s21_INF));
  ck_assert_double_nan(s21_log(-s21_INF));
  ck_assert_double_eq(log(1), s21_log(1));
  ck_assert_double_eq(log(s21_E), s21_log(s21_E));
  ck_assert_double_eq_tol(log(2), s21_log(2), 1e-6);
}
END_TEST

START_TEST(tc_log_2) {
  long double x = -1.1f;
  ck_assert_ldouble_nan(log(x));
  ck_assert_ldouble_nan(s21_log(x));
}
END_TEST

START_TEST(tc_log_3) {
  long double x = 0.000000000000000000000000000000001f;
  ck_assert_ldouble_eq_tol(log(x), s21_log(x), 0.00000001f);
}
END_TEST

START_TEST(tc_log_4) {
  long double x = 5000000.000000000000000000000000000000001f;
  ck_assert_ldouble_eq_tol(log(x), s21_log(x), 0.00000001f);
}
END_TEST

START_TEST(tc_log_5) {
  long double x = 0.0f;
  ck_assert_ldouble_infinite(log(x));
  ck_assert_ldouble_infinite(s21_log(x));
}
END_TEST

START_TEST(tc_log_6) {
  for (double k = 0.000005; k < 1; k *= 5) {
    double a = s21_log(k);
    double b = log(k);
    ck_assert_double_eq_tol(a, b, 1e-6);
  }
}
END_TEST

// <=== TEST CASES: s21_pow ===>

START_TEST(tc_pow_1) {
  long double x = 1.1f;
  ck_assert_ldouble_eq_tol(pow(x, 1), s21_pow(x, 1), 0.00000001f);
}
END_TEST

START_TEST(tc_pow_2) {
  long double x = 1.1f;
  ck_assert_ldouble_eq_tol(pow(x, 0), s21_pow(x, 0), 0.00000001f);
}
END_TEST

START_TEST(tc_pow_3) {
  long double x = -0.1f;
  ck_assert_ldouble_eq_tol(pow(x, -1), s21_pow(x, -1), 0.00000001f);
}
END_TEST

START_TEST(tc_pow_4) {
  long double x = -0.1f;
  ck_assert_ldouble_nan(log(pow(x, -1.123)));
  ck_assert_ldouble_nan(s21_log(s21_pow(x, -1.123)));
}
END_TEST

START_TEST(tc_pow_5) {
  long double x = -1231231230.0000000000000000000000000000000123f;
  ck_assert_ldouble_nan(pow(x, 0.00000001));
  ck_assert_ldouble_nan(s21_pow(x, 0.00000001));
}
END_TEST

START_TEST(tc_pow_6) {
  for (double i = -10; i < 10; i += 1.5) {
    for (double j = -7; j < 15; j++) {
      long double a = s21_pow(i, j);
      long double b = pow(i, j);
      if ((!isnan(a) && !isnan(b)) && !(a == s21_INF && b == s21_INF) &&
          !(a == -s21_INF && b == -s21_INF)) {
        ck_assert_double_eq_tol(a, b, 1e-6);
      } else {
        a = s21_pow(i, j);
        b = pow(i, j);
        ck_assert_double_eq_tol(a, b, 1e-6);
      }
    }
  }
}
END_TEST

START_TEST(tc_pow_7) {
  ck_assert_double_eq(pow(s21_INF, 0), s21_pow(s21_INF, 0));
  ck_assert_double_eq(pow(s21_INF, -1), s21_pow(s21_INF, -1));
  ck_assert_double_eq(pow(-1, -s21_INF), s21_pow(-1, -s21_INF));
  ck_assert_double_eq(pow(0, s21_INF), s21_pow(0, s21_INF));
  ck_assert_double_nan(s21_pow(0, s21_NAN));
  ck_assert_double_eq(pow(NAN, 0), s21_pow(s21_NAN, 0));
  ck_assert_double_nan(s21_pow(s21_NAN, s21_NAN));
  ck_assert_double_eq(pow(s21_INF, s21_INF), s21_pow(s21_INF, s21_INF));
  ck_assert_double_eq(pow(s21_INF, -s21_INF), s21_pow(s21_INF, -s21_INF));
  ck_assert_double_eq(pow(-s21_INF, s21_INF), s21_pow(-s21_INF, s21_INF));
  ck_assert_double_eq(pow(-s21_INF, -s21_INF), s21_pow(-s21_INF, -s21_INF));
  ck_assert_double_eq(pow(1, -s21_INF), s21_pow(1, -s21_INF));
  ck_assert_double_eq(pow(1, NAN), s21_pow(1, s21_NAN));
  ck_assert_double_nan(s21_pow(s21_NAN, s21_INF));
  ck_assert_double_nan(s21_pow(s21_INF, s21_NAN));
  ck_assert_double_nan(s21_pow(s21_NAN, -s21_INF));
  ck_assert_double_nan(s21_pow(-s21_INF, s21_NAN));
  ck_assert_double_eq(pow(2, s21_INF), s21_pow(2, s21_INF));
  ck_assert_double_eq(pow(0.5, s21_INF), s21_pow(0.5, s21_INF));
  ck_assert_double_eq(pow(-2, s21_INF), s21_pow(-2, s21_INF));
  ck_assert_double_eq(pow(2, -s21_INF), s21_pow(2, -s21_INF));
  ck_assert_double_eq(pow(0.5, -s21_INF), s21_pow(0.5, -s21_INF));
  ck_assert_double_eq(pow(-2, -s21_INF), s21_pow(-2, -s21_INF));
}
END_TEST

// <=== TEST CASES: s21_sqrt ===>

START_TEST(tc_sqrt_1) {
  long double x = 1.1f;
  ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), 0.00000001f);
}
END_TEST

START_TEST(tc_sqrt_2) {
  ck_assert_double_nan(s21_sqrt(s21_NAN));
  ck_assert_double_nan(sqrt(s21_NAN));
  ck_assert_double_eq(s21_sqrt(s21_INF), sqrt(s21_INF));
  ck_assert_double_nan(s21_sqrt(-s21_INF));
  ck_assert_double_nan(sqrt(-s21_INF));
  ck_assert_double_nan(s21_sqrt(-1));
  ck_assert_double_nan(sqrt(-1));
  ck_assert_double_eq_tol(s21_sqrt(100), sqrt(100), 1e-5);
}
END_TEST

START_TEST(tc_sqrt_3) {
  long double x = s21_E;
  ck_assert_double_eq_tol(s21_sqrt(x), sqrt(x), 1e-1);
}
END_TEST

Suite *ts_log() {
  Suite *suite = suite_create("ts_log");
  TCase *test_case = tcase_create("tc_log");
  tcase_add_test(test_case, tc_log_1);
  tcase_add_test(test_case, tc_log_2);
  tcase_add_test(test_case, tc_log_3);
  tcase_add_test(test_case, tc_log_4);
  tcase_add_test(test_case, tc_log_5);
  tcase_add_test(test_case, tc_log_6);
  suite_add_tcase(suite, test_case);

  return suite;
}

Suite *ts_pow() {
  Suite *suite = suite_create("ts_pow");
  TCase *test_case = tcase_create("tc_pow");
  tcase_add_test(test_case, tc_pow_1);
  tcase_add_test(test_case, tc_pow_2);
  tcase_add_test(test_case, tc_pow_3);
  tcase_add_test(test_case, tc_pow_4);
  tcase_add_test(test_case, tc_pow_5);
  tcase_add_test(test_case, tc_pow_6);
  tcase_add_test(test_case, tc_pow_7);
  suite_add_tcase(suite, test_case);
  return suite;
}

Suite *ts_sqrt() {
  Suite *suite = suite_create("ts_sqrt");
  TCase *test_case = tcase_create("tc_sqrt");
  tcase_add_test(test_case, tc_sqrt_1);
  tcase_add_test(test_case, tc_sqrt_2);
  tcase_add_test(test_case, tc_sqrt_3);
  suite_add_tcase(suite, test_case);
  return suite;
}

int main(void) {
  Suite *test_suites[] = {ts_log(), ts_pow(), ts_sqrt(), NULL};
  int failed = 0;

  for (Suite **s = test_suites; *s != NULL; s++) {
    SRunner *runner = srunner_create(*s);
    srunner_run_all(runner, CK_NORMAL);
    failed += srunner_ntests_failed(runner);
    srunner_free(runner);
  }

  return failed;
}
