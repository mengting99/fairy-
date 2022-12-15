#include <stdio.h>
#include<assert.h>
int count = 0;

char my_strlen(char* dest)
{
    assert(dest != NULL);

	while(*dest++ !='\0')
   count++;
    return count;
}


int main()
{
    char arr[20] = { "abcd" };
	
    int ret=my_strlen(arr);
	printf("strlen=%d", ret);
    return 0;
}
