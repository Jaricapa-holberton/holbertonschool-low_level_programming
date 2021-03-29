#include "holberton.h"
/**
 * read_textfile - Read a text file and prints it to the POSIX standard output.
 * @filename: File name.
 * @letters:The number of letters it should read and print.
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* create a file descriptor */
	int fd;
	/* create a counter of chars to read */
	ssize_t numchars;
	/* create a empty buffer to get the chars */
	char *buffer = NULL;
	/* check if exists something to read */
	if (filename == NULL)
	{
		return (0);
	}
	/*Read file*/
	fd = open(filename, O_RDONLY);
	/* check if the files was open */
	if (fd == -1)
		return (0);
	/*Allocate memory*/
	buffer = malloc(letters * sizeof(char));
	/* check if the text have content */
	if (buffer == NULL)
		return (0);
	/* get the num of chars to read */
	numchars = read(fd, buffer, letters);
	/* if read fail */
	if (numchars < 0)
	{
		free(buffer);
		return (0);
	}
	/* write the chars to the stdout */
	numchars = write(STDOUT_FILENO, buffer, numchars);
	if (numchars < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (numchars);
}
