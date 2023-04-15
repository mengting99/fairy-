#include <stdio.h>

#define MAXSIZE 100
typedef int ElemType;
typedef struct
{
	ElemType data[MAXSIZE];
	int length;

}SqList;//表示部分


void InitList(SqList &L);
void DestroyList(SqList &L);
void ClearList(SqList& L);
void ListEmpty(SqList& L);
int GetElem(SqList& L,int r,ElemType &e);
int LocateElem(SqList& L);
void CreatList(SqList& L, ElemType a[]);
void ListDelete(SqList& L);
int GetLength(SqList& L);//一些基本操作



int main()//开始尝试写主函数
{
	SqList L;
	ElemType a[10] = { 1,2,3,4,5,6,7,8,9 };
	ElemType e;
	InitList(L);
	CreatList(L, a);
	printf("这个线性表的长度是多少%d\n", GetLength(L));
	GetElem(L, 2, e);
	printf("第二个元素的值是%d",e);
	return 0;
}
void InitList(SqList& L)
{
	L.length = 0;
}
void CreatList(SqList& L,ElemType a[])
{
	int i = 0;
	for (i = 0;a[i]!='\0'&&i<MAXSIZE; i++)
	{
		L.data[i] = a[i];
		
	}
	L.length = i+1;
}
int GetLength(SqList& L)
{
	int s = 0;
	s = L.length;
	return s;
}


int GetElem(SqList& L,int r,ElemType &e)
{
	if (r<0 || r>L.length)
	{
		printf("位置%d越界\n", r);
			return 0;
	}
	else
		e = L.data[r - 1]; 
	return 1;
}