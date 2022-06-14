#include "main.h"
#include <stdio.h>

/**
 *print_array - prints a string in reverse
 **@a: pointer to char
 *@b: number of elements of the array to be printed
 */

void print_array(int *a, int b)
{
	int i = 0;

	for (i = 0; i < b; i++)
	{
		if (i != b - 1)
		{
		printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
