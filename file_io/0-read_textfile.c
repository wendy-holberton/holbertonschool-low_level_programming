#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h> 
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read a text file
 * @filename: a pointer to const char *
 * @letters: the number of letters
 * Return: the acutal number of letters; 
           or 0 if file cannot be opened / read;
	   or 0 if filename is NULL;
	   or 0 if write fails / not write expected amount of bytes  
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	const char *buff;
	int fd, rd, wr;

	if (filename == NULL)
 	{
 		return (0);
	}

	buff = malloc(sizeof(*buff) * letters);
	if (buff == NULL)
	{
		return (NULL);
	}
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	
	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (wr);
}

	filename = fopen("readme.txt", "r");
	if (filename == NULL)
	{
		return (0);
	}
	while ((letter = fgetc(filename)) != EOF)
	{
		putchar(letter);
	}
	
	fclose(filename);
	return (0);
}
