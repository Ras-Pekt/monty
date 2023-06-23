#include "monty.h"
/**
 * _pchar - prints the char at the top of the stack
 * @stack: double pointer to top node in stack
 * @line_number: line number of command
 * Return: void
*/
void _pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		free_resources(file_cmd.current_line, stack, file_cmd.fd);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		free_resources(file_cmd.current_line, stack, file_cmd.fd);
		exit(EXIT_FAILURE);
	}
	else
		printf("%c\n", (*stack)->n);
}
