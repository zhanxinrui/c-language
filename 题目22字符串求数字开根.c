#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i = 0, n = 0, num = 0;
	double sum = 0;
	char *str, *str2, *p;
	str = malloc(sizeof (char)* 300);
	str2 = malloc(sizeof (char)* 300);

	scanf("%s", str);
	p = str2;
	while (*str != '\0')
	{
		if (*str >= '0'&& *str <= '9')
		{

			*p = *str;

			p++;
			num++;
		}
		str++;

	}
	*p = '\0';//ºÜ¹Ø¼ü

	while (str2[i] != '\0')
	{

		putchar(str2[i]);


		sum += (
			(str2[i] - 48)* pow((double)10.0, (double)num - 1 - i));
		i++;

	}	printf("\n");
	sum = sqrt((double)sum);
	printf("%lf", sum);
}