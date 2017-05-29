#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int BubbleSort(int a[], int n);
int SelectSort(int a[], int n);
#define N 1000

int main()
{
	int a[N], i, b[N], swaptagB,swaptagS ;
	srand((unsigned)time(NULL));
 

	for (i = 0; i < 1000; i++)
	{

		a[i] = rand();
		b[i] = a[i];

	}

	swaptagB= BubbleSort(a, N);
	
	swaptagS=SelectSort(b, N);
	printf("ð������Ľ��Ϊ");

	for (i = 0; i < 1000; i++)
	{

		printf("%d\t",a[i]);

	}

	printf("\n");
	printf("ѡ������Ľ��Ϊ");

	for (i = 0; i < 1000; i++)
	{

		printf("%d\t", b[i]);

	}
	printf("\n");

	printf("ð�������ѡ������ �Ľ��������ֱ�Ϊ%d\t%d", swaptagB, swaptagS);





}

int BubbleSort(int a[], int n)//��һ���͵ڶ���,�ڶ����͵�����
{
	int i, j, swaptag = 0;
	int temp;
	for (i = 0; i<n - 1; i++)
	{
		
		for (j = 0; j<n - i - 1; j++)
		if (a[j] > a[j + 1])
		{
			swaptag += 1;
			temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;
			
		}
	}
	return swaptag;

}

int SelectSort(int a[], int n)//�ӵڶ�����ʼ����ѡ��Ԫ�غ͵�һ���Ƚ�
{
	int i, j, t,swaptag = 0;
	int temp;
	for (i = 0; i<n - 1; i++)
	{
		t = i;
		for (j = i + 1; j<n; j++)
		if (a[j] < a[t])	{ t = j; }
		if (t != i)
		{
			temp = a[i];
			a[i] = a[t];
			a[t] = temp;
			swaptag += 1;
		}
	}
	return swaptag;

}

