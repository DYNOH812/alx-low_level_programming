#include <stdio.h>
/**
 * main - A program that prints the size
 * Return:0 (success)
 */
int main(void)
{


	printf("Size of a char: %i byte(s)", (unsigned long)sizeof(char));

	printf("Size of an int: %i byte(s)", (unsigned long)sizeof(int));

	printf("Size of a long int: %i byte(s)", (unsigned long)sizeof(long int));

	printf("Size of a long long int: %i byte(s)", (unsigned long)sizeof(long long int));

	printf("Size of a float: %i byte(s)", (unsigned long)sizeof(float));
	printf("\n");

	return (0);
}
