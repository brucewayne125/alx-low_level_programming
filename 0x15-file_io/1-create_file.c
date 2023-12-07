#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 *@filename: The file that is being read
 *@letters: number of letters that are going to be read
 * Return: suc- is the number of bytes read and printed
 *        0 when the function fails or is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t suc;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	suc = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (suc);
}

