#include "main.h"
/**
 * swap_int - swap variable value
 * @a: pointera
 * @b: pointerb
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m = *a;

	*a = *b;
	*b = m;
}
