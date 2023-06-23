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
		{"mul", _mul},
		{"mod", _mod},
		{NULL, NULL}
	};

	file_cmd.current_line = NULL;

	while (getline(&file_cmd.current_line, &n, fd) != -1)
	{
		line = strtok(file_cmd.current_line, " \n");
		if (line == NULL)
		{
			line_number++;
			continue;
		}

		execute_opcodes(line, &stack, opcodes, line_number);

		line_number++;
	}
	free_resources(file_cmd.current_line, &stack, file_cmd.fd);
}
