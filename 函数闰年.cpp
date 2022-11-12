#include <stdio.h>
int year(int y)
{
	
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
	
}
int main()
{
	int y;
	for (y = 1000; y < 2022; y++)
	{
		if(1==year(y))
		printf("%d  ", y);
}
	return 0;
}
