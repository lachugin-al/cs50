#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>                              // подключаем библиотеку символов

int main(void)
{
    string name = get_string();                 // запрашиваем имя
    printf("%c", toupper(name[0]));             // выводим первую букву, с функцией toupper меняется регистр букв

    int longname = strlen(name);                // проверяем кол-во символов в строке
    for (int i = 0; i < longname; i++)          // используем цикл для поиска пробела и вывода каждой буквы после него
    {
        if (name[i] == ' ')
        printf("%c", toupper(name[i+1]));
    }
    printf("\n");
}