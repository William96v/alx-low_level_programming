#include <stdio.h>
#include <stdlib.h>
#include "main.h"

ssize_t custom_read_file(const char *custom_filename, size_t custom_letters)
{
    ssize_t custom_file, custom_letters_read, custom_bytes_written;
    char *custom_buffer;

    custom_buffer = malloc(custom_letters);
    if (custom_buffer == NULL)
        return 0;

    if (custom_filename == NULL)
    {
        free(custom_buffer);
        return 0;
    }

    custom_file = open(custom_filename, O_RDONLY);

    if (custom_file == -1)
    {
        free(custom_buffer);
        return 0;
    }

    custom_letters_read = read(custom_file, custom_buffer, custom_letters);

    custom_bytes_written = write(STDOUT_FILENO, custom_buffer, custom_letters_read);

    close(custom_file);

    free(custom_buffer);

    return custom_bytes_written;
}

