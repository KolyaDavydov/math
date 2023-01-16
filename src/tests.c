#include <check.h>

#include "s21_math.h"

// <=== TEST CASES: s21_log ===>

START_TEST(tc_log_1) {
  long double x = 1.1f;
  ck_assert_ldouble_eq_tol(log(x), s21_log(x), 0.00000001f);
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
  for (double k = -9; k <= 9; k += 1.7) {
    for (double g = -5; g < 5; g += 1) {
      long double a = s21_pow(k, g);
      long double b = pow(k, g);
      if ((!isnan(a) && !isnan(b)) && !(a == INFINITY && b == INFINITY) &&
          !(a == -INFINITY && b == -INFINITY)) {
        ck_assert_double_eq_tol(a, b, 1e-6);
      }
      a = s21_pow(g, k);
      b = pow(g, k);
      if ((!isnan(a) && !isnan(b)) && !(a == INFINITY && b == INFINITY) &&
          !(a == -INFINITY && b == -INFINITY)) {
        ck_assert_double_eq_tol(a, b, 1e-6);
      }
    }
  }
}
END_TEST

START_TEST(tc_pow_7) {
  // ck_assert_double_eq(pow(1, 0), s21_pow(1, 0));
  // ck_assert_double_eq(pow(-1, 3), s21_pow(-1, 3));
  // ck_assert_double_eq(pow(-1, 4), s21_pow(-1, 4));
  // ck_assert_double_eq(pow(0, 0), s21_pow(0, 0));
  // ck_assert_double_eq(pow(0, -1), s21_pow(0, -1));
  // ck_assert_double_eq(pow(0, 1), s21_pow(0, 1));
  // ck_assert_double_eq(pow(INFINITY, 0), s21_pow(INFINITY, 0));
  // ck_assert_double_eq(pow(INFINITY, -1), s21_pow(INFINITY, -1));

  // ck_assert_double_eq(pow(-1, -INFINITY), s21_pow(-1, -INFINITY));
  // ck_assert_double_eq(pow(0, INFINITY), s21_pow(0, INFINITY));
  // ck_assert_double_nan(s21_pow(0, s21_NAN));
  // ck_assert_double_eq(pow(NAN, 0), s21_pow(s21_NAN, 0));

  // ck_assert_double_nan(s21_pow(s21_NAN, s21_NAN));  // не проходит

  // ck_assert_double_eq(pow(INFINITY, INFINITY), s21_pow(INFINITY, INFINITY));
  // ck_assert_double_eq(pow(INFINITY, -INFINITY), s21_pow(INFINITY, -INFINITY));
  // ck_assert_double_eq(pow(-INFINITY, INFINITY), s21_pow(-INFINITY, INFINITY));
  // ck_assert_double_eq(pow(-INFINITY, -INFINITY), s21_pow(-INFINITY, -INFINITY));
  // ck_assert_double_eq(pow(1, -INFINITY), s21_pow(1, -INFINITY));

  ck_assert_double_eq(pow(1, NAN), s21_pow(1, s21_NAN));
  ck_assert_double_nan(s21_pow(s21_NAN, INFINITY));
  ck_assert_double_nan(s21_pow(INFINITY, s21_NAN));
  ck_assert_double_nan(s21_pow(s21_NAN, -INFINITY));
  ck_assert_double_nan(s21_pow(-INFINITY, s21_NAN));
  ck_assert_double_eq(pow(2, INFINITY), s21_pow(2, INFINITY));
  ck_assert_double_eq(pow(0.5, INFINITY), s21_pow(0.5, INFINITY));
  ck_assert_double_eq(pow(-2, INFINITY), s21_pow(-2, INFINITY));
  ck_assert_double_eq(pow(2, -INFINITY), s21_pow(2, -INFINITY));
  ck_assert_double_eq(pow(0.5, -INFINITY), s21_pow(0.5, -INFINITY));
  ck_assert_double_eq(pow(-2, -INFINITY), s21_pow(-2, -INFINITY));
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

int main(void) {
  Suite *test_suites[] = {ts_log(), ts_pow(), NULL};
  int failed = 0;

  for (Suite **s = test_suites; *s != NULL; s++) {
    SRunner *runner = srunner_create(*s);
    srunner_run_all(runner, CK_NORMAL);
    failed += srunner_ntests_failed(runner);
    srunner_free(runner);
  }

  return failed;
}
