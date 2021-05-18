#include <stdio.h>
/**
*main - prints all possible combinations of single-digit numbers.
*Numbers must be separated by , followed by a space,printed in ascending order
*Return: It returns 0
*/
int main(void)
{
int number;
for (number = 0; number <= 9; number++)
{
putchar((number % 10) + '0');
if (number != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
