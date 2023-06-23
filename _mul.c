#include "monty.h"
/**
 * _mul - multiplies the second top element by the top element of the stack
 * @stack: double pointer to top node in stack
 * @line_number: line number of command
 * Return: void
*/
void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int n;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		free_resources(file_cmd.current_line, stack, file_cmd.fd);
		/*free_stack(*stack);*/
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	n = temp->n * (*stack)->n;
	temp->n = n;
	temp->prev = NULL;
	free(*stack);
	*stack = temp;
}
