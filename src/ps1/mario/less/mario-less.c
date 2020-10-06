#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n; // проверка высоты
    do
    {
        n = get_int("Height: ");
    }
    while (n < 0 || n > 23); // если < 0 или > 23, то цикл повторяется

    for (int i = 0; i < n; i++) //цикл для столбика
    {
        for (int j = 0; j <= n; j++) // цикл для строки
        {
            if (i + j < n - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}