#include "s21_my_calc.h"

int s21_stack_logic(stack **head, char *tmp, double *x, double *result) {
  int res = SUCCESS;
  support_stack_write_str_to_lists(head, x, tmp);
  support_stack_reverse_polish_notation(head, result);

  return res;
}

void support_stack_write_str_to_lists(stack **head, double *x, char *tmp) {
  while (*tmp != '\0') {
    stack *tmp_list;
    support_stack_get_memory(&tmp_list);

    if (support_digit(tmp)) {
      int tmp_digit_point =
          support_stack_digit_point_from_str(tmp_list, tmp, *x);
      tmp += tmp_digit_point;
    } else if (strchr(MATH_SYMBOL, *tmp)) {
      if (strchr(PLUS_MINUS, *tmp))
        support_stack_plus_minus(tmp_list, tmp);
      else if (strchr(MUL_DIV, *tmp))
        support_stack_mul_div(tmp_list, tmp);
      else if ((strncmp(tmp, MOD, 3) == 0)) {
        support_stack_mod(tmp_list, tmp);
        tmp += 2;
      } else if (strchr(POW, *tmp))
        support_stack_pow(tmp_list, tmp);
      else if (strchr(CLOSE_OPEN_PARENTH, *tmp))
        support_stack_parenths(tmp_list, tmp);
    } else if (support_stack_trigonometric_word(tmp_list, tmp)) {
      if (support_stack_cos(tmp_list, tmp))
        tmp += 2;
      else if (support_stack_sin(tmp_list, tmp))
        tmp += 2;
      else if (support_stack_tan(tmp_list, tmp))
        tmp += 2;
      else if (support_stack_acos(tmp_list, tmp))
        tmp += 3;
      else if (support_stack_asin(tmp_list, tmp))
        tmp += 3;
      else if (support_stack_atan(tmp_list, tmp))
        tmp += 3;
      else if (support_stack_sqrt(tmp_list, tmp))
        tmp += 3;
      else if (support_stack_ln(tmp_list, tmp))
        tmp++;
      else if (support_stack_log(tmp_list, tmp))
        tmp += 2;
    }

    tmp++;
    support_stack_connect_lists(head, tmp_list);
  }
  support_stack_turn_over(head);
}

void support_stack_get_memory(stack **new_stack) {
  *new_stack = calloc(1, sizeof(stack));
}

void support_stack_connect_lists(stack **head, stack *tmp_list) {
  if (*head == NULL)
    (*head) = tmp_list;
  else {
    tmp_list->p_stack = (*head);
    (*head) = tmp_list;
  }
}

void support_stack_print(stack *head) {
  stack *current = head;
  while (current != NULL) {
    printf("Number: %lf\n", current->num);
    printf("Symbol: %s\n", current->symbol);
    printf("Priority: %d\n", current->priority);
    printf("Pointer: %p\n", current->p_stack);
    printf("\n");
    current = current->p_stack;
  }
}

void support_stack_plus_minus(stack *tmp_list, char *tmp) {
  strncpy(tmp_list->symbol, tmp, 1);
  tmp_list->priority = PRIORITY_1;
}

void support_stack_mul_div(stack *tmp_list, char *tmp) {
  strncpy(tmp_list->symbol, tmp, 1);
  tmp_list->priority = PRIORITY_2;
}

void support_stack_mod(stack *tmp_list, char *tmp) {
  strncpy(tmp_list->symbol, tmp, 3);
  tmp_list->priority = PRIORITY_2;
}

void support_stack_pow(stack *tmp_list, char *tmp) {
  strncpy(tmp_list->symbol, tmp, 1);
  tmp_list->priority = PRIORITY_3;
}

void support_stack_parenths(stack *tmp_list, char *tmp) {
  if (*tmp == '(') {
    strncpy(tmp_list->symbol, tmp, 1);
    tmp_list->priority = PRIORITY_5;
  } else if (*tmp == ')') {
    strncpy(tmp_list->symbol, tmp, 1);
    tmp_list->priority = PRIORITY_6;
  }
}

int support_stack_trigonometric_word(stack *tmp_list, char *tmp) {
  int res = FAILURE;

  if (support_stack_cos(tmp_list, tmp))
    res = SUCCESS;
  else if (support_stack_sin(tmp_list, tmp))
    res = SUCCESS;
  else if (support_stack_tan(tmp_list, tmp))
    res = SUCCESS;
  else if (support_stack_acos(tmp_list, tmp))
    res = SUCCESS;
  else if (support_stack_asin(tmp_list, tmp))
    res = SUCCESS;
  else if (support_stack_atan(tmp_list, tmp))
    res = SUCCESS;
  else if (support_stack_sqrt(tmp_list, tmp))
    res = SUCCESS;
  else if (support_stack_ln(tmp_list, tmp))
    res = SUCCESS;
  else if (support_stack_log(tmp_list, tmp))
    res = SUCCESS;

  return res;
}

