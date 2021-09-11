#include "main.h"
#include <stdio.h>
/**
 * times_table - Print the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void)
{
int x = 0; /* factor */
int y; /* count  */
int z; /* computed value */
while (x < 10)
{
y = 0;
while (y < 10)
{
z = x * y;
if (z > 9)
{
putchar(z / 10 + '0');
putchar(z % 10 + '0');
}
else
if (y != 0)
{
putchar(' ');
putchar(z + '0');
}
else
{
putchar(z + '0');
}
if (y != 9)
{
putchar(',');
putchar(' ');
}
y++;
}
putchar('\n');
x++;
}
}

