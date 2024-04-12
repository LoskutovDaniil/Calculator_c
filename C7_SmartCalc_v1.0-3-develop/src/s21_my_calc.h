#ifndef S21_MY_CALC_H
#define S21_MY_CALC_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FAILURE 0
#define SUCCESS 1

#define PRIORITY_0 0  // numbers                 (лексемы чисел)
#define PRIORITY_1 1  // + -                     (лексемы мат операций)
#define PRIORITY_2 2  // * / mod                 (лексемы мат операций)
#define PRIORITY_3 3  // ^                       (лексемы мат операций)
#define PRIORITY_4 4  // sin cos ...             (лексемы функция)
#define PRIORITY_5 5  // скобки открытой         (лексемы функция)
#define PRIORITY_6 6  // скобки закрытой         (лексемы функция)

#define PLUS_MINUS "+-"
#define MUL_DIV "*/"
#define MOD "mod"
#define POW "^"

#define MATH_SYMBOL "+-*/^()mod."
#define DIGIT "0123456789x"
#define CLOSE_OPEN_PARENTH "()"

typedef struct stack {
  double num;
  char symbol[5];
  int priority;
  struct stack *p_stack;
} stack;

typedef struct month_operations {
  double plus_value;   // сумма пополнения
  double minus_value;  // сумма снятия
} month_operations;

typedef struct deposit {
  // Вход:
  double deposit_sum;         // сумма вклада,
  int placement_period;       // срок размещения,
  double percent;             // процентная ставка
  double tax_rate;            // налоговая ставка
  int frequency_of_payments;  // периодичность выплат,
  double capitalization_of_percents;  // капитализация процентов
  double list_of_additions;           // список пополнений
  double list_of_partial_withdrawals;  // список частичных снятий

  // Выход:
  double accrued_percents;  // начисленные проценты
  double result_sum;  // сумма на вкладе к концу срока
  double tax_amount;  // сумма налога
} deposit;

// \brief Проверяет правильность записи в строку
// \param str Входная строка для проверки
// \param tmp Временная строка для работы
// \return Возвращает 1 в случае успешной проверки, 0 в противном случае
int s21_validator(char *str, char *tmp);

// \brief Выделяет динамическую память под копию строки для работы
// \param tmp Указатель на указатель строки для копирования
// \param str Исходная строка
void support_validator_get_memory_str_copy(char **tmp, char *str);

// \brief Проверяет, содержит ли строка хотя бы один символ
// \param str Проверяемая строка
// \return Возвращает 1, если строка не пуста, и 0 в противном случае
int support_be_str(char *str);

// \brief Удаляет пробелы из строки
// \param str Строка для удаления пробелов
void support_delete_space(char *str);

// \brief Проверяет правильность ввода математических функций
// \param tmp Строка для проверки
// \return Возвращает 1, если функция введена верно, и 0 в противном случае
int support_math_func_str(char *tmp);

// \brief Проверяет правильность ввода функций cos и acos
// \param tmp Строка для проверки
// \return Возвращает 1, если функция введена верно, и 0 в противном случае
int support_check_cos_acos(char *tmp);

// \brief Проверяет правильность ввода функций sin и asin
// \param tmp Строка для проверки
// \return Возвращает 1, если функция введена верно, и 0 в противном случае
int support_check_sin_asin(char *tmp);

// \brief Проверяет правильность ввода функции sqrt
// \param tmp Строка для проверки
// \return Возвращает 1, если функция введена верно, и 0 в противном случае
int support_check_sqrt(char *tmp);

// \brief Проверяет правильность ввода функций tan и atan
// \param tmp Строка для проверки
// \return Возвращает 1, если функция введена верно, и 0 в противном случае
int support_check_tan_atan(char *tmp);

// Функция анализирует строку и возвращает 1, если входная строка соответствует
// ожидаемому формату log или ln, в противном случае возвращает 0. \param tmp
// Строка, представляющая входные данные. \return 1, если строка соответствует
// формату log или ln, иначе 0.
int support_check_log_ln(char *tmp);

// \brief Проверяет четное количество круглых скобок в строке.
/// Функция анализирует строку и возвращает 1, если количество открывающих и
/// закрывающих круглых скобок совпадает, и они распределены корректно. В
/// противном случае возвращает 0. \param tmp Строка, подлежащая анализу.
/// \return 1, если количество скобок четное и они распределены корректно, иначе
/// 0.
int support_count_parent(char *tmp);

// \brief Проверяет правильность ввода математических символов в строке.
// Функция анализирует строку и возвращает 1, если все символы в строке
// соответствуют допустимым математическим символам. В противном случае
// возвращает 0. \param tmp Строка, представляющая входные данные. \return 1,
// если все символы в строке являются допустимыми математическими символами,
// иначе 0.
int support_math_symbol(char *tmp);

