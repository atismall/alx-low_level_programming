#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*print_rev - prints a string in reverse
**@st: pointer to char
*/

void print_rev(char *st)
{
int i = 0;

while (st[i])
i++;

while (i--)
{
putchar(st[i]);
}
putchar('\n');
}
