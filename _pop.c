#include "monty.h"
/**
 * _pop - removes the value at the top of the stack
 * @stack: double point to top node of stack
 * @line_number: line number of command
 * Return: void
*/
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = temp->next;
	if (temp != NULL)
	        temp->prev = NULL;
	free(*stack);
	*stack = temp;
}
