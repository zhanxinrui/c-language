#include<stdio.h>
int main()
{
	int i = 0, sum = 0,j = 0;
	char *str, *str2;
	str = malloc(sizeof (char)* 300);
	str2 = malloc(sizeof (char)* 300);
	scanf("%s",str);

	while (str[0] != '.')
	{
		while (str[i] != '.')
		{

			sum += str[i];
			i++;
		}
		str2[j] = sum%64 + ' ';
		j++;
		i = 0;
		sum = 0;
		scanf("%s", str);
	}
	

	for (i = 0; i < j; i++)
	{
		printf("%c",str2[i]);
	}


}