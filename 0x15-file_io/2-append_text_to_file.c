#include "main.h"

/**
 * append_text_to_file - this fn appends text at the end of a file
 * @filename: The name of the file
 * @text_content: the string to be appended
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int chidi;
	int writer;
	int length = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		for (; text_content[length];)
		length++;
	}
	chidi = open(filename, O_WRONLY | O_APPEND);
	writer = write(chidi, text_content, length);

	if (chidi == -1 || writer == -1)
	return (-1);
	close(chidi);
	return (1);
}
