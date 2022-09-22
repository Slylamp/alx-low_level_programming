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
	int index;

	for ( index = 0; str[index] != '\0'; index++)
	{
		_puts(char str[index]);
	}
	_putchar('\n');
}
