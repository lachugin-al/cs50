#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int b = 12;
    {
        printf("Minutes: ");
    }
    int m = get_int();
    {
        printf("Bottles: %i\n", b * m);
    }
}