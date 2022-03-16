#include <holberton.h>

/**
 * print the alphabeth - check the code for Holberton School Students
 * Description: Prints the alphabeth with _putchar
 * Return: ALways 0.
 */
void print_alphabeth(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
