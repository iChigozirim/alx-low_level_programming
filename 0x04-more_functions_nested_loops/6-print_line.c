#include "main.h"
/**
 * print_line - output straight line
 * @n: parameter thant determines size of line
 * Return: Always 0.
 */
void print_line(int n)
{
int i;
for (i = 0; i <= n; i++)
{
if ((n == 0) || (n > 0))
putchar('\n');
else
putchar('_');
}
return;
}
