#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @stack: double pointer to top node in stack
 * @line_number: line number of command
 * Return: void
*/
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *one, *two;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free_resources(file_cmd.current_line, stack, file_cmd.fd);
		exit(EXIT_FAILURE);
	}
	one = *stack;
	two = (*stack)->next;
	one->prev = two;
	one->next = two->next;
	two->prev = NULL;
	two->next = one;
	*stack = two;
}
