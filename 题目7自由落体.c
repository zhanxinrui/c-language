#include<stdio.h>
int main()
{
	double height = 100 ,path = 0;
	int i;
	for (i = 1; i < 11; i++)
	{
		path += height;
		height = height / 2;
		
	}
	printf("·����Ϊ%lf,��ʮ�θ߶� %lf",path,height);
	height = 100, path = 0;
	for (i = 1; i < 100000; i++)
	{
		path += height;
		height = height / 2;
		if (height <= 1E-7)
			break;

	}
	printf("ֹͣʱ·����Ϊ%lf,�߶�Ϊ %lf", path, height);
	




}