#include<stdio.h>
#define N 1000
void BubbleSort(int a[], int n);

int main()
{
	int a[N],prime[N], isprime = 1, i = 0,j = 0,quan= 0,k,n ;
	scanf("%d",&n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (k = 0; k < n; k++)//循环录入素数从a->prime
	{
		isprime = 1;
		if (a[k] != 2)

		{

			for (i = 2; i*i <= a[k]; i++)//非二判断素数
			{
				if (a[k] % i == 0)
				{

					isprime = -1;
					break;
				}
			}
		}
		if (isprime != -1)//满足要求录入Prime
		{
			prime[j++] = a[k];
			

		}
		
	}
	quan = j - 1;//记录素数的数量
	for (i = 0; i <= quan; i++)
		printf("素数原始为%d\t", prime[i]);
	printf("\n");
	BubbleSort(prime, quan);
	for (i = 0; i <= quan; i++)
		printf("排序后的顺序素数为%d\t", prime[i]);
		
	


}
void BubbleSort(int a[], int n)//第一个和第二个,第二个和第三个
{
	int i, j;
	int temp;
	for (i = 0; i<n ; i++)
	{
		
		for (j = 0; j<n - i ; j++)
		if (a[j] > a[j + 1])
		{
			
			temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;
			
		}
	}
	

}