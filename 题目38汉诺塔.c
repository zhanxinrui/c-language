#include  <stdio.h>
void han(int n, char A, char B, char C) 
//当n=1时直接从A移动到C,当n>1时,相当于把上方的N-1个移动到B再把最后一个移动到C,最后把N-1移动到C.通过递归减少N的值使最后递归到初值条件
{
	if (n == 1)  {
		printf(" %c -> %c\n", A, C);
	}
	else  {
		han(n - 1, A, C, B);
		han(1, A, B, C);
		han(n - 1, B, A, C);
	}
}
int main()  {
	int n;
	printf("请输入盘数：");
	scanf("%d", &n);
	han(n, 'A', 'B', 'C');
	return  0;
}