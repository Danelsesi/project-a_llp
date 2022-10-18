#include <stdio.h>

/**
* main - Entry point
* Description: prints all lower case alphabets in order
* Return: Always 0 (success)
*/

int main(void)
{
	char a_bet = 'a';

	while (a_bet <= 'z')
	{
		putchar(a_bet);
		a_bet++;
	}
	putchar('\n');
	return (0);
}
