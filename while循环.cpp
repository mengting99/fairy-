﻿#include <stdio.h>
int main()
{
	int a = 0;
	while (a <= 100)
	{
		if (a % 2 == 1)
			printf("%d\n", a);
		a++;
	}
}
