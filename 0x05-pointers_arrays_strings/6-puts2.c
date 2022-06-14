#include <stdio.h>
#include <string.h>

/**
*puts2 - prints every other character
**@st: pointer to char
*/

void puts2(char *st)
{
int i = 0;

while (st[i] != '\0')
{

if (i % 2 == 0)

{
printf("%c", st[i]);
}

i++;
}
printf("\n");
}
