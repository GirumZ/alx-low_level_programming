#include "main.h"
/**
 * read_textfile - reads from a text file and print to the standard output
 * @filename: the file where the function reads from
 * @letters: the number of letters it should read
 *
 * Return: if success, the actual number of letters read and printed
 * if failure, 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, true_read, true_write;
	char *buff;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	true_read = read(fd, buff, letters);
	if (true_read <= 0)
	{
		free(buff);
		close(fd);
		return (0);
	}
	true_write = write(STDOUT_FILENO, buff, true_read);
	if (true_write < 0)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (true_write);
}
