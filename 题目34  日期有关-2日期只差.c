#include<stdio.h>
#include<math.h>
void swap(int*p1, int*p2);
int main()
{
	//enum {Jan = 31,Feb =  ,};
	int data[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int data1[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year, month, day, overdays = 0, i;
	int year1, month1, day1, overdays1 = 0, j;
	int sum= 0 ;//总共的天数差
	printf("请输入两个年月日,(格式年.月.日)");
	scanf("%d.%d.%d", &year, &month, &day);
	scanf("%d.%d.%d", &year1, &month1, &day1);

	if (year > year1)
	{
		swap(&year, &year1);
		swap(&month1, &month);
		swap(&day, &day1);

	}
	if (year == year1)
	{
		if (month > month1)
		{
			swap(&month1, &month);
			swap(&day, &day1);

		}
		if (month1 == month)//别忘了把==写两个
		{


			if (day > day1)
			{
				swap(&day, &day1);

			}

		}
	}
	//为了保证year的年份小于year1的


	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)// 第一个日期的二月天数
		data[1] = 29;


	if (year1 % 4 == 0 && year1 % 100 != 0 || year1 % 400 == 0)// 第2个日期的二月天数
		data1[1] = 29;



	for (i = 0; i < month - 1; i++)//分别在该年的第几天
		overdays += data[i];
	overdays += day;

	for (j = 0; j < month1 - 1; j++)//分别在该年的第几天
		overdays1 += data1[j];

	overdays1 += day1;
	if (year == year1)
	{
		sum = overdays1 - overdays;
		printf("相差%d天", sum);
		return 0;
	}
	
	else//year<year1
	{
		if (data[1] == 29)
			sum += 366 - overdays + overdays1;//小的年份的总days-它的日期然后加上大的,就是两头的;
		else
			sum += 365 - overdays + overdays1;
		for (i = year + 1; i < year1; i++)
		{
			if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
				sum += 366;
			else
				sum += 365;
		}
	}

	printf("相差%d天",sum);


}
void swap(int*p1, int*p2)//值交换没有用所以得利用址
{
	int temp;
	temp = *p1 ;
	*p1=*p2;
	
	*p2=temp;
}
