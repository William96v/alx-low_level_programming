#include "main.h"
#include <stdlib.h>

/**
 * custom_read_file- Custom function to read a file and print to STDOUT.
 * @custom_filename: The custom filename to be read.
 * @custom_letters: The number of custom letters to be read.
 * Return: The actual number of bytes read and printed.
 *        0 when function fails or filename is NULL.
 */
ssize_t custom_read_file(const char *custom_filename, size_t custom_letters)
{
	char *custom_buf;
	ssize_t custom_fd;
	ssize_t custom_w;
	ssize_t custom_t;

	custom_fd = open(custom_filename, O_RDONLY);
	if (custom_fd == -1)
		return (0);

	custom_buf = malloc(sizeof(char) * custom_letters);
	custom_t = read(custom_fd, custom_buf, custom_letters);
	custom_w = write(STDOUT_FILENO, custom_buf, custom_t);

	free(custom_buf);
	close(custom_fd);
	return custom_w;
}
