#include "monty.h"
/**
 * _pall - prints all values on the stack
 * @stack: pointer to first node in stack
 * @line_number: line number of command
 * Return: void
*/
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void)line_number;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
