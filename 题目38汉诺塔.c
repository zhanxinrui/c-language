#include  <stdio.h>
void han(int n, char A, char B, char C) 
//��n=1ʱֱ�Ӵ�A�ƶ���C,��n>1ʱ,�൱�ڰ��Ϸ���N-1���ƶ���B�ٰ����һ���ƶ���C,����N-1�ƶ���C.ͨ���ݹ����N��ֵʹ���ݹ鵽��ֵ����
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
	printf("������������");
	scanf("%d", &n);
	han(n, 'A', 'B', 'C');
	return  0;
}