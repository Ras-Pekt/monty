#include "monty.h"
/**
 * _push - pushes an element to the stack
 * @stack: pointer to first node in stack
 * @line_number: int to be stored in stack
 * Return: void
*/
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_resources(file_cmd.current_line, stack, file_cmd.fd);
		exit(EXIT_FAILURE);
	}

	new_node->n = line_number;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*stack != NULL)
		(*stack)->prev = new_node;
	new_node->next = *stack;
	*stack = new_node;
}
