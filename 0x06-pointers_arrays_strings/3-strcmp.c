#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_strcmp - compare string
*@s1: Pointer to string one to be compared
*@s2: Pointer to string two to be compared
*
*Return: return an int
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
