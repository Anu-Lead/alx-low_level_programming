#include "holberton.h"
/**
 * print_alphabet - check the code for abcd
 * Description: Print the lowercase alphabeth with _putchar
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
}
