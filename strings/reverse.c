#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, len;
	char ch;
	char x[30] = "Godfrey";
	len = strlen(x);

	for (i = 0; i < len / 2; i++)
	{
		ch = x[i];
		x[i] = x[len - 1 - i];
		x[len - 1 - i] = ch;
	}
	printf("%s\n", x);
	return (0);
}
