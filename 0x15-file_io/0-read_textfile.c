#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Read a text file
 * prints it to the POSIX standard output
 * @letters: number of letters it should read and print
 * @filename: name of file
 * Return: number of bytes read or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rtxt;
	char *buffer;
	ssize_t rd, wr;

	if (filename == NULL)
		return (0);

	rtxt = open(filename, O_RDONLY);
	if (rtxt == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(rtxt);
		return (0);
	}

	rd = read(rtxt, buffer, letters);
	if (rd == -1)
	{
		close(rtxt);
		free(buffer);
		return (0);
	}
	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1 || wr != rd)
	{
		close(rtxt);
		free(buffer);
		return (0);
	}

	close(rtxt);
	free(buffer);

	return (wr);
}
