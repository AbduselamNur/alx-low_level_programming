#include <stdio.h>
/**
 * main - function that print the length of argument
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: return zero
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
