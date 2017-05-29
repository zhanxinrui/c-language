#include<stdio.h>
#define N 3
#define M 1000
int main()
{
	int i, a[N], a1[N], b[N], b1[N], c[M] = { 0 }, j, temp1, temp2,max = 1;//a,b分别代表两个系数,a1b1分别代表两个次数 
	printf("分别输入每个项的系数和次数");
	for (i = 0; i < N; i++)

		scanf("%d %d", &a[i], &a1[i]);



	printf("分别输入另一个多项式每个项的系数和次数");

	for (i = 0; i < N; i++)

		scanf("%d %d", &b[i], &b1[i]);
	
	for (i = 0; i < N; i++)//两数组都先分配
	{
		for (j = 0; j < N; j++)
		{

			
			
			{
				temp1 = a1[i];
				temp2 = b1[i];

				c[temp1] = a[i];
				
				c[temp2] = b[i];
				if (a1[i] > b1[i])
				{
					if (a1[i] > max)
						max = a1[i];
				}
				if (a1[i] <= b1[i])
				{
					if (b1[i] > max)
						max = b1[i];
				}
			}
		

		}



	}
	for (i = 0; i < N; i++)//相等的合并
	{


		for (j = 0; j < N; j++)
		{

			if (a1[i] == b1[j])
			{

				temp1 = a1[i];
				c[temp1] = a[i] + b[i];
			}
			if (a1[i] > b1[i])
			{
				if (a1[i] > max)
					max = a1[i];
			}
			if (a1[i] <= b1[i])
			{
				if (b1[i] > max)
					max = b1[i];
			}
		}
	}
	for (i = 0; i < M; i++)
	{
		if (c[i] != 0)
		{
			 if (c[i] == 1)
				 printf("x^%d" , i);


				 else if(c[i] != 1)
			printf("%dx^%d", c[i], i);
			
			if (i < max)
				printf("+");
		}
	}
}