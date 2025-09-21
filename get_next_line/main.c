#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char    *get_next_line(int fd);

int main(void)
{
    int fd1 = open("file1.txt", O_RDONLY);
    int fd2 = open("file2.txt", O_RDONLY);
    int fd3 = open("file3.txt", O_RDONLY);

    char *line1;
    char *line2;
    char *line3;

    if (fd1 < 0 || fd2 < 0 || fd3 < 0)
    {
        perror("open");
        return (1);
    }

    // Read first line of each file
    line1 = get_next_line(fd1);
    line2 = get_next_line(fd2);
    line3 = get_next_line(fd3);
    printf("file1: %s", line1);
    printf("file2: %s", line2);
    printf("file3: %s", line3);
    free(line1);
    free(line2);
    free(line3);

    // Read second line of file1, first line of file2, etc.
    line1 = get_next_line(fd1);
    line2 = get_next_line(fd2);
    line3 = get_next_line(fd3);
    printf("file1: %s", line1);
    printf("file2: %s", line2);
    printf("file3: %s", line3);
    free(line1);
    free(line2);
    free(line3);

    // Continue reading until all files are empty
    while ((line1 = get_next_line(fd1)) != NULL)
    {
        printf("file1: %s", line1);
        free(line1);
    }
    while ((line2 = get_next_line(fd2)) != NULL)
    {
        printf("file2: %s", line2);
        free(line2);
    }
    while ((line3 = get_next_line(fd3)) != NULL)
    {
        printf("file3: %s", line3);
        free(line3);
    }

    close(fd1);
    close(fd2);
    close(fd3);
    return (0);
}