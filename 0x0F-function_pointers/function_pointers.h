#include <stddef.h>

#ifndef HEADERGUARD
#define HEADERGUARD


void print_name(char *name, void (*f)(char *));
int _putchar(char ch);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int op_sub(int a, int b);

#endif
