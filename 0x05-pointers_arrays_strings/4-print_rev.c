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
 * print_rev - This funtion prints a reverse string
 *
 * @s: This is the input string
 */
void print_rev(char *s)
{
	int index;

	for (index = 0: s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
