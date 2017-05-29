#include<stdio.h>
#include<stdlib.h>

#define N 300000
int a[N];//如果數組是全局變量的話,最大值能大點
int main()
{
	int  i, j = 0, k, num, sub = -100, prime1, prime2;

	for (i = 2; i< N; i++)
	{
		if (i == 2 || i == 3)
			a[j++] = i;
		for (k = 2; k*k < i; k++)
		{
			if (i%k == 0)
				break;
		}
		if ((k - 1)*(k - 1)<i && (k*k>i) && i != 3 && i != 2)
			a[j++] = i;

	}
	/*
	for (i = 0; i< j; i++)
	{
		printf("%d\t", a[i]);
	}
	*/

	printf("请输入一个偶数");
	scanf("%d", &num);
	for (i = 0; a[i]<num; i++)
	{
		for (j = 0; a[j]<num; j++)
		{
			if (a[i] + a[j] == num)
			{
				if (sub == -100)//先設個不可能的初值，则第一次先让sub等于素数的差值
				{
					sub = abs(a[i] - a[j]);
					prime1 = a[i];
					prime2 = a[j];
				}
			if(abs(a[i] - a[j])<sub)
				{
				sub = abs(a[i] - a[j]);
				prime2 = a[i];
					prime1 = a[j];
				}
			}
		}

	}
	printf("%d,%d", prime2, prime1);
}
