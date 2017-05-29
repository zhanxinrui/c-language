#include<stdio.h>//9:43
#include<time.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*fp1;
	int i;
	
	int integers[100], integers1[100];
	fp = fopen("C:\\Users\\Administrator\\Desktop\\詹新锐\\29题.txt", "w+");//上及时修改路径,w+可读写,但每次清零
	srand((unsigned)time (NULL));
	for (i = 0; i < 100; i++)
	{
		integers[i] = rand();
		fprintf(fp, "%10d", integers[i]);

	}
	fclose(fp);//必须close否则定位就乱了



	fp = fopen("C:\\Users\\Administrator\\Desktop\\詹新锐\\29题.txt", "r+");//r+是读写,但是指向开头
	for (i = 0; i < 100; i++)
	{

	
		fscanf(fp, "%10d",& integers1[i]);
		printf("%10d",integers1[i]);
	}

	fclose(fp);

}