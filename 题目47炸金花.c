#include<stdio.h>
int leopard(int a[]);
int flush(int a[]);
int couple(int a[]);
int sing(int a[]);
void sort(int a[]);
int main()
{
	int a[3], num = 0, i;
	for (i = 0; i < 3; i++)
		scanf("%d", &a[i]);
	/*for (i = 0; i < 3; i++)
	{
	printf("%d ", a[i]);
	}
	*/
	sort(a);
	for (i = 0; i < 3; i++)
	{
		printf("%d ", a[i]);
	}


	if (a[0] == a[1] && a[1] == a[2])
		num = leopard(a);
	else if ((a[0] + 2 == a[1] + 1) && (a[2] == a[1] + 1))
		num = flush(a);
	else if (a[0] == a[1] || a[1] == a[2] || a[0] == a[2])
		num = couple(a);
	else
		num = sing(a);
	printf("%d", num);
}
int leopard(int a[])//�������
{
	int num = a[0];
	num = 9 - num + 1;
	return num;
}


int flush(int a[])//˳�����
{
	int num = a[0];
	num = 7 - num;
	num += 9;
	return num;
}
int couple(int a[])//�������
{
	int repeat, single, num;
	if (a[0] == a[1]){
		repeat = a[0];
		single = a[2];
	}
	else if (a[0] == a[2]){
		repeat = a[0];
		single = a[1];
	}
	else
	{
		repeat = a[1];
		single = a[0];
	}
	if (single > repeat)
		num = (9 - repeat) * 8 + 9 - single;
	else
		num = (9 - repeat) * 8 + 9 - single - 1;
	num += 16;//ǰ����
	return num;
}
int sing(int a[])//�������
{
	int num = 0, reverse, i = 9, j = 8, k = 9;
	reverse = a[0] + a[1] * 10 + a[2] * 100;
	for (i = 9; (i > 0) && (i * 100 + j * 10 + k) > reverse; i--)
	{
		for (j = 9; (j > 0) && (i * 100 + j * 10 + k) > reverse; j--)
		{
			for (k = 9; (k > 0) && (i * 100 + j * 10 + k) > reverse; k--)
			{
				i >= j&&j >= k;
				num += 1;
			}
		}
	}//�ҳ����������ŵ��Ҵ��������a[],��Ȼ����
	for (i = a[2]; i > 0; i--)
	{
		for (j = a[1]; j > 0 > reverse; j--)
		{
			for (k = a[0]; k > 0 > reverse; k--)
			{

				if (i >= j&&j >= k && (((k + 2 == j + 1) && (i == j + 1)) || i == j || i == k || j == k))
					num += 1;//С��a[]���������˳�Ӷ��ӱ���Ҳ����
			}
		}
	}
	return num;
}
void sort(int a[])//ð������
{
	int temp, i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3 - i - 1; j++)
		{
			if (a[j]>a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}


}