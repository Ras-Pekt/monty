#include "monty.h"
/**
 * _mod - computes the modulus of the second top element by the top element of the stack
 * @stack: double pointer to top node in stack
 * @line_number: line number of command
 * Return: void
*/
void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int n;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = temp->n % (*stack)->n;
	temp->n = n;
	temp->prev = NULL;
	free(*stack);
	*stack = temp;
}
