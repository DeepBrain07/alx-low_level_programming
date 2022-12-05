#include "main.h"

/**
*append_text_to_file - appends text at the end of a file
*@filename: name of the file
*@text_content: string to append to the end of the file
*Return: 1 on success and -12 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wc, i;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
	
