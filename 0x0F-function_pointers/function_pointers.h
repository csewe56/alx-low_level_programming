#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>

/* Function pointer prototype */
typedef void (*print_func_t)(char *);
typedef void (*action_func_t)(int);
typedef int (*cmp_func_t)(int);

/* Prototypes for task-specific functions */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