int support_stack_cos(stack *tmp_list, char *tmp) {
  int res = FAILURE;

  if ((strncmp(tmp, "cos", 3) == 0)) {
    strncpy(tmp_list->symbol, tmp, 3);
    tmp_list->priority = PRIORITY_4;
    res = SUCCESS;
  }

  return res;
}

int support_stack_sin(stack *tmp_list, char *tmp) {
  int res = FAILURE;

  if ((strncmp(tmp, "sin", 3) == 0)) {
    strncpy(tmp_list->symbol, tmp, 3);
    tmp_list->priority = PRIORITY_4;
    res = SUCCESS;
  }

  return res;
}

int support_stack_acos(stack *tmp_list, char *tmp) {
  int res = FAILURE;

  if ((strncmp(tmp, "acos", 4) == 0)) {
    strncpy(tmp_list->symbol, tmp, 4);
    tmp_list->priority = PRIORITY_4;
    res = SUCCESS;
  }

  return res;
}

int support_stack_asin(stack *tmp_list, char *tmp) {
  int res = FAILURE;

  if ((strncmp(tmp, "asin", 4) == 0)) {
    strncpy(tmp_list->symbol, tmp, 4);
    tmp_list->priority = PRIORITY_4;
    res = SUCCESS;
  }

  return res;
}

int support_stack_atan(stack *tmp_list, char *tmp) {
  int res = FAILURE;

  if ((strncmp(tmp, "atan", 4) == 0)) {
    strncpy(tmp_list->symbol, tmp, 4);
    tmp_list->priority = PRIORITY_4;
    res = SUCCESS;
  }

  return res;
}

int support_stack_sqrt(stack *tmp_list, char *tmp) {
  int res = FAILURE;

  if ((strncmp(tmp, "sqrt", 4) == 0)) {
    strncpy(tmp_list->symbol, tmp, 4);
    tmp_list->priority = PRIORITY_4;
    res = SUCCESS;
  }

  return res;
}

int support_stack_ln(stack *tmp_list, char *tmp) {
  int res = FAILURE;

  if ((strncmp(tmp, "ln", 2) == 0)) {
    strncpy(tmp_list->symbol, tmp, 2);
    tmp_list->priority = PRIORITY_4;
    res = SUCCESS;
  }

  return res;
}

int support_stack_log(stack *tmp_list, char *tmp) {
  int res = FAILURE;

  if ((strncmp(tmp, "log", 3) == 0)) {
    strncpy(tmp_list->symbol, tmp, 3);
    tmp_list->priority = PRIORITY_4;
    res = SUCCESS;
  }

  return res;
}
int support_stack_tan(stack *tmp_list, char *tmp) {
  int res = FAILURE;

  if ((strncmp(tmp, "tan", 3) == 0)) {
    strncpy(tmp_list->symbol, tmp, 3);
    tmp_list->priority = PRIORITY_4;
    res = SUCCESS;
  }

  return res;
}

int support_stack_digit_point_from_str(stack *tmp_list, char *tmp, double x) {
  char copy_str[256] = {0};
  int i = 0;

  if (*tmp == 'x')
    tmp_list->num = x;
  else {
    while (support_digit(tmp) || *tmp == '.') {
      copy_str[i++] = *tmp;
      tmp++;
    }

    copy_str[i] = '\0';
    tmp_list->num = atof(copy_str);

    return i - 1;
  }
  return 0;
}

void support_stack_turn_over(stack **head) {
  stack *prev = NULL;
  stack *current = *head;
  stack *next = NULL;

  while (current != NULL) {
    next = current->p_stack;
    current->p_stack = prev;
    prev = current;
    current = next;
  }

  *head = prev;
}

void support_stack_next_list(stack **next_list, stack **current_list) {
  (*next_list) = (*current_list)->p_stack;
  (*current_list) = (*next_list);
}

void support_stack_push(stack **ready, stack *list) {
  if (*ready == NULL) {
    (*ready) = list;
  } else {
    list->p_stack = (*ready);
    (*ready) = list;
  }
}

