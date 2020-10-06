#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int coins = 0;  // указываем что изначально счет монет начинаем с 0
    float cash;
    printf("O hai! ");

    // проверка что кол-во центов больше 0, если cash будет меньше 0 то условие устинное и цикл с do опять повторится
    do
    {
        printf("How much change is owed?\n");
        cash = get_float();
    }
    while (cash < 0);

    // конвертируем доллары в центы из float -> int
    int cents = round(cash * 100);
    printf("%i cents\n", cents);

    // цикл на посчета монет будет выполняться пока cents не будет равно 0
    while (cents > 0)
    {
        if ((cents - 25) >= 0)
        {
            cents = cents - 25;
            coins++;
        }
        else if ((cents - 10) >= 0)
        {
            cents = cents - 10;
            coins++;
        }
        else if ((cents - 5) >= 0)
        {
            cents = cents - 5;
            coins++;
        }
        else if ((cents - 1) >= 0)
        {
            cents = cents - 1;
            coins++;
        }
    }

    /** можно написать компактнее
    while (cents > 0) {
        if ((cents - 25) >= 0) {cents = cents - 25; coins++; }
        else if ((cents - 10) >= 0) {cents = cents - 10; coins++; }
        else if ((cents - 5) >= 0) {cents = cents - 5; coins++; }
        else if ((cents - 1) >= 0) {cents = cents - 1; coins++; }
    }
    */

    printf("%i\n", coins);
}
