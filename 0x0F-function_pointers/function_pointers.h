#ifndef HEADERGUARD
#define HEADERGUARD

void print_name(char *name, void (*f)(char *));
int _putchar(char ch);
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
