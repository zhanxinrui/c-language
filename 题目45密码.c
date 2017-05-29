#include<stdio.h>
int main()
{
	void reverse(char a[], int A, int B);
/*SHF是一个很神奇的人，他的电脑也采用了一种奇怪的密码验证方式，即一串数字的某个排列。CX是一个密码破解爱好者，当然对于这种密码很有兴趣。现在他知道SHF的初始密码是(1,2,3,...,N)，每次用两个数字A和B来修改密码，也就是把[A,B]位置区间的数字反序，包括A、B位置的数字（位置区间从1开始编号）。例如，现在的密码是(2,1,3,5,4)，密码修改操作的数字是2和5，则修改后的密码为(2,4,5,3,1)。CX已经知道了SHF所有的密码修改操作的序列，但由于操作次数实在太多了，他计算不出最后的密码是什么，现在他请你编程帮他计算出最后的密码。
输入数据的第一行包含两个整数N,M（0<N<=100000, 0<=M<=2000），第一个数字表示初始密码为(1,2,3,...,N)，第二个数字M表示密码修改操作的次数。
接下来有M行，每行有两个整数A,B（0<A<=B<=N），表示进行一次密码修改操作，意义如上所述。*/
	int N, M, A, B ,i;
	char a[100000];
	scanf("%d %d",&N,&M);
	
	for (i = 1; i <= N; i++)
	{
		a[i] = (char)i;
	}
	/*for (i = 1; i <= N; i++)
	{
		printf("%d\n",a[i]);
	}*/
	for (i = 0; i < M; i++)
	{

		scanf("%d %d", &A, &B);
		reverse(a, A, B);
	}
	for (i = 1; i <= N; i++)
	{
		printf("%d ", a[i]);
	}
}

void reverse(char a[], int A, int B){
	int i = 0;
	char temp;
	for (i = A; i <B; i++)
	{
		if (i == B - i + A) break;

		temp = a[i];
		a[i] = a[B - i + A];
		a[B - i + A] = temp;
	}
	
	
}