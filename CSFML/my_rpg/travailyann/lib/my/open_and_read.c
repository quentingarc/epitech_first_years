/*
** EPITECH PROJECT, 2019
** day08
** File description:
** 09/10/19
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

char *open_and_read(char *path)
{
    int fd = open(path, O_RDONLY);
    struct stat statbuffer;
    char *buffer = NULL;

    if (fd == -1) {
        return (NULL);
    }
    lstat(path, &statbuffer);
    buffer = malloc(sizeof*(buffer) * (statbuffer.st_size + 1));
    if (buffer == NULL) {
        return (NULL);
    }
    read(fd, buffer, statbuffer.st_size);
    buffer[statbuffer.st_size] = '\0';
    close(fd);
    return (buffer);
}