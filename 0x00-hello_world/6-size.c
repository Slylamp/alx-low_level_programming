#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: usin the main function
 * this program prints "Progrmming is like biulding a multilingual puzzel
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %ld bytes(s)\n", sizeof(c));
        printf("Size of an int: %ld bytes(s)\n", sizeof(i));
        printf("Size of a long int: %ld bytes(s)\n", sizeof(li));
        printf("Size of a long long int: %ld bytes(s)\n", sizeof(lli));
	printf("Size 0f a float: %ld bytes(s)\n", sizeof(f));
	return (0);
}
