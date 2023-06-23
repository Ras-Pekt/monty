#include "monty.h"

input_cmd_t file_cmd;

/**
 * main - monty interpreter entry point
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file_cmd.fd = fopen(av[1], "r");
	if (file_cmd.fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}

	file_reader(file_cmd.fd);

	return (0);
}
