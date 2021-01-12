#include <stdio.h>
#include <string.h>




int main()
{
	printf("creating two new strings storing the alphabet\n");
	char str1[26];
	char str2[26] = "abcdefghijklmnopqrstuvwxyz";
	char str3[52];
	for (int i = 'a'; i <= 'z'; i++)
	{
	  str1[i - 'a'] = i;
	}
	if (strcmp(str1, str2) == 0)
		printf("the strings are identical\n");
	else
		printf("the strings are different\n");

	printf("uppercasing the first string\n");

	for (int i = 0; i <= 25; i++)
	{
	  str1[i] = str1[i] - 32;
	}
	if (strcmp(str1, str2) == 0)
		printf("the strings are identical\n");
	else
		printf("the strings are different\n");
	printf("combining the strings into a third string\n");

	strcpy(str3, str1);
	strcat(str3, str2);

	printf("printing all three strings\n");
	printf("str1: %s \n str2: %s \n str3: %s\n", str1, str2, str3);
}
