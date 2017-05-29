#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	double part = 1.0, x, sum = 0, partup, partdown = 1, j, m = 0;//每个项part,sum为cos
	printf("请输入cosx中x的值");
	scanf("%lf", &x);
	for (i = 0; part > 1E-6 || part<-1E-6; i++)
	{
		partup = pow(x, (double)2 * i);


		if (i == 0)
			m = 1;
		else if (i > 0)
			m = (i)* 2;
		partdown = 1;
		for (j = 1; j <= m; j++)
			
			partdown *= j;

		partdown *= pow(-1, (double)i);
		sum += partup / partdown;
		part = partup / partdown;


	}
	printf("%lf", sum);



}