#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX strdout
 * @letters: the number of letters it should read and print
 * @filename: pointer to the file
 * Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t chars;
	int fd;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (!buf)
		return (0);

	chars = read(fd, buf, letters);
	if (chars < 0)
		return (0);
	chars = write(STDOUT_FILENO, buf, chars);
	if (chars < 0)
		return (0);
	free(buf);
	close(fd);
	return (chars);
}
