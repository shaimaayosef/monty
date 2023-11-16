#include "monty.h"

/**
 * pint - Prints the value at the top of the stack.
 * @stack: Double pointer to the top of the stack
 * @line_num: Current line number in the bytecode file
 *
 * Description: Opcode pint prints the top stack value.
 * If the stack is empty, an error message is printed, and the program exits.
 */
void pint(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		fclose(bus.file);
		free(bus.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	};
	printf("%d\n", (*stack)->n);
}
