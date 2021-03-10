#include "function_pointers.h"
/**
 * print_name - Print a name.
 * @name: get a string with a name.
 * @f: get a funtion pointer.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
	{
		f(name);
	}
}
