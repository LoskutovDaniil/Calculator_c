#include "s21_my_calc.h"

int s21_validator(char *str, char *tmp) {
  int res = SUCCESS;
  if (!support_be_str(str)) return FAILURE;
  if (!support_count_parent(str)) return FAILURE;

  strcpy(tmp, str);

  support_delete_space(tmp);
  support_double_minus_plus(tmp);
  support_delete_double_plus(tmp);
  support_unary_minus(tmp);

  while (*tmp != '\0') {
    char symbol[] = "cstaloinqrg()+-*/^0123456789md.x";
    if (strchr(symbol, *tmp)) {
      if (!support_math_func_str(tmp)) return FAILURE;
    } else
      return FAILURE;
    tmp++;
  }
  // не забыть зафришить в другой функции ()
  return res;
}

int support_be_str(char *str) {
  if (str == NULL || str[0] == '\0') return FAILURE;

  return SUCCESS;
}

void support_delete_space(char *str) {
  int len = strlen(str);
  int i, j;

  for (i = 0, j = 0; len > i; i++) {
    if (str[i] != ' ') {
      str[j] = str[i];
      j++;
    }
  }
  str[j] = '\0';
}

void support_double_minus_plus(char *tmp) {
  int len = strlen(tmp);
  int i, j;

  for (i = 0, j = 0; i < len; i++) {
    if (tmp[i] == '-' && tmp[i + 1] == '-') {
      tmp[j] = '+';
      i++;
    } else {
      tmp[j] = tmp[i];
    }
    j++;
  }
  tmp[j] = '\0';
}

void support_delete_double_plus(char *tmp) {
  int len = strlen(tmp);
  int i, j;

  for (i = 0, j = 0; i < len; i++) {
    if (tmp[i] == '+' && tmp[i + 1] == '+') {
      tmp[j] = '+';
      i++;
    } else {
      tmp[j] = tmp[i];
    }
    j++;
  }
  tmp[j] = '\0';
}

void support_unary_minus(char *tmp) {
  char result[256] = {0};
  int len_tmp = strlen(tmp);
  int j = 0;

  for (int i = 0; i < len_tmp; i++) {
    if (tmp[i] == '-' && (i == 0 || tmp[i - 1] == '(')) {
      result[j++] = '0';
      result[j++] = '-';
    } else {
      result[j++] = tmp[i];
    }
  }
  result[j] = '\0';

  strcpy(tmp, result);
}

int support_math_func_str(char *tmp) {
  int res = FAILURE;

  if (*tmp == '(' || *tmp == '.') {
    if (*tmp == '.' && *(tmp + 1) == 'x') return FAILURE;
    if (*tmp == '.' && ((strchr(MATH_SYMBOL, *(tmp + 1))) ||
                        (strchr(MATH_SYMBOL, *(tmp - 1)))))
      return FAILURE;
    if (support_check_cos_acos(tmp))
      res = SUCCESS;
    else if (support_check_sin_asin(tmp))
      res = SUCCESS;
    else if (support_check_sqrt(tmp))
      res = SUCCESS;
    else if (support_check_tan_atan(tmp))
      res = SUCCESS;
    else if (support_check_log_ln(tmp))
      res = SUCCESS;
    else if (support_digit(tmp + 1))
      res = SUCCESS;
    else if (support_math_symbol(tmp))
      res = SUCCESS;
  } else if (*tmp == 'c' || *tmp == 'o') {
    if (support_check_cos_acos(tmp))
      res = SUCCESS;
    else if (support_check_log_ln(tmp))
      res = SUCCESS;
    else if (support_math_symbol(tmp))
      res = SUCCESS;
  } else if (*tmp == 's' || *tmp == 'n' || *tmp == 'i' || *tmp == 'q' ||
             *tmp == 'r' || *tmp == 'g') {
    if (support_check_sin_asin(tmp))
      res = SUCCESS;
    else if (support_check_sqrt(tmp))
      res = SUCCESS;
    else if (support_check_cos_acos(tmp))
      res = SUCCESS;
    else if (support_check_tan_atan(tmp))
      res = SUCCESS;
    else if (support_check_log_ln(tmp))
      res = SUCCESS;
  } else if (*tmp == 't') {
    if (support_check_tan_atan(tmp))
      res = SUCCESS;
    else if (support_check_sqrt(tmp))
      res = SUCCESS;
  } else if (*tmp == 'a') {
    if (support_check_cos_acos(tmp))
      res = SUCCESS;
    else if (support_check_tan_atan(tmp))
      res = SUCCESS;
    else if (support_check_sin_asin(tmp))
      res = SUCCESS;
  } else if (*tmp == 'l') {
    if (support_check_log_ln(tmp)) res = SUCCESS;
  } else if (*tmp == ')' || *tmp == 'm' || *tmp == 'd') {
    if (support_math_symbol(tmp)) res = SUCCESS;
  } else if (support_digit(tmp))
    res = SUCCESS;
  else if (support_math_symbol(tmp))
    res = SUCCESS;

  return res;
}

