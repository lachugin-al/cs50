#include <cs50.h>
#include <stdio.h>

int Coins(int a);
float cash;
int cents, c25, c10, c5, c1, coins;

int main(void)
{
    {
        printf("O hai! ");
    }

    /* проверка что кол-во центов больше 0, если cash будет меньше 0 то условие устинное и цикл с do опять повторится */
    do
    {
        printf("How much change is owed?\n");
        cash = get_float();
    }
    while (cash < 0);

    Coins(coins);   // используем функцию для подсчета кол-ва монет
}

// создаем функцию для подсчета кол-ва монет
int Coins(int a)
{
    cents = cash * 10000 / 100;
    c25 = cents / 25;
    cents = cents - (c25 * 25);
    c10 = cents / 10;
    cents = cents - (c10 * 10);
    c5 = cents / 5;
    cents = cents - (c5 * 5);
    c1 = cents / 1;
    return printf("%i\n", c25 + c10 + c5 + c1);
}