#include <stdio.h>
#include <string.h>
void Double_search(int arr[], int sz)
{
	int j = 0;
	for (j = 0; j < sz - 1; j++)
	{
		int i = 0;
		for (i = 0; i < sz - 1 - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int tmp = 0;
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}
}

int  main()
{
	int arr[10] = { 3,1,2,0,3,5,6,7,8,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n");
	Double_search(arr, sz);
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	return 0;
}


