#include<stdio.h>
#include<stdio.h>
#define N 1
/* 建立一个由n名学生信息组成的文件（studinfo.dat），其中，每个学生都有学号、姓名、性别和三门课程的成绩。
（1）用结构体类型描述学生的基本信息，其中：学号和姓名用字符串表示，其长度定义参照本校的情况，课程名自行定义，成绩采用百分制；
（2）学生信息由键盘输入，先存入结构体变量；
（3）用fwrite函数将结构体变量的值写入文件studinfo.dat；
（4）用fread函数从文件studinfo.dat中读取数据并按一定格式显示在屏幕上（例如，每行显示一个学生信息，各项信息之间要有一定的间隔，所有学生的所有信息对齐显示等）
*/
typedef struct {
	char id[11];//学号
	char name[10];//名字
	char sex[10];//性别
	int curriculum[3];//课程0 1 2 分别默认为三科成绩 
}student[N];
/*也可以 struct student{
char id[11];//学号
char name[10];//名字
char sex[10];//性别
int curriculum[3];//课程0 1 2 分别默认为三科成绩
}student1[N];
*/
int main()
{
	FILE *fp;
	fp = fopen("C:\\Users\\Administrator\\Desktop\\詹新锐\\studinfo.dat", "w+");//每次打开都是重新录入,因为w+是从头从新读写
	int i = 0;
	student info, info1;
	printf("请分别输入学生的学号,名字,性别(male,famale),成绩:(每个输入用空格隔开)");
	for (i = 0; i < N; i++)
		scanf("%s %s %s %d %d %d", info[i].id, info[i].name, info[i].sex, &info[i].curriculum[0], &info[i].curriculum[1], &info[i].curriculum[2]);
	i = 0;
	/*不知道为什么 info [0]的数据读出有误
	for (i = 0; i < N; i++)
	printf("%s  %s  %s %d  %d  %d\n", info[i].id, info[i].name, info[i].sex, info[i].curriculum[0], info[i].curriculum[1], info[i].curriculum[2]);*/
	while (!feof(fp) && i<N)
		fwrite(&info[i++], sizeof(student), 1, fp);//函数原型：int fwrite(char *ptr, unsigned size, unsigned n, FILE *fp);将ptr所指向的n*size个字节输出到fp所指向的文件中
	fclose(fp);
	fp = fopen("C:\\Users\\Administrator\\Desktop\\詹新锐\\studinfo.dat", "r+");
	i = 0;

	while (!feof(fp) && i<N)
		// 不知道个数时
		fread(&info1[i++], sizeof(student), 1, fp);//size_t fread ( void *buffer, size_t size, size_t count, FILE *stream) ;参数：buffer  用于接收数据的内存地址size  要读的每个数据项的字节数，单位是字节count  要读数据项的个数，每个数据项size个字节.stream  输入流的指针返回值：返回实际读取的元素个数。如果返回值与count不相同，则可能文件结尾或发生错误。从ferror和feof获取错误信息或检测是否到达文件结尾。
	for (i = 0; i < N; i++)
		printf("%14s  %7s  %7s %7d  %7d  %7d\n", info1[i].id, info1[i].name, info1[i].sex, info1[i].curriculum[0], info1[i].curriculum[1], info1[i].curriculum[2]);
}