void support_stack_reverse_polish_notation(stack **head, double *result) {
  stack *ready = NULL;
  stack *support = NULL;

  int flag_parenth_open = 0;
  int flag_parenth_close = 0;

  while (*head != NULL) {
    stack *add_list = support_stack_pop(head);

    if (add_list->priority == PRIORITY_5) {
      flag_parenth_open += 1;
      flag_parenth_close = 0;
    }
    if (add_list->priority == PRIORITY_6) flag_parenth_close += 1;

    if (add_list->priority == 0 && add_list->priority != PRIORITY_5 &&
        add_list->priority != PRIORITY_6)
      support_stack_push(&ready, add_list);
    else if (support == NULL)
      support_stack_push(&support, add_list);
    else if (add_list->priority == PRIORITY_6) {
      // support_stack_print(support);
      while (support->priority != PRIORITY_5) {
        stack *from_support = support_stack_pop(&support);
        // printf("\nfrom_support->priority: %d\n", from_support->priority);
        support_stack_push(&ready, from_support);

        if (support == NULL) break;
      }
      support_stack_pop(&support);

    } else if (flag_parenth_open != 0) {
      if (support->priority >= add_list->priority) {
        // support_stack_print(support);
        while (support->priority >= add_list->priority &&
               support->priority != PRIORITY_5) {
          stack *add_list_2 = support_stack_pop(&support);
          support_stack_push(&ready, add_list_2);
          if (support == NULL) break;
        }
      }
      support_stack_push(&support, add_list);
    } else if (support->priority >= add_list->priority &&
               flag_parenth_open == 0) {
      // support_stack_print(support);
      while (support->priority >= add_list->priority) {
        stack *add_list_2 = support_stack_pop(&support);
        support_stack_push(&ready, add_list_2);
        if (support == NULL) break;
      }
      support_stack_push(&support, add_list);
    } else
      support_stack_push(&support, add_list);

    if (flag_parenth_close != 0) {
      flag_parenth_open -= 1;
      flag_parenth_close = 0;
    }
  }
  while (support != NULL)
    support_stack_push(&ready, support_stack_pop(&support));
  // support_stack_print(ready);
  support_stack_turn_over(&ready);
  support_stack_calculation_result(ready, result);
  // support_stack_print_polish_notation(ready);
  // support_stack_print(support);
}

stack *support_stack_pop(stack **head) {
  stack *p_stack = *head;
  *head = (*head)->p_stack;

  p_stack->p_stack = NULL;

  return p_stack;
}

void support_stack_print_polish_notation(stack *head) {
  stack *current = head;
  while (current != NULL) {
    if (current->num != 0) printf("%.lf ", current->num);
    if (current->symbol != 0) printf("%s ", current->symbol);
    current = current->p_stack;
  }
}

void support_stack_calculation_result(stack *ready, double *result) {
  stack *support = calloc(1, sizeof(stack));

  while (ready != NULL) {
    if (ready->priority == 0)
      support_stack_push(&support, support_stack_pop(&ready));
    else if (ready->priority > 0 && ready->priority < 4) {
      if (support->num == 0 && (*ready->symbol) == '/') break;
      ready->num = support_stack_math_operators(support->p_stack->num,
                                                support->num, *ready);
      free(support_stack_pop(&support));
      free(support_stack_pop(&support));
      ready->priority = 0;
      ready->symbol[0] = '\0';
      *result = ready->num;
    } else if (ready->priority == 4) {
      ready->num = support_stack_trigonometric_operators(support->num, *ready);
      free(support_stack_pop(&support));
      ready->priority = 0;
      ready->symbol[0] = '\0';
      *result = ready->num;
    }
  }
  printf("\nresult: %lf", *result);
}

double support_stack_math_operators(double num_1, double num_2, stack ready) {
  double res = 0;

  if ((*ready.symbol) == '+')
    res = num_1 + num_2;
  else if ((*ready.symbol) == '-')
    res = num_1 - num_2;
  else if ((*ready.symbol) == '*')
    res = num_1 * num_2;
  else if ((*ready.symbol) == '/')
    res = num_1 / num_2;
  else if ((*ready.symbol) == '^')
    res = pow(num_1, num_2);
  else if (strchr(ready.symbol, 'm')) {
    res = num_1;
    while (res >= num_2) res -= num_2;
  }
  return res;
}

double support_stack_trigonometric_operators(double num, stack ready) {
  double res = 0;

  if (!(strcmp(ready.symbol, "sin")))
    res = sin(num);
  else if (!(strcmp(ready.symbol, "asin")))
    res = asin(num);
  else if (!(strcmp(ready.symbol, "cos")))
    res = cos(num);
  else if (!(strcmp(ready.symbol, "acos")))
    res = acos(num);
  else if (!(strcmp(ready.symbol, "tan")))
    res = tan(num);
  else if (!(strcmp(ready.symbol, "atan")))
    res = atan(num);
  else if (!(strcmp(ready.symbol, "sqrt")))
    res = sqrt(num);
  else if (!(strcmp(ready.symbol, "ln")))
    res = log(num);
  else if (!(strcmp(ready.symbol, "log")))
    res = log10(num);

  return res;
}

