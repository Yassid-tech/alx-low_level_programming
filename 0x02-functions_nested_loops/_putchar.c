#include "unistd.h"

/**
 * _putchar - writes the char c to stdout
 * @c: the char to print
 * return: on success 1
 * on error 0
 */
int _putchar(char c)
{
return (write(1 , &c , 1));
}