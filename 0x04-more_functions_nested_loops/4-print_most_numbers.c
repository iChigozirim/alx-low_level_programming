#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - output 1-9 except 2 and 4
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int n;
for (i = 0; i <= 9; i++)
{
if ((i == 2) || (i == 4))
continue;
else
_putchar(i + '0');
}
putchar('\n');
return;
}
