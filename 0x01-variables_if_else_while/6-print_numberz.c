#include<stdio.h>

/**
 * main - printout of all digits of base 0 to 10
 * followed by newline, use of putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	
	}
	putchar('\n');
	return (0);
}

