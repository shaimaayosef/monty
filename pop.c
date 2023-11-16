#include "monty.h"
/**
 * f_pop - prints the top
 * @h_stack: stack head
 * @line_num: number of line
 * Return: no return
*/
void pop(stack_t **h_stack, unsigned int line_num)
{
	stack_t *h;

	if (*h_stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h_stack);
		exit(EXIT_FAILURE);
	}
	h = *h_stack;
	*h_stack = h->next;
	free(h);
}
