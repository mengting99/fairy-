#include<stdio.h>
#include<string.h>
int main()
{
	char string[20] = {};
	char str[3][20] = {};
	int i = 0;
	for (i = 0; i <3; i++)
		gets_s(str[i]);
	if (strcmp(str[0], str[1]) > 0)
		strcpy_s(string, str[0]);
	else
		strcpy_s(string, str[1]);
	if (strcmp(str[1], str[2]) < 0)
		strcpy_s(string, str[2]);
	printf("The largest word is:\n%s", string);
	return 0;


}
