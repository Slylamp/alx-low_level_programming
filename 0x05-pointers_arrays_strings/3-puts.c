#include "main.h"

/**
 * _puts - write a function that prints a string, followed by a new line, to
 * stdout.
 *
 * @str: This is my input string
 *
 */

void _puts(char *str)
{

	for (; *str != '\0'; str++)
	{
		_puts(*str);
	}
	_putchar('\n');
}
