//��Ŀ����
//����һ��������5λ��������Ҫ�� 
//1��������Ǽ�λ�� 
//2���ֱ����ÿһλ���� 
//3�������������λ���֣�����ԭ��Ϊ321,Ӧ���123

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





