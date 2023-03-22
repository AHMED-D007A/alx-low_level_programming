#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the string that will be printed
 * @f: function pointer that takes a string statment
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
