#include "main.h"

/**
*create_file - creates a file
*@filename: name of the file
*@text_content: string to write to the file
*Return: 1 on success and -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, i, wc;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (!text_content)
		text_content = "";
	for (i = 0; text_content[i]; i++)
		;
	wc = write(fd, text_content, i);
	if (wc < 0)
		return (-1);
	close(fd);
	return (1);
}
