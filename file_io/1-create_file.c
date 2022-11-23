#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * create_file - create a file
 * @filename: a pointer to const char *
 * @text_content: a pointer to char *
 * Return: 
 */
int create_file(const char *filename, char *text_content)
{
	/** Steps for processing a file
		1. Declare a file pointer variable
		2. Open a file using fopen()
		3. Process the file using the suitable function
		4. Close the file useing fclose() function */

	int fd, wr;

	if (filename == NULL)
	{
		return (-1);
	}	

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY);
		
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC);

	wr = write (fd, text_content, strlen(text_content));
	if (wr == -1)
	{
		close (fd);
		return (1);
	}	
	close (fd);
	return (1);
}
