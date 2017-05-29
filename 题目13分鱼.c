//(f(n)-1)*4/5= f(n-1)
#include<stdio.h>
int main()
{
	float i = 0,j,n;
	int m;
	for (i = 1; i < 100000; i++)
	{
		n = 4*i;
		for (j = 1; j <= 5; j++)
		{
			n = n * 5 / 4 + 1;
			if (n - (int)n != 0)
				break;
		}
		if (n - (int)n == 0)
			break;
	}
	m = (int)n;
	printf("%d", m);

}