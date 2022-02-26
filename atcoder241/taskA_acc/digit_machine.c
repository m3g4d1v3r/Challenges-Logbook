#include <stdlib.h>
#include <stdio.h>
#define MAX 1000

int	main(void)
{
	int		array[MAX];
	int		array_index;
	char	chr;
	char	aux;

	aux = '0';
	array_index = 0;
	while ((chr = getchar()) != '\n' && array_index < MAX)
	{
		if (chr != ' ')
		{
			array[array_index] = chr - '0';
			array_index++;
		}
	}
	for (int a = 0; a < MAX; a++)
	{
		if (array[a] == 0)
		{
			for (int times = 0; times < 4; times++)
			{
				aux = array[a];
				a = aux;
			}
			putchar(aux + '0');
			break ;
		}
	}
	return (0);
}
