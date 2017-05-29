#include<stdio.h>
#include<stdlib.h>
//分为三个函数一个循环,一个判断,一个主程序
int n, a[100];
void queen(int now)
{
	int i;
	if (now == n + 1)
	{
		for (i = 1; i <= n; i++)//都是从1开始
			printf("%d\t", a[i]);
		printf("\n");
	}
	for (i = 1; i <= n; i++)
	{
		a[now] = i;//把每一列试过去
		if (!judge(now, i))
			queen(now + 1);//下一个皇后;说起来是回溯,实际是把不对的扔掉;
	}

}
int judge(int now, int i)
{
	int j;
	for (j = 1; j < now; j++)
	{

		if (abs(now - j) == abs(a[j] - i) || i == a[j])//对角线即行减行等于列减列,或者列冲突,因为一维数组所以行不会冲突,
			return 1;
		
	}
	return 0;//所有都不冲突再返回0
}


int main()
{
	printf("请输入需要的皇后数:");
	scanf("%d", &n);
	queen(1);//从第一个皇后开始


}