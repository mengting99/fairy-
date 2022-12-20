#include <stdio.h>
int main()

{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
		int i = 1;
		for (i = 1; i <= b; i++)
		{
			if (a * i % b == 0)
			{
				printf("the least common multiply is %d", a * i);
				break;
			}
		}
		return 0;
}
