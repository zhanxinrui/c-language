#include<stdio.h>

int main()
{
	int num;
	for (num = 0; num < 10000;num++)
	if (num % 2 == 1 && num % 3 == 2 && num % 5 == 4 && num % 6 == 5 && num % 7 == 0)
		printf("%d\t",num);




}