#include "main.h"
#include <stdio.h>

/**
*puts_half - prints half of a string
**@st: passed string to be printed
*/

void puts_half(char *st)
{
	int len = 0;

	while (*(st + len) != '\0')
	{
		len++;
	}
	len = len / 2;

	while (*(st + len) != '\0')
	{
		st++;
	}
	 printf("%s", st);

	printf("\n");
}
