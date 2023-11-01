#include "main.h"

/**
 * append_text_to_file - append text to the end of the file
 * @filename: the name of the file
 * @text_content: the content of the new file
 * Return: 1 in success and 0 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl;
	ssize_t x = 0, len = strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}
	fl = open(filename, O_WRONLY | O_APPEND);
	if (fl == -1)
	{
		return (-1);
	}
	if (len)
	{
		x = write(fl, text_content, len);
	}
	close(fl);
	return (x == len ? 1 : -1);
}
