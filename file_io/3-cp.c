#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#define buffer size 1024

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd, fd2, rd;		
	char *buff;
	
    if (ac != 3)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }
	if (av[2] == NULL)
	{
		return (-1);
	}
	if (av[1] == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC);

	buff = malloc(sizeof(*buff) * 4);
	rd = read(fd, buff, 4);
	while (rd != 0)
	{
		printf("%s\n", buff);
		write(fd2, buff, 4);
		rd = read(fd, buff, 4);
	}
	close(fd);
	close(fd2);
	
	

    return (0);
}


