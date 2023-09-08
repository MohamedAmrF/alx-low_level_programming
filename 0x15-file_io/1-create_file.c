#include "main.h"
#include <string.h>

/**
* create_file - creates a new file
* @filename: file name
* @text_content: content of the new file
*
* Return: 1 on success, -1 other wise.
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t letters = 0, len = strlen(text_content);

	if(!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		letters = write(fd, text_content, len);
	close(fd);
	return (letters == len ? 1 : -1);
}
