#include "main.h"
/**
 * _isupper - Checks for digits 1-9
 * Return: 1 if c is in uppercase if not return 0.
 * @c: Parameter that collects an argument of type int
 */
int isdigit(int c)
{
  if ((c >= 1) && (c <= 9))
    return (1);
  else
    return (0);
}
