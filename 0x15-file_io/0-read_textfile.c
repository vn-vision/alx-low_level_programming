#include "main.h"

/**
* read_textfile - reads text file and prints
*	prints it to POSIX STDOUT_FILENO
* @letters: nubmer of letters to read n write
* @filename: the file to write read from
* Return: number of letters read and printed
*	0 if file cannot be opened
*		filename is NULL
*		write fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count, read_val;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0700);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	read_val = read(fd, buffer, letters);
	if (read_val == -1)
	{
		free(buffer);
		return (0);
	}
	count = write(STDOUT_FILENO, buffer, read_val);
	if (count == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	return (count);
}
