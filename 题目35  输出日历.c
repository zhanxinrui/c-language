#include<stdio.h>

int main()
{
	//enum {Jan = 31,Feb =  ,};
	int data[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year = 2014, month, overdays = 0, i= 0,j =0, advance = 3, firstday;//2014���1��1����������,������123456���ŷ�,1ǰ��������������advance =3,firstday������µ�һ���λ��
	printf("����������Ҫ��2014�������:");
	scanf("%d",  &month);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		data[1] = 29;


	}
	for (i = 0; i < month - 1; i++)
	{
		overdays += data[i];


	}
	firstday = (overdays + advance) % 7;

		printf("CALENDAR 2014-%d\n",month);
		printf("------------------------------\n");
		printf(" SUN MON TUE WED THR FRI SAT\n");
		for (j = 0; j < firstday; j++)
		{
			

			printf("    ");
		}
		for (i = 1; i < data[month-1]; i++)
		{
		
			printf("%4d",i);
			if ((i + firstday) % 7 == 0)
			{
				printf("\n");
			}
		}
		printf("\n");




}
