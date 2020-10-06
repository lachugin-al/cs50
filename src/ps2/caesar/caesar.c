#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    // arguments
    if (argc != 2)           // проверка кол-ва аргументов, если не равно 2 то выводится предупреждение
    {
        printf("Usage: ./caesar k\n");
        return 1;           // Если пользователь выполняет программу без аргументов командной строки или более, чем с одним аргументом, приложение должно возмутиться и вернуть значение 1 (обычно так обозначают ошибки):
    }

    // key
    int k = atoi(argv[1]); // переводит значение второго аргумента строки в число и функция atoi проверяет может ли строки быть переведена в целое число
    if (k < 0)
        return 0;

    // plaintext
    string plaintext;
    do
    {
        plaintext = get_string("plaintext: ");  // запрашиваем текст для кодирования с проверкой на ввод данных либо // string plaintext = get_string("plaintext: ");
    }
    while(plaintext == NULL);

    // ciphertext
    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)  // разбиваем текст на символы в массиве string
    {
        if (isupper(plaintext[i]))                     // регистр Z - 'A' + key % 26 формула расчета цифры если брать A=65 по ASCII =  (‘Y’ + 2) %26 = (89 + 2)%26 = 91%26 = 13
            printf("%c", (plaintext[i]-'A'+k)%26+'A');  // формула расчета цифры если брать A=0 по ASCII =  (‘Y’-'A' + 2) %26+'A' = (89-65 + 2)%26 = 24+2%26+65 = 65 (В алфавитном порядке от A до Y, Y = 24)
        else if (islower(plaintext[i]))
            printf("%c", (plaintext[i]-'a'+k)%26+'a');   // проверяем в каком регистре находится символ. если в нижнем то формула
        else
        {
            printf("%c", (plaintext[i]));           // иначе - проверка если символ не A и не a. скорее всего пробел, то выводим пробел ' '
        }
    }
    printf("\n");

    /*
    * int letter = 'A' - присваивает int letter - числовое значаение A из таблицы ASCII
    * Другими словами, точно так же, как argv — массив строк, string является массивом символов
    * for (int i = 0, n = strlen(plaintext); i < n; i++)
    * {
    *    printf("%c", plaintext[i]);
    * }
    */
}