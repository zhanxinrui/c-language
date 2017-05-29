#include<stdio.h>
#define N 300 
#define K 4 //截断点k,删除M个
#define M 2
char *dele(char*p, int k, int m)   //返回指针的函数, ()优先级高, 所以先和del结合, 所以是一个函数返回指针

{
	char str1[300];
	int i;
	
	for (i = 0; i < k; i++)
		str1[i] = *p++;   //一直到K录入str1;
	for (i = k + m; p[i] != '\0'; i++)
		str1[i - m] = p[i];//剩下的-m再录入
	str1[i - m] = '\0';
	return str1;

}



int main()
{
	char str[N];
	char *p;
	gets(str);
	
	p = dele(str, K, M);
	puts(p);
}

