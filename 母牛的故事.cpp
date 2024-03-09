#include <stdio.h>
int num(int n)
{
	if(n<5)
	{
		return n;
	}
	else
	{
		return num(n-1)+num(n-3);
	}
} 
int main()
{
	int n;
	while(scanf("%d",&n)&&n)
	//连续输入几个年份，得到对应牛的数目，输入为0时程序终止。 
	{
		printf("%d\n",num(n));
	}
	return 0;
}























