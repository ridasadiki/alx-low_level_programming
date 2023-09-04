#include "main.h"
/**
 * append_text_to_file - Appends txt at the end of file
 * @filename: A pointer the name of the file
 * @text_content: The string to add at the end of file
 * Return: if the fnction down or filename is EMPTY - -1
 * if the file does not exist the user lacks write permissions - -1
 * Otherwise - 1
 * sign by Rida
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len, w, o = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	w = write(text_content, o, len);
	o = open(filename, O_WRONLY | O_APPEND);

	if (w == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