// проверяет число
// \brief Проверяет правильность ввода чисел с плавающей точкой или целых чисел
// \param tmp Строка для проверки
// \return Возвращает 1, если число введено верно, и 0 в противном случае
int support_digit(char *tmp);

// \brief Заменяет последовательность символов "--" на "+"
// \param tmp Строка для обработки
void support_double_minus_plus(char *tmp);

// \brief Удаляет последовательность символов "++" из строки
// \param tmp Строка для обработки
void support_delete_double_plus(char *tmp);

// \brief Добавляет 0 перед унарным минусом в строке
// \param tmp Строка для обработки
void support_unary_minus(char *tmp);

// \brief Обрабатывает входную строку с математическим выражением и вычисляет
// результат \param head Указатель на указатель на вершину стека \param tmp
// Строка с математическим выражением \param x Указатель на текущее значение
// переменной 'x' \param result Указатель для записи результата вычислений
// \return Возвращает 1 при успешном выполнении, и 0 в противном случае
int s21_stack_logic(stack **head, char *tmp, double *x, double *result);

// \brief Связывает лексемы строки в список в стеке
// \param head Указатель на указатель на вершину стека
// \param x Указатель на текущее значение переменной 'x'
// \param tmp Строка с математическим выражением
void support_stack_write_str_to_lists(stack **head, double *x, char *tmp);

// \brief Выделяет динамическую память под новый стек
// \param new_stack Указатель на указатель на новый стек
void support_stack_get_memory(stack **new_stack);

// \brief Разбивает лексемы строки на стеки
// \param head Указатель на указатель на вершину стека
// \param tmp_list Указатель на стек, представляющий текущий элемент строки
void support_stack_connect_lists(stack **head, stack *tmp_list);

// \brief Отображает стек для проверки связей между списками
// \param head Указатель на вершину стека
void support_stack_print(stack *head);

// \brief Добавляет операторы сложения и вычитания в листы стека
// \param tmp_list Указатель на стек, представляющий текущий элемент строки
// \param tmp Строка с математическим выражением
void support_stack_plus_minus(stack *tmp_list, char *tmp);

// \brief Добавляет операторы умножения и деления в листы стека
// \param tmp_list Указатель на стек, представляющий текущий элемент строки
// \param tmp Строка с математическим выражением
void support_stack_mul_div(stack *tmp_list, char *tmp);

// \brief Добавляет оператор mod в листы стека
// \param tmp_list Указатель на стек, представляющий текущий элемент строки
// \param tmp Строка с математическим выражением
void support_stack_mod(stack *tmp_list, char *tmp);

// \brief Добавляет оператор возведения в степень в листы стека
// \param tmp_list Указатель на стек, представляющий текущий элемент строки
// \param tmp Строка с математическим выражением
void support_stack_pow(stack *tmp_list, char *tmp);

// \brief Добавляет скобки в листы стека
// \param tmp_list Указатель на стек, представляющий текущий элемент строки
// \param tmp Строка с математическим выражением
void support_stack_parenths(stack *tmp_list, char *tmp);

// \brief Проверяет, является ли слово тригонометрической функцией
// \param tmp_list Указатель на стек, представляющий текущий элемент строки
// \param tmp Строка с математическим выражением
// \return Возвращает 1, если слово - тригонометрическая функция, и 0 в
// противном случае
int support_stack_trigonometric_word(stack *tmp_list, char *tmp);

// \brief Добавляет тригонометрическую функцию cos в листы стека
// \param tmp_list Указатель на стек, представляющий текущий элемент строки
// \param tmp Строка с математическим выражением
// \return Возвращает 1 при успешном выполнении, и 0 в противном случае
int support_stack_cos(stack *tmp_list, char *tmp);

// \brief Добавляет тригонометрическую функцию sin в листы стека
// \param tmp_list Указатель на стек, представляющий текущий элемент строки
// \param tmp Строка с математическим выражением
// \return Возвращает 1 при успешном выполнении, и 0 в противном случае
int support_stack_sin(stack *tmp_list, char *tmp);

// \brief Добавляет тригонометрическую функцию acos в листы стека
// \param tmp_list Указатель на стек, представляющий текущий элемент строки
// \param tmp Строка с математическим выражением
// \return Возвращает 1 при успешном выполнении, и 0 в противном случае
int support_stack_acos(stack *tmp_list, char *tmp);

// \brief Выполняет операцию арксинуса и добавляет результат в стек.
// \param tmp_list Указатель на стек, в который добавляется результат.
// \param tmp Строка с данными для анализа.
// \return 1, если операция успешна, иначе 0.
int support_stack_asin(stack *tmp_list, char *tmp);

// \brief Выполняет операцию арктангенса и добавляет результат в стек.
// \param tmp_list Указатель на стек, в который добавляется результат.
// \param tmp Строка с данными для анализа.
// \return 1, если операция успешна, иначе 0.
int support_stack_atan(stack *tmp_list, char *tmp);

