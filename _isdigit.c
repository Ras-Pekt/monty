#include "monty.h"
/**
 * _isdigit - checks if a string contains integers
 * @str: input string
 * Return: 0 if true. 1 otherwise
 */
int _isdigit(char *str)
{
	while (*str)
	{
		if (str[0] == '-')
			str++;

		if (isdigit(*str++) == 0)
			return (1);
	}
	return (0);
}
