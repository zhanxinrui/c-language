#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N, A, B, i, a[100], sum = 0;
	scanf("%d %d %d", &N, &A, &B);
	for (i = 1; i <N; i++)
	{

		scanf("%d", &a[i]);
		if ((i <B||i<A) && (i>=A || i>=B))//>=A或B就是这一级向上的,小于A或B是最后层需要舍去,不再往上走
			sum += a[i];
	}
	printf("%d", sum);



}