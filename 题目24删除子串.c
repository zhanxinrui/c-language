#include<stdio.h>
#define N 300 
#define K 4 //�ضϵ�k,ɾ��M��
#define M 2
char *dele(char*p, int k, int m)   //����ָ��ĺ���, ()���ȼ���, �����Ⱥ�del���, ������һ����������ָ��

{
	char str1[300];
	int i;
	
	for (i = 0; i < k; i++)
		str1[i] = *p++;   //һֱ��K¼��str1;
	for (i = k + m; p[i] != '\0'; i++)
		str1[i - m] = p[i];//ʣ�µ�-m��¼��
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

