#include <stdio.h>

/**
* main - Entry point
* Description: prints all lowercase letters from z-a
* Return: Always zero (success)
*/

int main(void)
{
	char a_bet = 'z';

	while (a_bet >= 'a')
	{
		putchar(a_bet);
		a_bet--;
	}
	putchar('\n');

	return (0);
}
