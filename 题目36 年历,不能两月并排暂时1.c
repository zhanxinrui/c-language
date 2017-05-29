#include<stdio.h>
/*已知1900年1月1日是星期一，编写一个程序，输入一个不小于1900的年号，输出该年1月~12月的日历。例如，输入为2012年时，部分输出如下：*/

int main()
{
	//enum {Jan = 31,Feb =  ,};
	int data[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year = 2014, month, overdays = 0, i = 0, j = 0, advance = 1, firstyearday = 0, firstday = 0, overyears = 0;//1900年的1月1日是星期1,按照日123456的排法,1前面有1个数所以advance =1,advance1则是所求Year的第一天
	printf("请输入你想要的年历的年份:");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		data[1] = 29;


	}
	for (i = 1900; i < year; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			overyears += 366;

		}
		else overyears += 365;

	}
	firstyearday = (overyears + advance) % 7;
	for (month = 1; month <= 12; month++)//12个月
	{
		overdays = 0;//记得置Overdays= 0 因为每个月都在变
		for (i = 0; i < month - 1; i++)
		{
			overdays += data[i];


		}
		firstday = (overdays + firstyearday) % 7;//加上advance%7刚好是这个月的开头

		printf("CALENDAR %d-%d\n", year, month );
		printf("------------------------------\n");
		printf(" SUN MON TUE WED THR FRI SAT\n");
		for (j = 0; j < firstday; j++)
		{


			printf("    ");                 //firstday之前的空白
		}
		for (i = 1; i <=data[month-1]; i++)//打印具体日期
		{

			printf("%4d", i);
			if ((i + firstday) % 7 == 0)//每隔7个换行
			{
				printf("\n");
			}
		}
		printf("\n");



	}
}
