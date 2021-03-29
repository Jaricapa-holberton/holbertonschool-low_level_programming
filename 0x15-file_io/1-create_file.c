#include "holberton.h"
/**
 * create_file - Creates a new file with a given text_content.
 * @filename: Name of the file.
 * @text_content: The content to be written to the file.
 * Return: 1 if success. -1 if non-existent filename, couldn't open or
 * write the contents to the file.
 */
int create_file(const char *filename, char *text_content)
{
	/* create a file descriptor and a buffer */
	int fd = 0;
	size_t buffersize = 0;

	/* check if exist a text */
	if (filename == NULL)
		return (-1);
	/* open the text with conditions */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	/* check if the fd get the text */
	if (fd == -1)
		return (-1);
	/* check if exists a content in the text */
	if (text_content != NULL)
	{
		/* save the chars of text in the buffer */
		while (text_content[buffersize] != '\0')
			buffersize++;
		/* check if write not fail */
		if (write(fd, text_content, buffersize) == -1)
			return (-1);
	}
	/* close the text */
	close(fd);
	return (1);
}
