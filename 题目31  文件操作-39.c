#include<stdio.h>
#define N 3
//��д����������˾Ա����ÿ�ܹ���ʱ�俨����ĳ��˾��n��Ա����ÿ��Ա����3����������š�ÿСʱ���ʡ��ܹ���Сʱ������Щ���ݼ�¼��һ���ı��ļ��У�ÿ��һ�����ݡ�ÿ��Ա�����ܹ���ʱ������40Сʱ����֧��1.5���Ĺ��ʡ��ܹ��ʵ�3.625%����Ϊ˰��۳�������Ӧ�����ÿλԱ���Ĺ��ź;����ʡ������ʾ�����ܶ��ƽ�����ʡ�
typedef struct {
	double num;//����
	double payment;//����
	double hours;//�ܹ���Сʱ��
}workermsg [N];

int main()
{
	int i = 0;
	
	workermsg worker;
	FILE *fp;
	fp = fopen("C:\\Users\\Administrator\\Desktop\\ղ����\\workers.txt","r+");
	while (!feof(fp))//ֱ����β
	{


		fscanf(fp, "%lf",&worker[i].num);//һ����Ҫ����&
		fscanf(fp, "%lf", &worker[i].payment);
		fscanf(fp, "%lf", &worker[i].hours);
		i++;
		
	}
	for (i = 0; i < N; i++)
	{
		if(worker[i].hours>40)
		printf("%lf %lf %lf\n",worker[i].num,worker[i].payment*1.5*0.96375,worker[i].hours);
		else
		printf("%lf %lf %lf\n", worker[i].num, worker[i].payment*0.96375, worker[i].hours);

	}

}