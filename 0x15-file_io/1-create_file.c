#include "main.h"

/**
 * create_file - creates a new file
 * @filename: the name of the file
 * @text_content: the content of the new file
 * Return: 1 in success and 0 if not
 */

int create_file(const char *filename, char *text_content)
{
	int fl;
	ssize_t x = 0, len = strlen(text_content);

	if (!filename)
	{
		return (-1);
	}
	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fl == -1)
	{
		return (-1);
	}
	if (len)
	{
		x = write(fl, text_content, len);
		if (!x)
		{
			return (-1);
		}
	}
	close(fl);
	return (x == len ? 1 : -1);
}