int support_check_cos_acos(char *tmp) {
  int res = FAILURE;

  if (support_digit(tmp - 1) && (*(tmp - 1) != '\0'))
    res = FAILURE;
  else if ((*(tmp - 1) == 'a') && (*(tmp + 1) == 'o') && (*(tmp + 2) == 's') &&
           (*(tmp + 3) == '('))
    res = SUCCESS;  // acos( от c
  else if ((*(tmp + 1) == 'o') && (*(tmp + 2) == 's') && (*(tmp + 3) == '('))
    res = SUCCESS;  // cos( от c
  else if ((*(tmp - 1) == 'o') && (*(tmp - 2) == 'c') && (*(tmp - 3) == 'a') &&
           (*(tmp + 1) == '('))
    res = SUCCESS;  // acos( от s
  else if ((*(tmp - 1) == 'o') && (*(tmp - 2) == 'c') && (*(tmp + 1) == '('))
    res = SUCCESS;  // cos( от s
  else if ((*(tmp + 1) == 'c') && (*(tmp + 2) == 'o') && (*(tmp + 3) == 's') &&
           (*(tmp + 4) == '('))
    res = SUCCESS;  // acos( от (
  else if ((*(tmp - 1) == 'c') && (*(tmp + 1) == 's') && (*(tmp + 2) == '('))
    res = SUCCESS;  // cos( от o
  else if ((*(tmp - 1) == 'c') && (*(tmp - 2) == 'a') && (*(tmp + 1) == 's') &&
           (*(tmp + 2) == '('))
    res = SUCCESS;  // acos( от о
  else if ((*(tmp - 1) == 's') && (*(tmp - 2) == 'o') && (*(tmp - 3) == 'c'))
    res = SUCCESS;  // cos( от (
  else if ((*(tmp - 1) == 's') && (*(tmp - 2) == 'o') && (*(tmp - 3) == 'c') &&
           (*(tmp - 4) == 'a'))
    res = SUCCESS;  // acos( от (

  return res;
}

int support_check_sin_asin(char *tmp) {
  int res = FAILURE;

  if (support_digit(tmp - 1) && (*(tmp - 1) != '\0'))
    res = FAILURE;
  else if ((*(tmp - 1) == 'a') && (*(tmp + 1) == 'i') && (*(tmp + 2) == 'n') &&
           (*(tmp + 3) == '('))
    res = SUCCESS;  // asin от s
  else if ((*(tmp + 1) == 'i') && (*(tmp + 2) == 'n') && (*(tmp + 3) == '('))
    res = SUCCESS;  // sin от s
  else if ((*(tmp + 1) == 's') && (*(tmp + 2) == 'i') && (*(tmp + 3) == 'n') &&
           (*(tmp + 4) == '('))
    res = SUCCESS;  // asin от a
  else if ((*(tmp - 1) == 's') && (*(tmp + 1) == 'n') && (*(tmp + 2) == '('))
    res = SUCCESS;  // sin от i
  else if ((*(tmp - 2) == 'a') && (*(tmp - 1) == 's') && (*(tmp + 1) == 'n') &&
           (*(tmp + 2) == '('))
    res = SUCCESS;  // asin от i
  else if ((*(tmp - 2) == 's') && (*(tmp - 1) == 'i') && (*(tmp + 1) == '('))
    res = SUCCESS;  // sin от n
  else if ((*(tmp - 3) == 'a') && (*(tmp - 2) == 's') && (*(tmp - 1) == 'i') &&
           (*(tmp + 1) == '('))
    res = SUCCESS;  // asin от n
  else if ((*(tmp - 1) == 'n') && (*(tmp - 2) == 'i') && (*(tmp - 3) == 's'))
    res = SUCCESS;  // sin от (
  else if ((*(tmp - 1) == 'n') && (*(tmp - 2) == 'i') &&
           (*(tmp - 3) == 's' && (*(tmp - 4) == 'a')))
    res = SUCCESS;  // asin от (

  return res;
}

