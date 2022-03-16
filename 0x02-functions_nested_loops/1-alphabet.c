#include "holberton.h"

/**
 * print_alphabet - check the code for Holberton School students.
 * Description: Print the alphabeth with _putchar
 * Return: Always 0.
 */
void print_alphabeth(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
