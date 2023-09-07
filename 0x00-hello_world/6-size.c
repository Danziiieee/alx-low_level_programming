#include <stdio.h>
/**
*main - The entry point of the point
*Return: Always 0 (success)
*/
int main(void)
{
	printf("size of a char: %d byte(s)", sizeof(char));
	printf("size of int: %d byte(s)", sizeof(int));
	printf("size of a long int: %d byte(s)", sizeof(longint));
	printf("size of a long long int: %d byte(s)", sizeof(long long int));
	printf("size of a float: %d byte(s)", sizeof(float));
	return (0);
}
