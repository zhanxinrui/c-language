/*��Ŀ26  URL
Internet�ϵĿ�����Դ�����ü��ַ�������ʾ������Ϊ��ͳһ��Դ��λ������URL��Uniform / Universal Resource Locator����URL�ı�׼��ʽ���£�
Э������ ://��������ַ(:�˿ں�)/·��/�ļ���
��Ӧ���У����ǳ�����Ҫ��һ��URL�н�ȡԶ�̷�������ַ���֣�IP��ַ�����������Ա��һ������
���д��������ΪURL�����ΪԶ�̷�������ַ���֡����磬������5�������������ݡ�
*/

#include<stdio.h>//22:53
#define N 100
int main()
{
	int i = 0;
	char str[N],str1[N];
	char *p;

	gets(str);
	p = str;
	while (*p != '/')
		p++;
	p += 2;
	while (*p != '/')
	{

		str1[i] = *p;
		i++;
		p++;

	}
	str1[i] = '\0';
	puts(str1);

	






}