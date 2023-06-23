#include "monty.h"
/**
 * free_resources - frees all resources and closes fd
 * @current_line: getline line buffer
 * @stack: double pointer to top of stack
 * @fd: file descriptor
 * Return: void
*/
void free_resources(char *current_line, stack_t **stack, FILE *fd)
{
	free(current_line);
	free_stack(*stack);
	fclose(fd);
}
