#include<stdio.h>
#include<stdlib.h>
//��Ϊ��������һ��ѭ��,һ���ж�,һ��������
int n, a[100];
void queen(int now)
{
	int i;
	if (now == n + 1)
	{
		for (i = 1; i <= n; i++)//���Ǵ�1��ʼ
			printf("%d\t", a[i]);
		printf("\n");
	}
	for (i = 1; i <= n; i++)
	{
		a[now] = i;//��ÿһ���Թ�ȥ
		if (!judge(now, i))
			queen(now + 1);//��һ���ʺ�;˵�����ǻ���,ʵ���ǰѲ��Ե��ӵ�;
	}

}
int judge(int now, int i)
{
	int j;
	for (j = 1; j < now; j++)
	{

		if (abs(now - j) == abs(a[j] - i) || i == a[j])//�Խ��߼��м��е����м���,�����г�ͻ,��Ϊһά���������в����ͻ,
			return 1;
		
	}
	return 0;//���ж�����ͻ�ٷ���0
}


int main()
{
	printf("��������Ҫ�Ļʺ���:");
	scanf("%d", &n);
	queen(1);//�ӵ�һ���ʺ�ʼ


}