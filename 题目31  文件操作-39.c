#include<stdio.h>
#define N 3
//编写程序来处理公司员工的每周工作时间卡。设某公司有n名员工，每名员工有3个数据项：工号、每小时工资、周工作小时数，这些数据记录在一个文本文件中，每行一组数据。每名员工的周工作时数超过40小时将被支付1.5倍的工资。总工资的3.625%将作为税款扣除。程序应该输出每位员工的工号和净工资。最后显示工资总额和平均工资。
typedef struct {
	double num;//工号
	double payment;//工资
	double hours;//周工作小时数
}workermsg [N];

int main()
{
	int i = 0;
	
	workermsg worker;
	FILE *fp;
	fp = fopen("C:\\Users\\Administrator\\Desktop\\詹新锐\\workers.txt","r+");
	while (!feof(fp))//直到结尾
	{


		fscanf(fp, "%lf",&worker[i].num);//一定不要忘记&
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