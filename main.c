#include "monty.h"
/**
 * main - Monty bytecode interpreter
 * @argc: The number of command line arguments
 * @argv: Array of command line arguments
 * Return: 0 on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
FILE *file;
char *line = NULL;
size_t len = 0;
ssize_t read;
unsigned int line_num = 0;
stack_t *stack = NULL;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
file = fopen(argv[1], "r");
if (file == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while ((read = getline(&line, &len, file)) != -1)
{
execution(&stack, line_num, line, file);
line_num++;
}
if (line)
free(line);
fclose(file);
return (0);
}
