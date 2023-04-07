#include "main.h"
/**
 * flip_bits - Function that filp the bit
 * @n: place that enter the Number
 * @m: intger variable
 *
 * Return: return y
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned int y = 0;

while (x)
{
y += x & 1;
x >>= 1;
}
return (y);
}
