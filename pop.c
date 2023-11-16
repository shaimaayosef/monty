#include "monty.h"

/**
 * pop - Removes the top element from the stack.
 * @stack: Double pointer to the top of the stack
 * @line_number: Current line number in the bytecode file
 * Description: Opcode pop removes the top element from the stack.
 * If the stack is empty, an error message is printed, and the program exits.
 */
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *h;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(bus.file);
		free(bus.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	*stack = h->next;
	free(h);
}
