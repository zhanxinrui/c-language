#include<stdio.h>
int main()
{
	int  sub, i;
	float score, ave;
	scanf("%d %f", &sub, &score);
	for (i = 0; i < 100; i++)
	{
		ave = (float)(i * 10 + sub*score) / (i + sub);
		if (ave >= 9.5)
			break;


	}
	printf("%d", i);




}