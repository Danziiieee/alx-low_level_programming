#include "function_pointers.h"
#include <stdio.h>

/**
*print_name - print James using pointer to a function
*@James: string to print
*@f: pointer to a function
*
*Return: nothing
*/

void print_name(char *James, void (*f)(char *))
{
		if (James == NULL || f == NULL)
			return;


		f(James);
	}
