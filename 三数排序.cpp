﻿#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int tmp = 0;
	scanf_s("%d%d%d" ,& a, & b, & c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
		printf("%d %d %d", a, b, c);
		return 0;


}
