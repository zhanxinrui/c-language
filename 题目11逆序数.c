#include<stdio.h>
int main()
{
	int a[50], num, b[50], b1[50], u[50], u1[50], i, n, m, num2;
	printf("��������");
	scanf("%d", &num);
	int num1 = num;
	for (i = 0; num1>0; i++)//ʮ��������
	{
		u[i] = num1 % 10;
		num1 /= 10;
		n = i;
	}
	num2 = num;
	for (i = n; num2>0, i >= 0; i--)//ʮ��������
	{
		u1[i] = num2 % 10;
		num2 /= 10;

	}
	for (i = 0; i <= n; i++)
	{
		if (u[i] != u1[i])
		{
			printf("������");
			return 0;
		}

	}
	printf("ʮ����������");
	num1 = num;

	for (i = 0; num1>0; i++)//����������
	{
		b[i] = num1 % 2;
		num1 /= 2;
		m = i;
	}
	num2 = num;
	for (i = m; num2>0, i >= 0; i--)//����������
	{
		b1[i] = num2 % 2;
		num2 /= 2;

	}
	for (i = 0; i <= m; i++)
	{
		printf("%d", b[i]);

	}printf("\n");
	for (i = 0; i <= m; i++)

		printf("%d", b1[i]);
	for (i = 0; i <= m; i++)
	{
		if (b[i] != b1[i])
		{
			printf("�����Ʒ�����");
			return 0;
		}

	}
	printf("������Ҳ������");
}