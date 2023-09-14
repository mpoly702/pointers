#include <stdio.h>

/**
 * main - This program prints
 * Description - This program is a kicker
 *
 * Return: 0
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		if (lower_case != 'e' && lower_case != 'q')
			putchar(lower_case);
	}
	putchar('\n');
	return (0);
}
