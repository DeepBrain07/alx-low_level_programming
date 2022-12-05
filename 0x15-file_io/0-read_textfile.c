#include "main.h"

/**
*read_textfile - reads and prints a textfile to STDOUT
*@filename: name of the file
*@letters: number of letters it should read and print
*Return: the actual number of letters it could print
*returns 0 if the file cannot be opened or read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char *c;

	if (!filename)
		return (0);
	fd = open("filename", O_RDONLY);
	if (fd < 0)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);
	read(fd, c, letters);
	count = write(STDOUT_FILENO, c, letters);
	close(fd);
	free(c);
	return (count);
}
