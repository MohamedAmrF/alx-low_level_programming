#include "main.h"

/**
* read_textfile - reads text from file and prints it.
* @filename: name of file
* @letters: number of bytes to read
*
* Return: number of bytes read and printed.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes;
	ssize_t b;
	char buff[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	filedes = open(filename, O_RDONLY);
	if (filedes == -1)
		return (0);
	b = read(filedes, &buff[0], letters);
	b = write(STDOUT_FILENO, &buff[0], b);
	close(filedes);
	return (b);
}
