#include "main.h"

/**
 * swap_int - take in two variable intigers
 * and swap them
 * @a:integer to swap
 * @b: integer to swap
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
