#include "main.h"
#include "stdio.h"


/**
*reverse_array - reverse an array
*@a: The address of the string to reverse
*@n: the number of the string to reverse
*
*Return: return an int
*/


void reverse_array(int *a, int n)
{
	int temp;

	for (int i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
	}
	return (a);
}
