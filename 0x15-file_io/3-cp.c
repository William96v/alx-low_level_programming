#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
    int source_file, destination_file;
    int num_read = 1024, num_written = 0;
    char buffer[1024];

    // Check if the correct number of arguments are provided
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: my_cp source_file destination_file\n");
        exit(1);
    }

    // Open source file for reading
    source_file = open(argv[1], O_RDONLY);

    if (source_file == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(2);
    }

    // Open or create destination file for writing
    destination_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

    if (destination_file == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(source_file);
        exit(3);
    }

    // Copy content from source to destination
    while (num_read == 1024)
    {
        num_read = read(source_file, buffer, 1024);

        if (num_read == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
            close(source_file);
            close(destination_file);
            exit(4);
        }

        num_written = write(destination_file, buffer, num_read);

        if (num_written < num_read)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(source_file);
            close(destination_file);
            exit(5);
        }
    }

    // Close files
    if (close(source_file) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close source file\n");
        exit(6);
    }

    if (close(destination_file) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close destination file\n");
        exit(7);
    }

    return 0;
}

