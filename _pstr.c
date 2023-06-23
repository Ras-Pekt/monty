#include "monty.h"
/**
 * _pstr - prints the string starting at the top of the stack
 * @stack: double pointer to top node in stack
 * @line_number: line number of command
 * Return: void
*/
void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void)line_number;

	if (*stack == NULL)
		printf("\n");
	else
	{
		while (temp != NULL)
		{
			if (temp->n < 1 || temp->n > 127)
			{
				printf("\n");
				free_resources(file_cmd.current_line, stack, file_cmd.fd);
				exit(EXIT_FAILURE);
			}
			printf("%c", temp->n);
			temp = temp->next;
		}
		printf("\n");
	}
}
