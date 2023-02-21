#include "main.h"

/**
 * print_alphabet-X10 - Make alphabet x10 times
 *
 * Return: Always 0.
 */
int main(void)

{
	print_alphabet_x10();
	char c;
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	return (0);
	}
}
