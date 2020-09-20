#include <stdio.h>
int main()
{
	int m, n, i, j;
	int c[11];
	int x;
	scanf_s("%d %d", &m, &n);
	for (i = 0; i <= 9; i++) c[i] = 0;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
		{
			scanf_s("%d", &x);
			if (x == 0) c[0]++;
			if (x == 1) c[1]++;
			if (x == 2) c[2]++;
			if (x == 3) c[3]++;
			if (x == 4) c[4]++;
			if (x == 5) c[5]++;
			if (x == 6) c[6]++;
			if (x == 7) c[7]++;
			if (x == 8) c[8]++;
			if (x == 9) c[9]++;
		}
	}
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= c[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}