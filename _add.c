#include "monty.h"
/**
 * _add - adds the top two elements of the stack
 * @stack: double pointer to top node in stack
 * @line_number: line number of command
 * Return: void
*/
void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int n;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_resources(file_cmd.current_line, stack, file_cmd.fd);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	n = (*stack)->n + temp->n;
	temp->n = n;
	temp->prev = NULL;
	free(*stack);
	*stack = temp;
}
