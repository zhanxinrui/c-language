#include<stdio.h>
#include<string.h>
#define N 10
int main()
{
	int jie,cube[N][N],num=1,x,y,i,j;
	memset(cube,-1,sizeof(cube));
	scanf("%d",&jie);//jie����������

	for (i = 1; i <= jie;i++)
	for (j = 1; j <= jie; j++)
		cube[i][j] = 0;
	/*

	for (i = 0; i < N; i++)
	{

		for (j = 0; j < N; j++)
			printf("%2d", cube[i][j]);
		printf("\n");
	}
	*/
	
	cube[1][jie / 2+1] = num++;
	x = 1,y = jie / 2+1;
	while (1)
	{

		if ((num - 1) % jie == 0)// �������ǽ׵� ����ʱ,
		{

			if (cube[x + 1][y] != 0)
				break;
			cube[x + 1][y] = num++;
			x = x + 1;
		}
		else if (cube[x - 1][y + 1] == -1)//�ٴ���Խ�����
		{
			if (x == 1)//������϶�
			{

				if (cube[jie][y + 1] != 0)
					break;
				cube[jie][y + 1] = num++;
				x = jie, y = y + 1;
			}
			else//������Ҷ�
			{

				if (cube[x - 1][1] != 0)
					break;
				cube[x - 1][1] = num++;
				x = x - 1, y = 1;

			}
		}
		else //һ�����
		{
			if (cube[x - 1][y + 1] != 0)
				break;
			cube[x - 1][y + 1] = num++;
			x = x - 1, y = y + 1;
		}


	}

	/*�����ľ���չʾ
	for (i = 0; i < N; i++)
	{

	for (j = 0; j < N; j++)
	printf("%3d", cube[i][j]);
	printf("\n");
	}

	*/
	for (i = 1; i <= jie; i++)
	{

		for (j = 1; j <=jie; j++)
			printf("%3d", cube[i][j]);
		printf("\n");
	}

}