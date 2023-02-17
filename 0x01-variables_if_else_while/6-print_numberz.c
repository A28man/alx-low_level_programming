#include <stdio.h>
/**
 * main - Prints all single digit of base 10
 *
 * don't use char and printf
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
