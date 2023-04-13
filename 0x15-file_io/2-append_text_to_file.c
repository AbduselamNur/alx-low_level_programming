#include "main.h"
/**
 * append_text_to_file - function that append two string
 * @filename: file name that creat first
 * @text_content: text that append in new line
 *
 * Return: return 1 for success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fpointer = fopen(filename, "a");
		if (filename == NULL)
			return (-1);
		if (fpointer == NULL)
			return (-1);
	if (text_content == NULL)
		return (1);
	fputs(text_content, fpointer);
	fputs("\n", fpointer);
		fclose(fpointer);
		return (1);

}
