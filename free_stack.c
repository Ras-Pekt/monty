#include "monty.h"
/**
 * free_stack - frees a stack_t list
 * @stack: double pointer to stack node
 * Return: void
 */
void free_stack(stack_t *stack)
{
	stack_t *temp;

	if (stack == NULL)
		return;

	while (stack)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}

	stack = NULL;
}
