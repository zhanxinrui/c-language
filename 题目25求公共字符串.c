#include<stdio.h>//21:28-21:40
#include<malloc.h>
#define N 200
int main()
{
	char *a, *b, *c,*p;//��Ϊ����������++,������ָ��
	a = malloc(sizeof(char)*N);
	b = malloc(sizeof(char)*N);
	c = malloc(sizeof(char)*N);
	p = c;

	gets(a);
	gets(b);
	while (*a == *b)
	{

		*p = *b;
		a++, b++, p++;
		
	}
	*p = '\0';
	puts(c);



}