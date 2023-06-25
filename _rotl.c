#include "monty.h"
/**
 * _rotl - rotates the stack to the top
 * @stack: double pointer to top node in stack
 * @line_number: line number of command
 * Return: void
*/
void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_head = *stack, *last_node = *stack;
	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	*stack = (*stack)->next;
	(*stack)->prev = NULL;

	while (last_node->next != NULL)
		last_node = last_node->next;

	temp_head->next = NULL;
	temp_head->prev = last_node;
	last_node->next = temp_head;
}
