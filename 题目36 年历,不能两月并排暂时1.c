#include<stdio.h>
/*��֪1900��1��1��������һ����дһ����������һ����С��1900����ţ��������1��~12�µ����������磬����Ϊ2012��ʱ������������£�*/

int main()
{
	//enum {Jan = 31,Feb =  ,};
	int data[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year = 2014, month, overdays = 0, i = 0, j = 0, advance = 1, firstyearday = 0, firstday = 0, overyears = 0;//1900���1��1��������1,������123456���ŷ�,1ǰ����1��������advance =1,advance1��������Year�ĵ�һ��
	printf("����������Ҫ�����������:");
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
	for (month = 1; month <= 12; month++)//12����
	{
		overdays = 0;//�ǵ���Overdays= 0 ��Ϊÿ���¶��ڱ�
		for (i = 0; i < month - 1; i++)
		{
			overdays += data[i];


		}
		firstday = (overdays + firstyearday) % 7;//����advance%7�պ�������µĿ�ͷ

		printf("CALENDAR %d-%d\n", year, month );
		printf("------------------------------\n");
		printf(" SUN MON TUE WED THR FRI SAT\n");
		for (j = 0; j < firstday; j++)
		{


			printf("    ");                 //firstday֮ǰ�Ŀհ�
		}
		for (i = 1; i <=data[month-1]; i++)//��ӡ��������
		{

			printf("%4d", i);
			if ((i + firstday) % 7 == 0)//ÿ��7������
			{
				printf("\n");
			}
		}
		printf("\n");



	}
}
