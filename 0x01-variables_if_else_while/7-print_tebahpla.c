#include <stdio.h>
/**
 * main - Prints lowercase alphabets in reverse
 *
 * followed by new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