int support_check_sqrt(char *tmp) {
  int res = FAILURE;

  if (support_digit(tmp - 1) && (*(tmp - 1) != '\0'))
    res = FAILURE;
  else if ((*(tmp + 1) == 'q') && (*(tmp + 2) == 'r') && (*(tmp + 3) == 't') &&
           (*(tmp + 4) == '('))
    res = SUCCESS;  // sqrt от s
  else if ((*(tmp - 1) == 'r') && (*(tmp - 2) == 'q') && (*(tmp - 3) == 's') &&
           (*(tmp + 1) == '('))
    res = SUCCESS;  // sqrt от t
  else if ((*(tmp - 1) == 's') && (*(tmp + 1) == 'r') && (*(tmp + 2) == 't') &&
           (*(tmp + 3) == '('))
    res = SUCCESS;  // sqrt от q
  else if ((*(tmp - 1) == 'q') && (*(tmp - 2) == 's') && (*(tmp + 1) == 't') &&
           (*(tmp + 2) == '('))
    res = SUCCESS;  // sqrt от r
  else if (*(tmp - 1) == 't' && *(tmp - 2) == 'r' && *(tmp - 3) == 'q' &&
           *(tmp - 4) == 's')
    res = SUCCESS;  // sqrt от (

  return res;
}

int support_check_tan_atan(char *tmp) {
  int res = FAILURE;

  if (support_digit(tmp - 1) && (*(tmp - 1) != '\0'))
    res = FAILURE;
  else if ((*(tmp - 1) == 'a') && (*(tmp + 1) == 'a') && (*(tmp + 2) == 'n') &&
           (*(tmp + 3) == '('))
    res = SUCCESS;  // atan от t
  else if ((*(tmp + 1) == 'a') && (*(tmp + 2) == 'n') && (*(tmp + 3) == '('))
    res = SUCCESS;  // tan от t
  else if ((*(tmp - 1) == 't') && (*(tmp + 1) == 'n') && (*(tmp + 2) == '('))
    res = SUCCESS;  // tan от a
  else if ((*(tmp + 1) == 't') && (*(tmp + 2) == 'a') && (*(tmp + 3) == 'n') &&
           (*(tmp + 4) == '('))
    res = SUCCESS;  // atan от первой a
  else if ((*(tmp - 2) == 'a') && (*(tmp - 1) == 't') && (*(tmp + 1) == 'n') &&
           (*(tmp + 2) == '('))
    res = SUCCESS;  // atan от второй а
  else if ((*(tmp - 1) == 'a') && (*(tmp - 2) == 't') && (*(tmp + 1) == '('))
    res = SUCCESS;  // tan от n
  else if ((*(tmp - 3) == 'a') && (*(tmp - 2) == 't') && (*(tmp - 1) == 'a') &&
           (*(tmp + 1) == '('))
    res = SUCCESS;  // atan от n
  else if ((*(tmp - 1) == 'n') && (*(tmp - 2) == 'a') && (*(tmp - 3) == 't'))
    res = SUCCESS;  // tan от (
  else if ((*(tmp - 1) == 'n') && (*(tmp - 2) == 'a') &&
           (*(tmp - 3) == 't' && (*(tmp - 4) == 'a')))
    res = SUCCESS;  // atan от (

  return res;
}

int support_check_log_ln(char *tmp) {
  int res = FAILURE;

  if (support_digit(tmp - 1) && (*(tmp - 1) != '\0'))
    res = FAILURE;
  else if ((*(tmp + 1) == 'n') && (*(tmp + 2) == '('))
    res = SUCCESS;  // ln от l
  else if ((*(tmp + 1) == 'o') && (*(tmp + 2) == 'g') && (*(tmp + 3) == '('))
    res = SUCCESS;  // log от l
  else if ((*(tmp - 1) == 'l') && (*(tmp + 1) == 'g') && (*(tmp + 2) == '('))
    res = SUCCESS;  // log от o
  else if ((*(tmp - 1) == 'l') && (*(tmp + 1) == '('))
    res = SUCCESS;  // ln от n
  else if ((*(tmp - 1) == 'o') && (*(tmp - 2) == 'l') && (*(tmp + 1) == '('))
    res = SUCCESS;  // log от g
  else if ((*(tmp - 1) == 'n') && (*(tmp - 2) == 'l'))
    res = SUCCESS;  // ln от (
  else if ((*(tmp - 1) == 'g') && (*(tmp - 2) == 'o') && (*(tmp - 3) == 'l'))
    res = SUCCESS;  // log от (

  return res;
}

int support_count_parent(char *tmp) {
  int res = FAILURE;
  int open_parent = 0;
  int close_parent = 0;

  while (*tmp != '\0') {
    if (*tmp == '(') open_parent += 1;
    if (*tmp == ')') close_parent += 1;
    tmp++;
  }

  if (open_parent == close_parent) res = SUCCESS;

  return res;
}

