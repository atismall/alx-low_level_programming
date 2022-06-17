#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_strncpy -  copies a string
*@dest: A pointer to a char that will be modified
*@src: A pointer to a char that will be modified
*@n: value of the character lenght
*
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
