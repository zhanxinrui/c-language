#include<stdio.h>//9:43
#include<time.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*fp1;
	int i;
	
	int integers[100], integers1[100];
	fp = fopen("C:\\Users\\Administrator\\Desktop\\ղ����\\29��.txt", "w+");//�ϼ�ʱ�޸�·��,w+�ɶ�д,��ÿ������
	srand((unsigned)time (NULL));
	for (i = 0; i < 100; i++)
	{
		integers[i] = rand();
		fprintf(fp, "%10d", integers[i]);

	}
	fclose(fp);//����close����λ������



	fp = fopen("C:\\Users\\Administrator\\Desktop\\ղ����\\29��.txt", "r+");//r+�Ƕ�д,����ָ��ͷ
	for (i = 0; i < 100; i++)
	{

	
		fscanf(fp, "%10d",& integers1[i]);
		printf("%10d",integers1[i]);
	}

	fclose(fp);

}