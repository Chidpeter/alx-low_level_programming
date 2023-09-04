#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - this fn reads a txt file and prints to stdout
 * @filename: this is the name of the file to be read
 * @letters: this is the number of letters it could read
 *
 * Return: 0 if NULL, or write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t chidi;
	ssize_t writer;
	ssize_t t;
	char *buffer;

	chidi = open(filename, "O_RDONLY");
	if (chidi == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	t = read(chidi, buffer, letters);
	writer = write(STDOUT_FILENO, buffer, t);
	free(buffer);
	close(chidi);
	return (writer);
}
