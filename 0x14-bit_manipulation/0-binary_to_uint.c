#include "main.h"
/**
 * binary_to_uint -functions that convert binary to decimal
 * @b: poniter of binary
 * Return: return convert
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int count = 0;

	if (b == NULL)
		return (0);
	while (b[count] != '\0')
	{
		if (b[count] == '0' || b[count] == '1')
			convert = (convert << 1) + (b[count] - '0');
		else
		return (0);
		count++;
	}
	return (convert);
}
