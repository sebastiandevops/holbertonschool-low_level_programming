#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * _getline - function that emulates getline function.
 * Retrieves a line of text from the stream provided
 * and places it into @buf until a new line character is
 * reached or the number of characters read is > @size - 1.
 * This function will null-terminate the provided buffer.
 *
 * @stream: the stream
 * @buf: a buffer big enough for @size chars.
 * @size: the maximum number of chars to read (must
 * include room for a null terminator
 * return: the number of characters read from the stream.
 */
ssize_t _getline(FILE *stream, char *buf, size_t size)
{
  	if (size == 0)
		return 0;
	size_t count;
	int c = 0;

	for (count = 0; c != '\n' && count < size - 1; count++)
	{
		c = getc(stream);

		if (c == EOF)
		{
			if (count == 0)
				return -1;
			break;
		}

		buf[count] = (char) c;
	}
	buf[count] = '\0';
	return ((ssize_t) count);
}
