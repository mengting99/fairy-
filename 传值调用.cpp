#include <stdio.h>
void Swap(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
int main()
{
	int a = 12;
	int b = 28;
	printf("交换前：\na=%d   b=%d\n", a, b);
	Swap(a, b);
	printf("交换后：\na=%d   b=%d\n", a, b);
	return 0;
}