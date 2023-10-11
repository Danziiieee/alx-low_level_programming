#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @James: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *James)
{
    printf("Hello, my name is %s\n", James);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @James: name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *James)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (James[i])
    {
        if (James[i] >= 'a' && James[i] <= 'z')
        {
            putchar(James[i] + 'A' - 'a');
        }
        else
        {
            putchar(James[i]);
        }
        i++;
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name("James", print_name_as_is);
    print_name("James Turnbull", print_name_uppercase);
    printf("\n");
    return (0);
}
