#include<stdio.h>
#define N 15 
int main()
{
	int i, j, row, a[N + 1][N + 1], k = 0;
	printf("请输入你想得到的行数：");
	scanf("%d", &row);
	for (i = 1; i <= N; i++)
	{

		a[i][1] = 1;

		a[i][i] = 1;
	}

	for (i = 3; i <= N; i++)
	{
		for (j = 2; j < i; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];

	}


	for (i = 1; i <= row; i++)
	{
		for (k = N; k >i; k--)
			printf("   ");
		for (j = 1; j <= i; j++)
			printf("%5d  ", a[i][j]);
		printf("\n");

	}



}