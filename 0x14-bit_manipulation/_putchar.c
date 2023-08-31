#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: char to print
 * Return: success 1.
 * error, -1, and errno is set appropriately.
 * sign by Rida
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
