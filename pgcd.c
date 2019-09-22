#include <stdio.h>

int main()
{
	int a, b;
	printf(" a: "); scanf("%d", &a);
	printf(" b: "); scanf("%d", &b);

	printf("pgcd(%d,%d) = ", a, b);
	if (a == 0)
	{
		printf("%d\n", b);
	}
	else if (b == 0)
	{
		printf("%d\n", a);
	}
	else
	{
		while (a != b)
		{
			if (a > b)
			{
				a = a - b;
			}
			else
			{
				b = b - a;
			}
		}

		printf("%d\n", a);
	}

	return 0;
}
