#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * creat_file - creates a file
  * @filename : name of file
  * @text_content : content
  * Return: 1 on success , -1 on fail
  */

int create_file(const char *filename, char *text_content)
{
	int i, file;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	for (i = 0; text_content[i] != '\0'; i++)
		;
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);
	write(file, text_content, i);

	return (1);
}
