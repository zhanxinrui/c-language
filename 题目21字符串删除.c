#include<stdio.h>
int main()
{
	char *p, *q;
	int j = 0,i;
	q = malloc(100 * sizeof(char));
	p= malloc(100 * sizeof(char));


	printf("ÊäÈë×Ö·û´®:");
	gets(p);
	
	for (i = 0; i<100;i++)
	if (p[i] != ' ')
		q[j++] = p[i];
	puts(q);


}