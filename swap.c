#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Double pointer to the top of the stack
 * @line_number: Current line number in the bytecode file
 *
 * Description: Opcode swap swaps the top two elements of the stack.
 * If the stack contains less than two elements, an error message is printed,
 * and the program exits with EXIT_FAILURE.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *h;
	int len = 0, aux;

	h = *stack;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
