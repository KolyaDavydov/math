#include <check.h>

#include "s21_decimal.h"

// <=== TEST CASES: s21_abs ===>

START_TEST(tc_abs_1) {

}
END_TEST

Suite *ts_abs() {
  Suite *suite = suite_create("ts_abs");
  TCase *test_case = tcase_create("tc_abs");
  tcase_add_test(test_case, tc_abs);
  suite_add_tcase(suite, test_case);

  return suite;
}

int main(void) {
  Suite *test_suites[] = {ts_abs(), NULL};
  int failed = 0;

  for (Suite **s = test_suites; *s != NULL; s++) {
    SRunner *runner = srunner_create(*s);
    srunner_run_all(runner, CK_NORMAL);
    failed += srunner_ntests_failed(runner);
    srunner_free(runner);
  }

  return failed;
}
