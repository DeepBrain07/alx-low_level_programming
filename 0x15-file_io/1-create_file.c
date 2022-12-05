#include "main.h"

/**
*create_file - creates a file
*@filename: name of the file
*@text_content: string to write to the file
*Return: 1 on success and -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR);
	if (!text_content)
		write(fd, "", 0);
	else
	{
		for (i = 0; text_content[i]; i++)
			;
		write(fd, text_content, i);
	}
	return (1);
}
