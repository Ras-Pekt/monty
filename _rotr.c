#include "monty.h"
/**
 * _rotr - rotates the stack to the bottom
 * @stack: double pointer to top node in stack
 * @line_number: line number of command
 * Return: void
*/
void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *last_node = *stack;
	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = *stack;
	last_node->prev->next = NULL;
	last_node->prev = NULL;
	*stack = last_node;
}
