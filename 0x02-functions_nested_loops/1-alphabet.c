#include "holberton.h"

/**
 * print_alphabet - check the code for Holberton School students.
 * Description: Print the alphabeth with _putchar
 * Return: Always 0.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
