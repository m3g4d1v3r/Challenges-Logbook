#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	x;

	while (scanf("%d %d %d %d", &a, &b, &c, &x) != EOF)
	{
		if (x <= a)
		{
			printf("%lf\n", 1.0);
		}
		else if (x > b)
		{
			printf("%lf\n", 0.0);
		}
		else
		{
			printf("%lf\n", ((double) c / (b - a)));
		}
	}
	return (0);
}
