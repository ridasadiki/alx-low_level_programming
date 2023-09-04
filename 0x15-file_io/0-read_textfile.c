#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: nmbr letters to read
 * Return: w- actual nmbr of byt read and printed
 * or 0 when function down or filename is EMPTY
 * sign by Rida
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t w;
	ssize_t fd;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);
	return (w);
}
