#include "main.h"
/**
 * create_file - functions that create a file
 * @filename: charactor
 * @text_content: the second charactor
 *
 * Return: return 1 and -1
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp = fopen("filename", "w");

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	if (fp == NULL)
		return (-1);
	fputs(text_content, fp);
	fclose(fp);
	return (1);
}
