#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - is the main function that copy the file
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: return 0
 */
int main(int argc, char *argv[])
{
FILE *file_from = fopen(argv[1], "r");
FILE *file_to = fopen(argv[2], "w");
char buff[1024];
size_t read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
	exit(97);
	}
	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE");
		exit(98);
	}
	if (file_to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE");
		exit(99);
	}
	while ((read = fread(buff, 1, sizeof(buff), file_from)) > 0)
	{
		fwrite(buff, 1, read, file_to);
	}
	fclose(file_from);
	fclose(file_to);
	return (0);
}
