#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char ch= 0;
	int i = 0;
	fp = fopen("C:\\Users\\Administrator\\Desktop\\詹新锐\\article.txt", "r");//如果是相对路径,在vs里需要放在项目下C:\Users\Administrator\Documents\Visual Studio 2013\Projects\ConsoleApplication107\ConsoleApplication107
	int  row = 0, alpha[52], space = 0;
	memset(alpha, 0, sizeof(alpha));
	//printf("%d",alpha[0]);
	while (!feof(fp) )
	{
		
			while ((ch = fgetc(fp)) != '\n'&&ch != NULL&&!feof(fp))
		{
			if (ch == ' '){
				while (ch = fgetc(fp) == ' ')
				if (ch = fgetc(fp) != ' ')
					break;
				space++;
			}
			
		
			if (ch >= 'A'&&ch <= 'Z')
				alpha[ch - 'A'] += 1;
			else if (ch >= 'a'&&ch <= 'z')
				alpha[ch - 'a' + 26] += 1;
			
				
		}
		
		row += 1;
		
	}
	printf("共%d行 单词%d个\n", row, space + 1);
	for (i = 0; i < 26; i++)
		printf("%c有%d个\t", 'A' + i, alpha[i]);
	putchar('\n');
	for (i = 26; i < 52; i++)
		printf("%c有%d个\t", 'a' + i - 26, alpha[i]);
	fclose(fp);
}
