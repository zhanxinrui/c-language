#include<stdio.h>

#include<stdlib.h>
struct LNode//����һ���ṹ,dataΪ���
{
	int data;
	struct LNode * next;
};
typedef struct LNode * linklist;



linklist  InitList(linklist L) //�ı�βָ��
{
	L = (linklist)malloc(sizeof(struct LNode)); //����ͷ���

	L->data = -1;//��data =-1,������������ʱ�ø�
	L->next = L;  //ָ����ָ��������,��β����,����ͷ���,
	return L;

}





linklist ListInsert(linklist L, int i, int e) //�ڱ�β����ı�βָ��
{
	linklist f = L;  //pָ���ͷ,�������صĵ�һ���ڵ�
	linklist p = L, s;//p���ƶ�,s��������

	int k;
	if (L->data == -1)  
	{
		p->data = e;//һ���ڵ�ʱֱ�Ӹ�ֵ
		return f;
	}

	for (k = 1; k < i; k++)
	{


		p = p->next;
	}
	//q = p->next; //qָ���i�����
	s = (linklist)malloc(sizeof(struct LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;//�����ڵ�
	return f;//ÿ�ζ����ص�һ�� �ڵ�
}


linklist  ListDelete(linklist L, int i)//ÿ��ɱ��һ����
{
	linklist  p = L, q = L;
	int n = 1;
	if (i == 1)//ÿһ���˶�ɱ��,Ϊ���ҵ�P��ǰ�̽ڵ�,����ѭ��һȦ
	{
		while (p->next != q)
			p = p->next;
		p->next = p->next->next;//��pָ��ɱ������һ��,����q���Ǳ�ɾ����

		return q;
	}
	while (n != i)
	{

		if (n + 1 == i)
		{
			q = p->next;//����ÿ������˸���ɱ��һ����
			p->next = p->next->next;

		}
		else
			p = p->next;
		n++;



	}
	return q;

}
int main()
{
	int people, num, i;//�ֱ�Ϊ �����������ÿ��������һ��
	linklist l = NULL, p = NULL;
	l = InitList(l);
	printf("��ֱ������ܹ���������ÿ��������һ��:");
	scanf("%d %d", &people, &num);
	for (i = 0; i < people; i++)
		l = ListInsert(l, i, i + 1);//һ������people����
	p = l;
	/*
	for (i = 0; i < people; i++)
	{

		printf("%d \t", l->data);
		l = l->next;
	}
	*/
	p = ListDelete(p, num);
	printf("%d\t", p->data);
	for (i = 1; i < people - 1; i++)//ÿ��ɾ��һ����
	{

		p = ListDelete(p->next, num);
		printf("%d\t", p->data);
	}
	printf("%d\t", p->next->data);
}

