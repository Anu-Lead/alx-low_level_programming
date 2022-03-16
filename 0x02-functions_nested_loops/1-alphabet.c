#include "main.h"
/**
 * print_alphabet - check the code for abcd
 * Description: Print the lowercase alphabeth with _putchar
 * Return: void
 */
int print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}
