#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, and the in uppercase.
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
