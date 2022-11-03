#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file and text_content
 * @text_content: content text of file
 * Return:1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int da;
	size_t l;
	ssize_t wr;

	if (!filename)
	{
		return (-1);
	}

	da = open(filename, O_RDWR | O_APPEND, 0600);
	if (da == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		close(da);
		return (1);
	}

	for (l = 0; text_content[l] != '\0'; l++)
	{
		;
	}

	wr = write(da, text_content, l);
	if (wr == -1)
	{
		return (-1);
	}
	close(da);
	return (1);
}
