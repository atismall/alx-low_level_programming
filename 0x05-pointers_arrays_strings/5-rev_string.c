#include "main.h"
#include <string.h>

/**
 *rev_string - reverses a string
 **@st: pointer to char
 */

void rev_string(char *st)
{
	int i, l = 0;

	char b[600];

	strcpy(b, st);

	while (*(st + l) != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		*(st + i) = *(b + l - (i + 1));
	}
}
