#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 * Return:It returns always 0.
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

putchar('\n');

return (0);
}
