#include "main.h"
/**
 * jack_bauer - Output ever minute of the day starting from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
int min = 0, hr = 0;
while (hr <= 23)
{
min++;
_putchar((hr / 10) + '0');
_putchar((hr % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
if (m == 59)
{
m = 0;
h++;
}
}
return;
}
