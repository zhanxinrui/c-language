#include<stdio.h>
int main()
{
	int a[50], num, b[50], b1[50], u[50], u1[50], i, n, m, num2;
	printf("输入数字");
	scanf("%d", &num);
	int num1 = num;
	for (i = 0; num1>0; i++)//十进制正序
	{
		u[i] = num1 % 10;
		num1 /= 10;
		n = i;
	}
	num2 = num;
	for (i = n; num2>0, i >= 0; i--)//十进制逆序
	{
		u1[i] = num2 % 10;
		num2 /= 10;

	}
	for (i = 0; i <= n; i++)
	{
		if (u[i] != u1[i])
		{
			printf("非逆序");
			return 0;
		}

	}
	printf("十进制是逆序");
	num1 = num;

	for (i = 0; num1>0; i++)//二进制正序
	{
		b[i] = num1 % 2;
		num1 /= 2;
		m = i;
	}
	num2 = num;
	for (i = m; num2>0, i >= 0; i--)//二进制逆序
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
			printf("二进制非逆序");
			return 0;
		}

	}
	printf("二进制也是逆序");
}