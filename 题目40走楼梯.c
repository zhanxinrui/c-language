#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N, A, B, i, a[100], sum = 0;
	scanf("%d %d %d", &N, &A, &B);
	for (i = 1; i <N; i++)
	{

		scanf("%d", &a[i]);
		if ((i <B||i<A) && (i>=A || i>=B))//>=A��B������һ�����ϵ�,С��A��B��������Ҫ��ȥ,����������
			sum += a[i];
	}
	printf("%d", sum);



}