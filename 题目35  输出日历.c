#include<stdio.h>

int main()
{
	//enum {Jan = 31,Feb =  ,};
	int data[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year = 2014, month, overdays = 0, i= 0,j =0, advance = 3, firstday;//2014年的1月1日是星期三,按照日123456的排法,1前面有三个数所以advance =3,firstday是这个月第一天的位置
	printf("请输入你想要的2014年的月历:");
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
