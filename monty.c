#include "monty.h"
/**
 * main - monty interpreter entry point
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	FILE *fd;

	/* Check that there are 2 command-line arguments */
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(av[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}

	file_reader(fd);

	return (0);
}
