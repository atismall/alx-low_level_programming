#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*reverse_array - reverse an array
*@a: The address of the string to reverse
*@n: the number of the string to reverse
*
*Return: return an int
*/


void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
