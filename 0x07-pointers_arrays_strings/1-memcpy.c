#include "main.h"

/**
 * _memcpy - This function copies character of limit n integer from src to dest
 * @dest: destination of the copied character
 * @src: destination of the src
 * @n: the unsigned integer
 *
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
