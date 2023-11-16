#include "monty.h"
/**
 * f_pall - prints the stack
 * @h_stack: stack head
 * @line_num: no used
 * Return: no return
*/
void pall(stack_t **h_stack, unsigned int line_num)
{
	stack_t *h;
	(void)line_num;

	h = *h_stack;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
