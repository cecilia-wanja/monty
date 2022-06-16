#ifndef __MONTY_H__
#define __MONTY_H__

#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


#define DELIMATOR "\n\t\r "
void push_in(stack_t **new_node, __attribute__((unused))unsigned int ln);
void pall(stack_t **stack, unsigned int __attribute__((unused)) line_number);
extern instruction_t opcodes[];
unsigned int len(stack_t **stack);
void free_stack(stack_t *stack);
void nop(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, char *n, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
int find_opcode(stack_t **stack, char *opcode, int line_number);
void swap(stack_t **stack, unsigned int line_number);
size_t lol(stack_t *h);
void mul(stack_t **stack, unsigned int line_number);


#endif
