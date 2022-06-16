#include "monty.h"
/**
*pall - prints stack elements
*@line_number: stays unused
*@stack: pointer to the head of the doubly linked list
*Return: Nothing
*/

void pall(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
stack_t *current = *stack;

if (stack == NULL || *stack == NULL)
return;

while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}
}
