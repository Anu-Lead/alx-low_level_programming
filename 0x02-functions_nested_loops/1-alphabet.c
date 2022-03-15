#include "stdio.h"

/**
 * print_alphabet - check the code for Holberton School students.
 * Description: Print the alphabet with _putchar
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
