#include <stdio.h>
#include "main.h"
void fizz_buzz(void)
{
int n;
char *a = "Fizz";
char *b = "Buzz";
char *c = "FizzBuzz";
for (n = 0; n < 100; n++)
{
if ((n % 3) == 0)
{
printf("%s ", a);
}
else if ((n % 5) == 0)
{
printf("%s ", b);
}
else if ((n % 15) == 0)
{
printf("%s ", c);
}
else
{
printf("%d ", n);
}
}
return;
}
