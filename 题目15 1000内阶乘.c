#include<stdio.h>
#include<string.h>
#define N 2000
int main()

{
	int x, fac[N], j, i,add=0;
	//memset(fac, 0, sizeof(fac));
	for (i = 0; i < N; i++)
		fac[i] = 0;

	fac[1] = 1;
	scanf("%d", &x);
	for (i = 1; i <= x; i++)
	{


		for (j = 1; j < N; j++)
		{
			fac[j] *= i;
			fac[j] += add;
			add = 0;

			if (fac[j]>9)
			{
				
				add= (fac[j] / 10);//add是要进位的可能是10000000但因为乘个位数不是很大,
				

				fac[j] = fac[j] % 10;
				

			}


		}

	}
	for (i = N - 1; i > 0; i--)//删除前面的0
	{
		if (fac[i] != 0)
		{

			j = i;
			break;
		}
	}
	
	for (i = j; i > 0; i--)
	{
		
		

			printf("%d", fac[i]);
		
	}

}