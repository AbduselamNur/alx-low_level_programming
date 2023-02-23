#include "main.h"
#include <unistd.h>

/**
 * _putchar - print putchar
 * @c: The character to print in main
 *
 * Return: One success
 * On erorr, -1 is returned
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
