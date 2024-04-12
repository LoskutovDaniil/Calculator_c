// #include "s21_my_calc.h"

// int main () // мой кальк
// {
//     // char str[256] = "a co s(-0.5)";
//     // char str[256] = "356 * (356 / 2) ^ (34 - 1) - 34 + cos(5 + 8)";
//     // char str[256] = "5 +(cos(3.8546515) -- 4 ++ (0.4 mod 5.0)) mod
//     (cos(sin(tan(acos(asin(atan(sqrt(ln(log(5.45+cos(245)+66+6))))))))) -- 45
//     ^ 2 ++ (1*(32-2))) mod 3 + (ta  n(cos(tan(2   1))) ++ 9) -- (23 * 0 +
//     1)";
//     // char str[256] = "log(545+log(245)+66+6)";
//     // char str[256] = "cos()";
//     // char str[256] = "-5 + 5 - (-5) + (-5) +
//     tan(-tan(-atan(-cos(-sin(-sqrt(-ln(-log(-acos(-asin((5 +
//     (-3))))))))))))"; // еррор
//     // char str[256] = "7.03+856*654/2*3^2.4+cos(57) + sin(682) * acos(226) /
//     asin(122) ^ atan(256) * sqrt(813) / ln(263) * log(698) * tan(948)";
//     // char str[256] = "4 + 7 - 3 * 5 / 6 mod 2";
//     // char str[256] = "4+(3-2+8) * 3 +(cos(5) - 3*(782+5))";
//     // char str[256] = "8+(cos(5 + 1) / ln(log(5/8)) - 14^5) * (5^8)";
//     // char str[256] = "8+5 / (cos(56^2))";
//     // char str[256] = "ln(5-1)";
//     // char str[256] = "x+x/x+x*(x+x*x/x)";
//     // char str[256] = "8+5 / (cos(56^x))";
//     // char str[256] = "12 * .1";
//     // char str[256] = "(10-3)5";
//     // char str[256] = "5-";
//     // char str[256] = "5/0.";
//     // char str[256] =
//     "atan(1)+tan(1)-sin(1)*asin(1)+6+3+log(1)+acos(1)*cos(8)+ln(7)+sqrt(12)+6.22^4-4+5+x";
//     // char str[256] = ".1+1";
//     char str[256] =
//       "atan(1)+tan(1)-sin(1)*asin(1)+6+3+log(1)+acos(1)*cos(8)+ln(7)+sqrt(12)+"
//       "6.22^4-4+5+x";

//     double result = 0;
//     double x = 0;

//     char* tmp;
//     support_validator_get_memory_str_copy(&tmp, str);

//     if(!s21_validator(str, tmp)) return 1;

//     stack *head = NULL;

//     s21_stack_logic(&head, tmp, &x, &result);
//     printf("\nSTR: %s\n", str);
//     // support_stack_print(head);

//     free(tmp);
//     return 0;
// }