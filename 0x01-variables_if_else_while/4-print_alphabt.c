#include<stdio.h>

/**
 * main - printout the alphabets in lowercase
 *
 * followed by newline, except q and e
 *
 * Return: 0 Always (success) 
 */

int main(void)
{
	char chr = 'a';

	while (chr <= 'z')

	{
		if (chr != 'e' && chr != 'q')

		{
			putchar(chr);
		}

		chr++;
	}

	putchar('\n');
	return (0);
}
