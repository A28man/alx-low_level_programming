#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: string to be printed
 *
 * Return: nothing on success
 */
void puts2(char *str)
{
	int count = 0, i;

	while (*str)
	{
		count++;
		str++;
	}

	for (i = 0; i < count; i++)
		str--;
	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
