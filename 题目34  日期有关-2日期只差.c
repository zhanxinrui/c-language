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
	int sum= 0 ;//�ܹ���������
	printf("����������������,(��ʽ��.��.��)");
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
		if (month1 == month)//�����˰�==д����
		{


			if (day > day1)
			{
				swap(&day, &day1);

			}

		}
	}
	//Ϊ�˱�֤year�����С��year1��


	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)// ��һ�����ڵĶ�������
		data[1] = 29;


	if (year1 % 4 == 0 && year1 % 100 != 0 || year1 % 400 == 0)// ��2�����ڵĶ�������
		data1[1] = 29;



	for (i = 0; i < month - 1; i++)//�ֱ��ڸ���ĵڼ���
		overdays += data[i];
	overdays += day;

	for (j = 0; j < month1 - 1; j++)//�ֱ��ڸ���ĵڼ���
		overdays1 += data1[j];

	overdays1 += day1;
	if (year == year1)
	{
		sum = overdays1 - overdays;
		printf("���%d��", sum);
		return 0;
	}
	
	else//year<year1
	{
		if (data[1] == 29)
			sum += 366 - overdays + overdays1;//С����ݵ���days-��������Ȼ����ϴ��,������ͷ��;
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

	printf("���%d��",sum);


}
void swap(int*p1, int*p2)//ֵ����û�������Ե�����ַ
{
	int temp;
	temp = *p1 ;
	*p1=*p2;
	
	*p2=temp;
}
