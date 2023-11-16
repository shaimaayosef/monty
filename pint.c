#include "monty.h"
/**
 * f_pint - prints the top
 * @h_stack: stack head
 * @line_num: number of line
 * Return: no return
*/
void pint(stack_t **h_stack, unsigned int line_num)
{
	if (*h_stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h_stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h_stack)->n);
}
