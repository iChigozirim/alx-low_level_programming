#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - output 1-9 except 2 and 4
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
if (n != 2 && n != 4)
putchar(n +'0');
putchar('\n');
return;
}
