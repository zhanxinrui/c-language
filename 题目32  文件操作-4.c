#include<stdio.h>
#include<stdio.h>
#define N 1
/* ����һ����n��ѧ����Ϣ��ɵ��ļ���studinfo.dat�������У�ÿ��ѧ������ѧ�š��������Ա�����ſγ̵ĳɼ���
��1���ýṹ����������ѧ���Ļ�����Ϣ�����У�ѧ�ź��������ַ�����ʾ���䳤�ȶ�����ձ�У��������γ������ж��壬�ɼ����ðٷ��ƣ�
��2��ѧ����Ϣ�ɼ������룬�ȴ���ṹ�������
��3����fwrite�������ṹ�������ֵд���ļ�studinfo.dat��
��4����fread�������ļ�studinfo.dat�ж�ȡ���ݲ���һ����ʽ��ʾ����Ļ�ϣ����磬ÿ����ʾһ��ѧ����Ϣ��������Ϣ֮��Ҫ��һ���ļ��������ѧ����������Ϣ������ʾ�ȣ�
*/
typedef struct {
	char id[11];//ѧ��
	char name[10];//����
	char sex[10];//�Ա�
	int curriculum[3];//�γ�0 1 2 �ֱ�Ĭ��Ϊ���Ƴɼ� 
}student[N];
/*Ҳ���� struct student{
char id[11];//ѧ��
char name[10];//����
char sex[10];//�Ա�
int curriculum[3];//�γ�0 1 2 �ֱ�Ĭ��Ϊ���Ƴɼ�
}student1[N];
*/
int main()
{
	FILE *fp;
	fp = fopen("C:\\Users\\Administrator\\Desktop\\ղ����\\studinfo.dat", "w+");//ÿ�δ򿪶�������¼��,��Ϊw+�Ǵ�ͷ���¶�д
	int i = 0;
	student info, info1;
	printf("��ֱ�����ѧ����ѧ��,����,�Ա�(male,famale),�ɼ�:(ÿ�������ÿո����)");
	for (i = 0; i < N; i++)
		scanf("%s %s %s %d %d %d", info[i].id, info[i].name, info[i].sex, &info[i].curriculum[0], &info[i].curriculum[1], &info[i].curriculum[2]);
	i = 0;
	/*��֪��Ϊʲô info [0]�����ݶ�������
	for (i = 0; i < N; i++)
	printf("%s  %s  %s %d  %d  %d\n", info[i].id, info[i].name, info[i].sex, info[i].curriculum[0], info[i].curriculum[1], info[i].curriculum[2]);*/
	while (!feof(fp) && i<N)
		fwrite(&info[i++], sizeof(student), 1, fp);//����ԭ�ͣ�int fwrite(char *ptr, unsigned size, unsigned n, FILE *fp);��ptr��ָ���n*size���ֽ������fp��ָ����ļ���
	fclose(fp);
	fp = fopen("C:\\Users\\Administrator\\Desktop\\ղ����\\studinfo.dat", "r+");
	i = 0;

	while (!feof(fp) && i<N)
		// ��֪������ʱ
		fread(&info1[i++], sizeof(student), 1, fp);//size_t fread ( void *buffer, size_t size, size_t count, FILE *stream) ;������buffer  ���ڽ������ݵ��ڴ��ַsize  Ҫ����ÿ����������ֽ�������λ���ֽ�count  Ҫ��������ĸ�����ÿ��������size���ֽ�.stream  ��������ָ�뷵��ֵ������ʵ�ʶ�ȡ��Ԫ�ظ������������ֵ��count����ͬ��������ļ���β�������󡣴�ferror��feof��ȡ������Ϣ�����Ƿ񵽴��ļ���β��
	for (i = 0; i < N; i++)
		printf("%14s  %7s  %7s %7d  %7d  %7d\n", info1[i].id, info1[i].name, info1[i].sex, info1[i].curriculum[0], info1[i].curriculum[1], info1[i].curriculum[2]);
}