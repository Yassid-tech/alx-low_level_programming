#include <stdio.h>

/**
 * main - Alphabet in lowercase, except for q and e.
 *
 * Return: 0 when the code is running successfully.
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n');
return (0);
}

