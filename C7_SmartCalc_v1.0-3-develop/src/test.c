#include <check.h>

#include "s21_my_calc.h"

START_TEST(s21_smart_1) {
  double result = 0;
  double x = 0;
  char str[256] =
      "atan(1)+tan(1)-sin(1)*asin(1)+6+3+log(1)+acos(1)*cos(8)+ln(7)+sqrt(12)+"
      "6.22^4-4+5+x";

  char *tmp;
  support_validator_get_memory_str_copy(&tmp, str);

  int valid = s21_validator(str, tmp);

  stack *head = NULL;

  s21_stack_logic(&head, tmp, &x, &result);

  ck_assert_float_eq_tol(result, 1513.223333, 1e-7);
  ck_assert_int_eq(valid, 1);
}
END_TEST

START_TEST(s21_smart_2) {
  char str[256] = "(16 - 8)2";

  char *tmp;
  support_validator_get_memory_str_copy(&tmp, str);

  int valid = s21_validator(str, tmp);

  ck_assert_int_eq(valid, 0);
}
END_TEST

START_TEST(s21_smart_3) {
  char str[256] = "156/0";

  char *tmp;
  support_validator_get_memory_str_copy(&tmp, str);

  int valid = s21_validator(str, tmp);

  ck_assert_int_eq(valid, 0);
}
END_TEST

START_TEST(credit_calc) {
  double monthly_payment = 0;
  double overpayment_amount = 0;
  double total_payout = 0;
  double monthly_payments[12] = {0};

  s21_calc_credit(1000000, 12, 10, 1, &monthly_payment, &overpayment_amount,
                  &total_payout, NULL);

  ck_assert_float_eq(monthly_payment, 87915.89);
  ck_assert_float_eq(overpayment_amount, 54990.65);
  ck_assert_float_eq(total_payout, 1054990.65);

  monthly_payment = 0;
  overpayment_amount = 0;
  total_payout = 0;
  s21_calc_credit(1000000, 12, 10, 2, &monthly_payment, &overpayment_amount,
                  &total_payout, monthly_payments);

  ck_assert_double_eq_tol(overpayment_amount, 54166.7, 10);
  ck_assert_float_eq_tol(total_payout, 1.05417e+06, 10);
}
END_TEST

START_TEST(deposit_calc) {
  deposit *dep = calloc(1, sizeof(deposit));
  month_operations *months = calloc(12, sizeof(month_operations));

  dep->deposit_sum = 1000000;
  dep->placement_period = 12;
  dep->percent = 10;
  dep->tax_rate = 13;
  dep->frequency_of_payments = 1;

  dep->capitalization_of_percents = 0;

  s21_calc_deposit(dep, months);

  ck_assert_float_eq(dep->accrued_percents, 100000);
  ck_assert_float_eq(dep->result_sum, 1087000);
  ck_assert_float_eq(dep->tax_amount, 13000);

  dep->capitalization_of_percents = 1;

  dep->accrued_percents = 0;
  dep->result_sum = 0;
  dep->tax_amount = 0;

  s21_calc_deposit(dep, months);

  ck_assert_float_eq_tol(dep->accrued_percents, 104085, 10);
  ck_assert_float_eq(dep->result_sum, 1090554.35);
  ck_assert_float_eq_tol(dep->tax_amount, 13531.1, 10);

  free(dep);
  free(months);
}
END_TEST

Suite *smartcalc(void) {
  Suite *s;
  TCase *tc;
  s = suite_create("\033s21_smartcalc\033");
  tc = tcase_create("case_all_test");

  tcase_add_test(tc, s21_smart_1);
  tcase_add_test(tc, s21_smart_2);
  tcase_add_test(tc, s21_smart_3);
  tcase_add_test(tc, credit_calc);
  tcase_add_test(tc, deposit_calc);

  suite_add_tcase(s, tc);
  return s;
}

void case_test(Suite *s, int *fail) {
  SRunner *runner = srunner_create(s);
  srunner_set_fork_status(runner, CK_NOFORK);
  srunner_run_all(runner, CK_NORMAL);
  *fail = srunner_ntests_failed(runner);
  srunner_free(runner);
}

int main() {
  int fail = 0;
  SRunner *sr;

  sr = srunner_create(smartcalc());

  srunner_run_all(sr, CK_NORMAL);
  fail = srunner_ntests_failed(sr);
  srunner_free(sr);

  return fail;
}