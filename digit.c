#include <stdio.h>

/**
 * main - This program prints digits
 * Description - This program prints digits of 10
 *
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
