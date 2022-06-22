#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - prints sum of two diagonals of a matrix
 * @a: pointer to an integer
 * @size: integer size
 *
 * Return: Just does my work
 */

void print_diagsums(int *a, int size)
{
	int i, x1 = 0, x2 = 0;

	for (i = 0; i < size; i++)
	{
		x1 += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		x2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", x1, x2);
}
