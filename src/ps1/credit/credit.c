#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*
 * Программа, которая определяет, является ли предоставленный номер кредитной карты действительным в соответствии с алгоритмом Луна
 *
 * Проверка American Express uses 15-digit numbers, MasterCard uses 16-digit numbers, and Visa uses 13- and 16-digit numbers
 * American Express numbers all start with 34 or 37
 * MasterCard numbers all start with 51, 52, 53, 54, or 55
 * Visa numbers all start with 4
 */

void print_credit_card_brand(long long a);

int main(void)
{
    // Запрос номера кредитной карты
    long long credit_card_num;
    do
    {
        printf("Введите номер кредитной карты: ");
        credit_card_num = get_long_long();
    }
    while (credit_card_num <= 0);

    print_credit_card_brand(credit_card_num);

    printf("%lld\n", credit_card_num);

}

// Функция пределения кредитной карты по номеру
void print_credit_card_brand(long long a)
{
    if ((a >= 340000000000000 && a <= 349999999999999) || (a >= 370000000000000 && a <= 379999999999999))
        printf("Это карта American Express\n");
    else if (a >= 5100000000000000 && a <= 5599999999999999)
        printf("Это карта MasterCard\n");
    else if ((a >= 4000000000000 && a <= 4999999999999) || (a >= 4000000000000000 && a <= 4999999999999999))
        printf("Это карта Visa\n");
    else
        printf("Недействительный номер карты\n");
}