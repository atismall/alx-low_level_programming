#include "main.h"

/**
*leet - a function that encodes a string into 1337
*@s: string to be encoded
*
*Return: an encoded string
*/

char *leet(char *s)
{
int x[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
int y[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

int i, j;

for (j = 0; s[j] != '\0'; j++)
{
for (i = 0; a[i] != '\0'; i++)
{
if (s[j] == x[i])
{
s[j] = y[i];
}
}
}
return (s);
}
