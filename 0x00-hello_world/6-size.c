#include <stdio.h>
/**
 * main - prints the size of various types on the computer 
 *                   it is compiled and run on.
 * Return: returns 0 to indicate successful execution.
 */
int main(void)
{
printf("Size of a char: %zu byte\n",sizeof(char));
printf("Size of a int: %zu byte\n",sizeof(int));
printf("Size of a long int: %zu byte\n",sizeof(long int));
printf("Size of a long long int: %zu byte\n",sizeof(long long int));
printf("Size of a float: %zu byte\n",sizeof(float));
return (0);
}

