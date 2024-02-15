#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *append_text_to_file - appends text to a file 
 *@filename: the file to append the text to
 *@text_content: the text to append
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	/*initialize the necessary files*/
	int fd;
	size_t text_length = 0;
	/*check if filename is null*/
	if (filename == NULL)
		return (-1);
	/*check if tex_content is null*/
	if (text_content == NULL)
		return (1);
	/*open with the right flags*/
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	/*find length of text_content*/
	text_length = strlen(text_content);
	/*use write to append the text_content*/
	if (write(fd, text_content, text_length) == -1)
	{
		close(fd);
		return (-1);
	}
	/*close fd descriptor*/
	close(fd);

	/*return success*/
	return (1);
}
