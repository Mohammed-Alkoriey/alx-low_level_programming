#include "main.h"

/**
 * read_textfile - reads and prints the content of a file
 * @filename: the name of the file
 * @letters: number of letters that need to be printed
 * Return: printed litters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char content[SIZE * 8];
	int i;
	ssize_t x;

	if (filename == NULL || !letters)
	{
		return (0);
	}
	i = open(filename, O_RDONLY);
	if (i == -1)
	{
		return (0);
	}
	x = read(i, &content[0], letters);
	x = write(STDOUT_FILENO, &content[0], x);
	close(i);
	return (x);
}
