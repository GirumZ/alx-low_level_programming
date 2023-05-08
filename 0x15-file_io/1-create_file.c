#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: the content to be writen in the new file
 *
 * Return: 1 for success and -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, true_write = 0;

	len = strlen(text_content);
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
		true_write = write(fd, text_content, len);
	close(fd);
	if (true_write = -1)
		return (-1);
	return (1);
}
