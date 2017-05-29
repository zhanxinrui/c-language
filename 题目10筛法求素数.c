#include<stdio.h>
#include<stdlib.h>
int main()

{

	int N ,i,k = 0;
	printf("请输入你想查找的素数最大范围:");
	scanf("%d", &N);
	int *a = (int*)malloc(sizeof (int)*N);

	for (i = 0; i <= N; i++)
	{
		a[i] =1;
	}
	
	for (i = 2; i < N; i++)
	{
		if (a[i] == 1)
		{

			a[i] = 1;
			k = i+i;
		}
		while (k <= N)
		{
			a[k] = 0;
			k += i;
		}

	}
	for (i = 2; i < N; i++)
	{
		if (a[i] == 1)
			printf("%d\t",i);
	}

}