#include<stdio.h>
int main()
{
	int prime,isprime = 1,i=0;
	scanf("%d", &prime);
	if (prime == 2)
	{
		printf("%d������",prime);
		return 0;
	}
	for (i = 2; i < prime / 2; i++)
	{
		if (prime%i == 0)
		{

			isprime = -1;
			break;
		}
	}
	if (isprime != -1)
	{
		printf("%d������",prime);

	}
	else
	{
		printf("%d��������", prime);
	}



}