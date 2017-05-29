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
	printf("路径长为%lf,第十次高度 %lf",path,height);
	height = 100, path = 0;
	for (i = 1; i < 100000; i++)
	{
		path += height;
		height = height / 2;
		if (height <= 1E-7)
			break;

	}
	printf("停止时路径长为%lf,高度为 %lf", path, height);
	




}