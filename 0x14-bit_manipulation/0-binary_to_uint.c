#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: value to be converted
 *
 * Return: 0 if failed
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, len;

	/*Check if the pointer is NULL*/
	if (b == NULL)
		return (0);

	/*Iterate over the string until the null terminator*/
	for (len = 0; b[len] != '\0'; len++)
	{
		/*Check if the current character is not '0' or '1'*/
		if (b[len] != '0' && b[len] != '1')
			return (0);

		/*Shift the result to the left and add the current bit*/
		result = (result << 1) | (b[len] == '1' ? 1 : 0);

	}
	return (result);
}
