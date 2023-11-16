#include "monty.h"

/**
 * nop - No operation; does nothing.
 * @stack: Double pointer to the top of the stack
 * @line_number: Current line number in the bytecode file
 *
 * Description: Opcode nop doesn't perform any operation.
 * It's used as a placeholder or for alignment purposes.
 */
void nop(stack_t **stack, unsigned int line_number)
{
(void) line_number;
(void) stack;
}
