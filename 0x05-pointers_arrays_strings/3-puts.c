#include <unistd.h>

/**
* _putchar - writes the character c stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and error is there is returned
*/
int _putchar(char c)
{
        return write(1, &c, 1);
}


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
		_putchar(*str);
	}
	_putchar('\n');
}
