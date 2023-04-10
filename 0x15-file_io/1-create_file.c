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
	int fd;
	char *buff;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	buff = malloc(sizeof(char) * (strlen(text_content) - 1));
	if (buff == NULL)
	{
		close(fd);
		return (-1);
	}
	if (text_content != NULL)
	{
		write(fd, text_content, (strlen(text_content) - 1));
		if (write(fd, text_content, (strlen(text_content) - 1)) <= 0)
			return (-1);
	}
	return (1);
}
