#include<stdio.h>
typedef struct {
	double real;
	double visual;

}plural;
 
plural add(plural member1, plural member2);
plural  sub(plural member1, plural member2);
plural mul(plural member1, plural member2);
plural div(plural member1, plural member2);

int main()
{
	plural a, s, m, d;
	plural member1, member2;
	printf("�������һ��������ʵ�����鲿");
	scanf("%lf %lf",&member1.real,&member1.visual);
	printf("�������һ��������ʵ�����鲿");

	scanf("%lf %lf", &member2.real, &member2.visual);
	a =add(member1,member2);
	printf("���������Ϊ:%.2lf%+.2lfi",a);
	s = sub(member1, member2);
	printf("���������Ϊ:%.2lf%+.2lfi",s);
	m= mul	(member1, member2);
	printf("���������Ϊ:%.2lf%+.2lfi", m);
	d = div(member1, member2);
	printf("���������Ϊ:%.2lf%+.2lfi", d);



}
plural add(plural member1, plural member2)
{
	plural a;
a.real = member1.real + member2.real;
a.visual= member1.visual + member2.visual;

	return a;




}
plural  sub(plural member1, plural member2)
{
	plural a;
	a.real = member1.real - member2.real;
	a.visual = member1.visual - member2.visual;

	return a;
}
plural mul(plural member1, plural member2)
{
	plural a;
	a.real = member1.real * member2.visual-member1.visual*member2.real;
	a.visual = member1.visual *member2.real+member1.real*member2.visual;

	return a;
}

plural div(plural member1, plural member2)
{
	plural a;
	a.real = (member1.real*member2.real + member1.visual*member2.visual) / (member2.real*member2.real + member2.visual*member2.visual);
		a.visual = (member1.visual*member2.real - member1.real*member2.visual) / (member2.real*member2.real + member2.visual*member2.visual);

	return a;
}