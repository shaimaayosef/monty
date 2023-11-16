#include "monty.h"

/**
 * pall - Prints all values on the stack.
 * @stack: Double pointer to the top of the stack
 * @line_number: Current line number in the bytecode file
 * Description: Opcode pall prints all stack values from top to bottom.
 * If the stack is empty, no output is generated.
 */

void pall(stack_t **stack, unsigned int line_number)
{
stack_t *h;
	(void)line_number;

	h = *stack;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

