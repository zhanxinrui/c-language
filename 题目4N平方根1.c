#include<stdio.h>
#include<math.h>

int main()
{
	double N, LG = 1, NG;
	scanf("%lf", &N);


	NG = 0.5*(LG + N / LG);
	//printf("%lf", NG);

	while (((NG - LG) >= 0.005) || ((NG - LG) <= (-0.005)))
	{
		LG = NG;
		//printf("%lf", NG);
		NG = 0.5*(LG + N / LG);

	}
	printf("%lf", NG);

}
