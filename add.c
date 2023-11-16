#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @h_stack: stack head
 * @line_num: number of line
 * Return: no return
*/
void add(stack_t **h_stack, unsigned int line_num)
{
	stack_t *h;
	int len = 0, aux;

	h = *h_stack;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h_stack);
		exit(EXIT_FAILURE);
	}
	h = *h_stack;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*h_stack = h->next;
	free(h);
}
