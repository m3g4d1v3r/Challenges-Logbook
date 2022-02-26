#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n;
	int	m;
	int	*a;
	int	*b;
	int	found_it;

	scanf("%d%d", &n, &m);
	a = malloc(sizeof(int) * n);
	b = malloc(sizeof(int) * m);
	for (int cont = 0; cont < n; cont++)
		scanf("%d", &a[cont]);
	for (int cont = 0; cont < m; cont++)
		scanf("%d", &b[cont]);
	for (int day = 0; day < m; day++)
	{
		found_it = 0;
		for (int i = 0; i < n; i++)
		{
			if (b[day] == a[i])
			{
				found_it = 1;
				a[i] = -1;
				break ;
			}
		}
		if (found_it == 0)
		{
			printf("No");
			free(a);
			free(b);
			return (0);
		}
	}
	printf("Yes");
	free(a);
	free(b);
	return (0);
}
