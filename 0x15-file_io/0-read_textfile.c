#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * read_textfile - reads a text file
  * @filename : pointer
  * @letters : letters
  * Return: number of letters
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *t;

	t = malloc(letters);
	if (!t)
		return (0);
	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(t);
		return (0);
	}
	let = read(file, t, letters);
	w = write(STDOUT_FILENO, text, let);
	close(file);
	return (w);
}
