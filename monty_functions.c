#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
 * execution - Executes Monty bytecode instructions
 * @stack: A double pointer to the top of the stack
 * @line_num: The current line number in the bytecode file
 * @file: poiner to monty file
 * @line: The opcode to be executed
 * Return: None
 */
void execution(stack_t **stack, unsigned int line_num, char *line, FILE *file)
{
instruction_t instructions[] = {
{"push", push},
{"pall", pall},
{"pint", pint},
{"pop", pop},
{"swap", swap},
{"add", add},
{"nop", nop},
{NULL, NULL}
};
unsigned int i = 0;
char *a;
a = strtok(line, " \n\t");

if (a && a[0] == '#')
return;
bus.arg = strtok(NULL, " \n\t");
while (instructions[i].opcode && a)
{
if (strcmp(a, instructions[i].opcode) == 0)
{
instructions[i].f(stack, line_num);
return;
}
i++;
}
if (a && instructions[i].opcode == NULL)
{
fprintf(stderr, "L%u: unknown instruction %s\n", line_num, a);
fclose(file);
free(line);
free_stack(*stack);
exit(EXIT_FAILURE);
}
return;
}
