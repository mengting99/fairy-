#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	scanf_s("%d", &n);
	int ret = 1;
	for(i = 1; i <= n; i++)
	{
		ret = ret * i;
		printf("ret=%d", ret);
	}
return 0;
}
