#include "monty.h"
/**
 * execute_opcodes - executes matched opcode
 * @line: string read from file
 * @stack: linked list stack
 * @opcodes: struct of opcodes and associated functions
 * @line_number: line number of command
 * Return: void
 */
void execute_opcodes(char *line, stack_t **stack, instruction_t *opcodes,
		     int line_number)
{
	int i = 0;
	char *token;

	while (opcodes[i].opcode)
	{
		if (strcmp(line, opcodes[i].opcode) == 0)
		{
			if (strcmp(line, "push") == 0)
			{
				token = strtok(NULL, " \n");
				if (token == NULL || _isdigit(token) == 1)
				{
					fprintf(stderr, "L%d: usage: push integer\n", line_number);
					free_resources(file_cmd.current_line, stack, file_cmd.fd);
					exit(EXIT_FAILURE);
				}
				opcodes[i].f(stack, atoi(token));
			}
			else
				opcodes[i].f(stack, line_number);

			return;
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, line);
	free_resources(file_cmd.current_line, stack, file_cmd.fd);
	exit(EXIT_FAILURE);
}
