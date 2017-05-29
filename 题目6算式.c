#include<stdio.h>
int main()
{
	int A = 0, B = 0, C = 0, D = 0;
	int i, j, k, l;
	for (i = 1; i < 10; i++)
	{

		for (j = 1; j < 10; j++)
		{

			for (k = 1; k < 10; k++)
			{

				for (l = 1; l < 10; l++)
				{

					if ((A * 1000 + B * 100 + C * 10 + D) * 9 == D * 1000 + C * 100 + B * 10 + A)
					{
						printf("A=%d b=%d C=%d D=%d\n", A, B, C, D);
					}
					
					if (D == 9)
						D = -1;n
					D += 1;
				}
				
				if (C == 9)
					C = -1;
				C += 1;
			}
			
			if (B == 9)
				B = -1;
			B += 1;
		}
		
		if (D == 9)
			D = -1;
		A += 1;
	}

}