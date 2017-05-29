#include<stdio.h>

	int main()
	{
		double payment, rate, cost,tax,tax0;
		scanf("%lf", &payment);
		tax0 = payment - payment*0.19 - 3500;
		if (tax0 <= 1500)
		{
			rate = 3;
			cost = 0;
		}
		else if (tax0>1500 && tax0 <= 4500)
		{
			rate = 10;
			cost = 105;
		}
		else if (tax0>4500 && tax0 <= 9000)
		{
			rate = 20;
			cost = 555;
		}
		else if (tax0<9000 && tax0 <= 35000)
		{
			rate = 25;
			cost = 1005;
		}
		else if (tax0>35000 && tax0 <= 55000)
		{
			rate = 30;
			cost = 2755;
		}
		else if (tax0>55000 && tax0 <= 80000)
		{
			rate = 35;
			cost = 5505;
		}

		else if (tax0>80000)
		{
			rate = 45;
			cost = 13505;
		}
		tax = (tax0)*rate / 100 - cost;
		printf("个人所得税额为:%lf",tax);


}