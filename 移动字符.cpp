#include<stdio.h>
#include<windows.h>
int main()
{
	char arr1[] = "Bonnie is a beacutiful girl";
	char arr2[] = "$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		left++;
		right--;
		if (left > right)
			break;
	}


}
