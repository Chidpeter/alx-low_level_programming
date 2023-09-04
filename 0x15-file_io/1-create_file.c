#include "main.h"


/**

 * create_file - This fn creates a file.

 * @filename: A pointer to the file to be created.

 * @text_content: A pointer to a string to write to the file.

 *

 * Return: If the fn fails -1, otherwise return 1.

 */

int create_file(const char *filename, char *text_content)
{

	int chidi;
	int writer;
	int length = 0;

	if (filename == NULL)
	{
	return (-1);
	}

	if (text_content != NULL)
	{
	for (length = 0; text_content[length])
	length++;
        }


        chidi = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	writer = write(chidi, text_content, length);
	if (chidi == -1 || writer == -1)
	{
	return (-1);
	}

	close(chidi);
	return (1);
}
