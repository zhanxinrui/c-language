#include<stdio.h>

int main()
{
	//enum {Jan = 31,Feb =  ,};
	int data[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year, month, day,overdays= 0,i;
	printf("������������,(��ʽ��.��.��)");
	scanf("%d.%d.%d",&year,&month,&day);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		data[1] = 29;
	
	
	}
	for (i = 0; i < month-1; i++)
	{
		overdays += data[i];
	
	
	}
	overdays += day;
	printf("��һ������һ��ĵ�%d��",overdays);


	



}