// \brief Выполняет операцию извлечения квадратного корня и добавляет результат
// в стек. \param tmp_list Указатель на стек, в который добавляется результат.
// \param tmp Строка с данными для анализа.
// \return 1, если операция успешна, иначе 0.
int support_stack_sqrt(stack *tmp_list, char *tmp);

// \brief Выполняет операцию натурального логарифма и добавляет результат в
// стек. \param tmp_list Указатель на стек, в который добавляется результат.
// \param tmp Строка с данными для анализа.
// \return 1, если операция успешна, иначе 0.
int support_stack_ln(stack *tmp_list, char *tmp);

// \brief Выполняет операцию логарифма и добавляет результат в стек.
// \param tmp_list Указатель на стек, в который добавляется результат.
// \param tmp Строка с данными для анализа.
// \return 1, если операция успешна, иначе 0.
int support_stack_log(stack *tmp_list, char *tmp);

// \brief Выполняет операцию тангенса и добавляет результат в стек.
// \param tmp_list Указатель на стек, в который добавляется результат.
// \param tmp Строка с данными для анализа.
// \return 1, если операция успешна, иначе 0.
int support_stack_tan(stack *tmp_list, char *tmp);

// \brief Добавляет цифры (включая точку) в стек из строки.
// \param tmp_list Указатель на стек, в который добавляются цифры.
// \param tmp Строка с данными для анализа.
// \param x Число, которое может быть добавлено в стек.
// \return 1, если операция успешна, иначе 0.
int support_stack_digit_point_from_str(stack *tmp_list, char *tmp, double x);

// \brief Переворачивает стек.
// \param head Указатель на указатель на голову стека.
void support_stack_turn_over(stack **head);

// \brief Переключается на следующий лист в стеке.
// \param next_list Указатель на указатель на следующий лист стека.
// \param current_list Указатель на указатель на текущий лист стека.
void support_stack_next_list(stack **next_list, stack **current_list);

// \brief Создает обратную польскую нотацию в стеке.
// \param head Указатель на указатель на голову стека.
// \param result Указатель на переменную для хранения результата.
void support_stack_reverse_polish_notation(stack **head, double *result);

// \brief Вынимает нужный лист из стека.
// \param head Указатель на указатель на голову стека.
// \return Указатель на извлеченный лист стека.
stack *support_stack_pop(stack **head);

// \brief Помещает лист в нужный стек.
// \param ready Указатель на указатель на голову целевого стека.
// \param list Указатель на лист для вставки в стек.
void support_stack_push(stack **ready, stack *list);

// \brief Отпечатывает в строку польскую нотацию.
// \param head Указатель на голову стека.
void support_stack_print_polish_notation(stack *head);

// \brief Вычисляет итоговый результат обратной польской нотации.
// \param ready Указатель на голову стека.
// \param result Указатель на переменную для хранения результата.
void support_stack_calculation_result(stack *ready, double *result);

// \brief Вычисляет выражение с операторами +-/*mod^ в польской нотации.
// \param num_1 Первый операнд.
// \param num_2 Второй операнд.
// \param ready Стек, представляющий операцию.
// \return Результат вычисления.
double support_stack_math_operators(double num_1, double num_2, stack ready);

// \brief Вычисляет выражение с тригонометрией в польской нотации.
// \param num Операнд.
// \param ready Стек, представляющий операцию тригонометрии.
// \return Результат вычисления тригонометрической операции.
double support_stack_trigonometric_operators(double num, stack ready);

// \brief Добавляет координаты в массив.
// \param mass_to_adding Массив для добавления координат.
// \param min_value Минимальное значение координаты.
// \param max_value Максимальное значение координаты.
// \param mass_size Размер массива.
void s21_add_coordinates(double *mass_to_adding[], double min_value,
                         double max_value, int mass_size);

// \brief Вычисляет параметры по кредитному калькулятору.
// \param credit_summ Сумма кредита.
// \param number_of_months Количество месяцев.
// \param procent_rate Процентная ставка.
// \param credit_type Тип кредита.
// \param monthly_payment Ежемесячный платеж (результат).
// \param overpayment_amount Сумма переплаты (результат).
// \param total_payout Общая сумма выплаты (результат).
// \param monthly_payments Массив с ежемесячными выплатами (результат).
void s21_calc_credit(double credit_summ, int number_of_months,
                     double procent_rate, int credit_type,
                     double *monthly_payment, double *overpayment_amount,
                     double *total_payout, double *monthly_payments);

// \brief Выполняет расчет параметров по депозитному калькулятору.
// \param dep Структура с параметрами депозита.
// \param months Структура для операций с месяцами.
// \return 0 в случае успешного выполнения, иначе код ошибки.
int s21_calc_deposit(struct deposit *dep, month_operations *months);

#endif