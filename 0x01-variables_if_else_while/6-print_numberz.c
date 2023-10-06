#include <stdio.h>

/**
 * main - All single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: 0, successful code .
 */
int main(void)
{
int nume;
for (nume = 0; nume < 10; nume++)
putchar((nume % 10) + '0');
putchar('\n');
return (0);
}

