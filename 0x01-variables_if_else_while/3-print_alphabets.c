#include <stdio.h>

/**
 * main - Alphabet in lowercase, and then in uppercase.
 *
 * Return: 0 if the code runs with success.
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}

