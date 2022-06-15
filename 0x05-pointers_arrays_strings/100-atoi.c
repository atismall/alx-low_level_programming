#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* _atoi - converts a string to an integer
* @s: parameter name
*
* Return: value of integer
*/

int _atoi(char *s)
{
	int i, a, b, len, c, tmp;

	i = 0;
	a = 0;
	b = 0;
	len = 0;
	c = 0;
	tmp = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && c == 0)
	{
		if (s[i] == '-')
			++a;

		if (s[i] >= '0' && s[i] <= '9')
		{
			tmp = s[i] - '0';
			if (a % 2)
				tmp = -tmp;
			b = b * 10 + tmp;
			c = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			c = 0;
	}
	i++;
	}

if (c == 0)
	return (0);

	return (b);
}
