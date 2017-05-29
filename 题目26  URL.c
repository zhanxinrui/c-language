/*题目26  URL
Internet上的可用资源可以用简单字符串来表示，被称为“统一资源定位器”（URL，Uniform / Universal Resource Locator）。URL的标准格式如下：
协议类型 ://服务器地址(:端口号)/路径/文件名
在应用中，我们常常需要从一条URL中截取远程服务器地址部分（IP地址或域名），以便进一步处理。
请编写程序，输入为URL，输出为远程服务器地址部分。例如，下面是5组输入和输出数据。
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