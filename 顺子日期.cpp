//i,j,k是一个顺子 则说明i+1==j&&j+1==k成立 
#include<stdio.h> 
int main()
{
	//2022年为 平年 2月28天 
	int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	//存储每个月份的天数 
	int b[8]={2,0,2,2};
	//存储每个日期 
	int i,j;
	int count=0;
	for(i=1;i<=12;i++)
	{
		b[4]=i/10;
		b[5]=i%10;
		for(j=1;j<=day[i-1];j++)
		{
			b[6]=j/10;
			b[7]=j%10;
			if(b[4]+1==b[5]&&b[5]+1==b[6]||b[5]+1==b[6]&&b[6]+1==b[7])
			//满足该条件说明是顺子日期 
			{
				count++;
			}
		}	
	}
	printf("%d\n",count);
	return 0;
}