int support_digit(char *tmp) {
  int res = FAILURE;

  if (*tmp == 'x' && *(tmp + 1) != '\0' &&
      (*(tmp + 1) == 'x' || (strchr(DIGIT, *(tmp + 1)))))
    return FAILURE;                                      // xx/x5
  if (*tmp == 'x' && *(tmp + 1) == '.') return FAILURE;  // x.
  if (strchr(DIGIT, *tmp) && (*tmp != '\0')) res = SUCCESS;

  return res;
}

int support_math_symbol(char *tmp) {
  int res = FAILURE;

  if (strchr(MATH_SYMBOL, *tmp)) {
    if (*tmp == '/' && *(tmp + 1) != '\0' && *(tmp + 1) == '0' &&
        *(tmp + 2) != '.')
      return FAILURE;
    else if (strchr(MATH_SYMBOL, *tmp) && *(tmp - 1) == 'x' &&
             *(tmp + 1) == 'x')
      res = SUCCESS;
    else if (*tmp == ')' && *(tmp + 1) != '\0' && (support_digit(tmp + 1)))
      return FAILURE;
    else if ((support_digit(tmp - 1)) &&
             (support_digit(tmp + 1) && (*(tmp + 1) != '\0')))
      res = SUCCESS;
    else if ((*tmp == ')') && (support_digit(tmp - 1)) && (*(tmp + 1) == '\0'))
      res = SUCCESS;
    else if ((*tmp == ')') && (*(tmp - 1) == ')') && (*(tmp + 1) == '\0'))
      res = SUCCESS;
    else if ((((support_digit((tmp - 1)))) && (*(tmp + 1) == '(')))
      res = SUCCESS;
    else if ((*(tmp - 1) == ')') && (*(tmp + 1) == '('))
      res = SUCCESS;
    else if ((*(tmp - 1) == ')') && (support_digit(tmp + 1)))
      res = SUCCESS;
    else if ((support_digit(tmp - 1)) &&
             (support_math_func_str(tmp + 1) && (*(tmp + 1) != '\0')))
      res = SUCCESS;
    else if ((*(tmp - 1) == ')') && (*(tmp + 1) == ')'))
      res = SUCCESS;
    else if (support_digit(tmp - 1) && (*(tmp - 1) == ')'))
      res = SUCCESS;
    else if ((*(tmp - 1) == ')' && (support_math_func_str(tmp + 1))))
      res = SUCCESS;
    else if ((((*(tmp - 1) == ')' || support_digit(tmp - 1))) &&
              ((*(tmp + 1) == 'o')) && ((*(tmp + 2) == 'd'))) &&
             ((support_digit(tmp + 3)) ||
              (*(tmp + 3) == '(' ||
               (*(tmp + 3) == 'a' ||
                (*(tmp + 3) == 'c' ||
                 (*(tmp + 3) == 's' ||
                  (*(tmp + 3) == 't' || (*(tmp + 3) == 'l'))))))))
      res = SUCCESS;  // ) или 3 mod 3 или (от m
    else if ((((*(tmp - 2) == ')' || support_digit(tmp - 2))) &&
              ((*(tmp - 1) == 'm')) && ((*(tmp + 1) == 'd'))) &&
             ((support_digit(tmp + 2)) ||
              (*(tmp + 2) == '(' ||
               (*(tmp + 2) == 'a' ||
                (*(tmp + 2) == 'c' ||
                 (*(tmp + 2) == 's' ||
                  (*(tmp + 2) == 't' || (*(tmp + 2) == 'l'))))))))
      res = SUCCESS;  // mod от о
    else if (((*(tmp - 3) == ')' || support_digit(tmp - 3)) &&
              (*(tmp - 2) == 'm') && (*(tmp - 1) == 'o')) &&
             (support_digit(tmp + 1) ||
              (*(tmp + 1) == '(' ||
               (*(tmp + 1) == 'a' ||
                (*(tmp + 1) == 'c' ||
                 (*(tmp + 1) == 's' ||
                  (*(tmp + 1) == 't' || (*(tmp + 1) == 'l'))))))))
      res = SUCCESS;  // mod от d
    else if ((*tmp == ')') && (*(tmp + 1) == 'm'))
      res = SUCCESS;
    else if (strchr(MATH_SYMBOL, *tmp) && *(tmp + 1) == '\0')
      return FAILURE;
    else if (strchr(MATH_SYMBOL, *tmp) &&
             ((support_digit(tmp + 1)) || (support_digit(tmp - 1))))
      res = SUCCESS;
  }

  return res;
}

void support_validator_get_memory_str_copy(char **tmp, char *str) {
  *tmp = calloc(strlen(str) + 1, sizeof(char));
}
