#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads the file
 * @filename: pointer to the file to read
 * @letters: the number of letters it has read an printed
 * 
 * Return: @letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	/*intitialize necessary vars*/
	ssize_t o,r,w;
	char *buffer;

	/*check if @filename is empty*/
	if (filename == NULL)
		return (0);
	/*allocate memory to a buffer*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/*open, read and write the file to stdio*/
	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buffer);
		return(0);
	}

	r  = read(o, &buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(o);
		return(0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
	{
		free(buffer);
		close(o);
		return(0);
	}

	/*free buffer and close the file*/
	free(buffer);
	close(o);
	return (w);
}
