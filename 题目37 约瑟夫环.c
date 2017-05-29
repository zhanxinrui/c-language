#include<stdio.h>

#include<stdlib.h>
struct LNode//定义一个结构,data为编号
{
	int data;
	struct LNode * next;
};
typedef struct LNode * linklist;



linklist  InitList(linklist L) //改变尾指针
{
	L = (linklist)malloc(sizeof(struct LNode)); //分配头结点

	L->data = -1;//让data =-1,方便下面新增时好改
	L->next = L;  //指针域指向它本身,首尾连接,不留头结点,
	return L;

}





linklist ListInsert(linklist L, int i, int e) //在表尾插入改变尾指针
{
	linklist f = L;  //p指向表头,保留返回的第一个节点
	linklist p = L, s;//p来移动,s是新增的

	int k;
	if (L->data == -1)  
	{
		p->data = e;//一个节点时直接赋值
		return f;
	}

	for (k = 1; k < i; k++)
	{


		p = p->next;
	}
	//q = p->next; //q指向第i个结点
	s = (linklist)malloc(sizeof(struct LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;//新增节点
	return f;//每次都返回第一个 节点
}


linklist  ListDelete(linklist L, int i)//每次杀死一个人
{
	linklist  p = L, q = L;
	int n = 1;
	if (i == 1)//每一个人都杀死,为了找到P的前继节点,就再循环一圈
	{
		while (p->next != q)
			p = p->next;
		p->next = p->next->next;//让p指向被杀死的下一个,返回q就是被删除的

		return q;
	}
	while (n != i)
	{

		if (n + 1 == i)
		{
			q = p->next;//正常每隔多个人个人杀死一个人
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
	int people, num, i;//分别为 输入的人数和每多少人死一个
	linklist l = NULL, p = NULL;
	l = InitList(l);
	printf("请分别输入总共的人数和每多少人死一个:");
	scanf("%d %d", &people, &num);
	for (i = 0; i < people; i++)
		l = ListInsert(l, i, i + 1);//一次增加people个人
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
	for (i = 1; i < people - 1; i++)//每次删除一个人
	{

		p = ListDelete(p->next, num);
		printf("%d\t", p->data);
	}
	printf("%d\t", p->next->data);
}