void s21_add_coordinates(double *mass_to_adding[], double min_value,
                         double max_value, int mass_size) {
  double step_size = 0;
  step_size = (max_value - min_value) / mass_size;
  *mass_to_adding[0] = min_value;
  for (int i = 1; i < mass_size; ++i) {
    *mass_to_adding[i] = *mass_to_adding[i - 1] + step_size;
  }
}

void s21_calc_credit(double credit_summ, int number_of_months,
                     double procent_rate, int credit_type,
                     double *monthly_payment, double *overpayment_amount,
                     double *total_payout, double *monthly_payments) {
  double monthly_procent_rate =
      procent_rate / 12 / 100;  // рассчитываем месячную процентную ставку
  if (credit_type == 1) {  // если аннуитетный
    // ежемесячный платеж аннуитетный
    *monthly_payment =
        credit_summ *
        ((monthly_procent_rate *
          pow((1 + monthly_procent_rate), number_of_months)) /
         ((pow((1 + monthly_procent_rate), number_of_months)) - 1));
    *overpayment_amount = number_of_months * *monthly_payment -
                          credit_summ;  // переплата ануительный
    *total_payout =
        *overpayment_amount + credit_summ;  // общая выплата ануительный
  } else if (credit_type == 2) {  // если диференцированный
    *total_payout = credit_summ;  // общая выплата
    int N = number_of_months;     // ежемесячный платеж
    for (int i = 0; i < number_of_months;
         ++i) {  // для расчета ежемесячных платежей и общей суммы выплаты для
                 // дифференцированного кредита.
      --N;
      // ежемес.платеж для каждого дифф.кредита
      monthly_payments[i] =
          credit_summ / number_of_months +
          (credit_summ - (credit_summ / number_of_months) * N) * procent_rate /
              100 / 12;
      *total_payout +=
          monthly_payments[i] -
          (credit_summ /
           number_of_months);  // общая сумма выплаты для дифф.кредита
    }
    *overpayment_amount = *total_payout - credit_summ;  // переплата
  }
  /*
  Вход: общая сумма кредита, срок, процентная ставка, тип (аннуитетный,
  дифференцированный) Выход: ежемесячный платеж, переплата по кредиту, общая
  выплата credit_type == 1 ануительный
  */
}

int s21_calc_deposit(struct deposit *dep, month_operations *months) {
  int result = SUCCESS;
  double tax_coeficent = 0;

  if (dep->tax_rate != 0.00)
    tax_coeficent = dep->tax_rate / 100;  // Рассчитываю сумму налога на доход

  double monthly_rate =
      dep->percent / 12 / 100;  // Процент, начисляемый раз в месяц
  double accumulated_percent =
      0;  // Тут будут храниться начисленные проценты и ждать своей выплаты
  double deposit = dep->deposit_sum;

  for (int i = 0; i < dep->placement_period && result; ++i) {
    deposit += months[i].plus_value;
    deposit -= months[i].minus_value;
    // Капитализация или нет
    if (dep->capitalization_of_percents == 0) {
      accumulated_percent = dep->deposit_sum * monthly_rate;
      dep->deposit_sum -= months[i].minus_value;
      dep->deposit_sum += months[i].plus_value;
    } else {
      accumulated_percent = deposit * monthly_rate;
    }
    dep->tax_amount += accumulated_percent *
                       tax_coeficent;  // Подсчет общей суммы налогов
                                       // Выплаты в зависимости от условий
    if (dep->frequency_of_payments > 1 && i > 0 &&
        dep->capitalization_of_percents) {  // Для сложного процента
      if ((i % dep->frequency_of_payments) == 0) {
        deposit = deposit + accumulated_percent -
                  (accumulated_percent * tax_coeficent);  // с вычетом налогов
        dep->accrued_percents +=
            accumulated_percent;  // начисленные проценты без учета налогов
        accumulated_percent = 0;
      }
    } else {
      deposit = deposit + accumulated_percent -
                (accumulated_percent * tax_coeficent);  // с вычетом налогов
      dep->accrued_percents +=
          accumulated_percent;  // начисленные проценты без учета налогов
      accumulated_percent = 0;
    }
    if (deposit < 0 || dep->deposit_sum < 0)
      result = FAILURE;  // Депозит ушел в минус
  }
  dep->result_sum =
      deposit + accumulated_percent;  // сумма на вкладе к концу срока
  return result;
}