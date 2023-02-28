#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * followed by new line
 *
 * @a: array to be printed
 *
 * @n: number of elements in array
 *
 * Return: nothing on success
 */
void ptint_array(int *a, int *n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1;)
			printf(", ");
	}

	printf("\n");

}
