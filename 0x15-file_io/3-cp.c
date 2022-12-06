#include "main.h"

/**
*error_out - prints out an error message to the STDERR
*@file_from: file_from
*@file_to: file_to
*@argv: arguement vector
*Return: nothing
*/
void error_out(int file_from, int file_to, char *argv[])
{
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s", argv[1]);
		exit(98);
	}
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't write to file %s", argv[2]);
		exit(99);
	}
}

/**
*main: copies the content of a file to another file
*@argc: arguement count
*@argv: arguement vector
*Return: '0' on success
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, count;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_out(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buf, 1024);
		if (nchars == -1)
			error_out(-1, 0, argv);
		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
			error_out(0, -1, argv);
	}
	count = close(file_from);
	if (count < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	count = close(file_to);
	if (count < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
