#include <stdio.h>
/**
 * main - Prints alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}

