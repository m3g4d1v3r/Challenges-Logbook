#include <stdio.h>

int main()
{
	char in_chr;

	do
	{
		while ((in_chr = getchar()) != EOF && in_chr != '\n')
		{
			putchar(in_chr);
		}
		putchar('\n');
	} while (in_chr != EOF);
}
