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
	//�������뼸����ݣ��õ���Ӧţ����Ŀ������Ϊ0ʱ������ֹ�� 
	{
		printf("%d\n",num(n));
	}
	return 0;
}























