#include <stdio.h>
/**
 * main - Output alphabet
 * print_alphabet - Outputs alphabet to main
 * Return: 0
 */
void print_alphabet(void);
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet()
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
}
