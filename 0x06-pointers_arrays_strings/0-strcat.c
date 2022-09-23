#include "main.h"

/**
 * _strcat - c0ncatenates the string pointer to by @src to
 * the end of the string pointer to by @dest
 * @dest: String that will b e appended
 * @src: String to be concatenated upon
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
