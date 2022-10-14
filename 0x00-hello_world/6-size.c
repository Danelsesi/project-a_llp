#include <stdio.h>
/**
 * main - Entry point
 * Descrtiption - Prints the size of various types
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int w;
	float f;

	printf("The size of an char: %lu.\n byte(s)", (unsigned long)sizeof(c));
	printf("The size of a int: %lu.\n byte(s)", (unsigned long)sizeof(i));
	printf("The size of a long int: %lu.\n byte(s)", (unsigned long)sizeof(l));
	printf("The size of a long long int: %lu.\n byte(s)",
		(unsigned long)sizeof(w));
	printf("The size of a float: %lu.\n byte(s)", (unsigned long)sizeof(f));
	return (0);
}
