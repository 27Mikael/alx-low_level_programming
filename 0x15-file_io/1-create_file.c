#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * creat-file - creates a file
 * @filename: the name of the file to create
 * @text_content:the content in the file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	/*init the vars*/
	ssize_t bytes_written = 0;
	int fd;

	/*validate the inputs*/
	if (filename == NULL)
		return (-1);
	/*write content*/
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/*set file permissions*/
	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	/*close file descriptor*/
	close(fd);
	/*return value*/
	return (1);
}
