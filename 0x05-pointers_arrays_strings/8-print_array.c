#include "main.h"
/**
 * print_array - a function that prints n elementsof an array of integers
 * @a: array to be printed
 * @n: number of elements in array
 *
 * Return: nothing on success
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);

		if (count != (n - 1))
			printf(", ");
		count++;
	}
	putchar('\n');
}
