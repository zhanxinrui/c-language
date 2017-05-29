#include<stdio.h>
int main()
{
	int prime, isprime = 1, i = 0,reprime;
	
	for (prime = 1000; prime <= 9999; prime++)
	{
	
	
		for (i = 2; i * i < prime ; i++)
		{
			if (prime%i == 0)
			{

				isprime = -1;
				break;
			}
		}
		reprime = (prime / 1000) + ((prime / 100) % 10 )*10 +( (prime / 10) % 10 )*100 + (prime % 10  ) *1000;
		
		
		for (i = 2; i*i < reprime ; i++)
		{
			if (reprime%i == 0)
			{

				isprime = -1;
				break;

			}
		}
	
		if (isprime != -1)
		{
			printf("%dÊÇ¿ÉÄæËØÊý\t", prime);

		}
		isprime = 0;

		
	}

}