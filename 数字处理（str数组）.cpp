//题目描述
//给出一个不多于5位的整数，要求 
//1、求出它是几位数 
//2、分别输出每一位数字 
//3、按逆序输出各位数字，例如原数为321,应输出123

#include <stdio.h>
#include <string.h>
int main()
{
	char str[6];
	scanf("%s",&str);
	
	int len = strlen(str);
	printf("%d\n",len);
	for(int i = 0 ;i<len;i++)
	{
		printf("%c ",str[i]);
	}
	printf("\n");
	for(int j = len-1 ;j >= 0;j--)
	{
		printf("%c",str[j]);
	}
	return 0;
}





