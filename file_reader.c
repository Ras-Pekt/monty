#include "monty.h"
/**
 * file_reader - opens and reads the file provided
 * @fd: file descriptor
 * Return: void
 */
void file_reader(FILE *fd)
{
	char *line = NULL;
	size_t n = 0;
	int line_number = 1;
	stack_t *stack = NULL;
	instruction_t opcodes[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{NULL, NULL}
	};

	while (getline(&line, &n, fd) != -1)
	{
		line = strtok(line, " \n");
		if (line == NULL)
		{
			free(line);
			line_number++;
			continue;
		}

		execute_opcodes(line, &stack, opcodes, line_number);

		line_number++;
	}
	fclose(fd);
}
