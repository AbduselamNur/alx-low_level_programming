#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Read the File Text
 * @filename: The Name of file of Read
 * @letters: The Number of Letter that READ
 *
 * Return: return counter
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
size_t bytes_read = 0;
FILE *file = fopen("filename", "r");
char ch;

if (filename == NULL)
return (0);
if (file == NULL)
return (0);
while ((ch = fgetc(file)) != EOF && bytes_read < letters)
{
putchar (ch);
bytes_read++;
}
fclose(file);
return (bytes_read);
}
