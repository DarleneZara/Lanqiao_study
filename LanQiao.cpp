#include <stdio.h>
//#include <math.h> //^��������   pow()��˭�ļ��η��ĺ��� 
//�ݹ�-��n��쳲�������
//1 1 2 3 5 8 13 21 34 55 89 
//int Fib(int n)
//{
//	if(n<=2)
//		return 1;
//    else
//	    return Fib(n-1)+Fib(n-2); 
//}

//ѭ������
//�Լ�д�� 
//int Fib(int n)
//{
//	int a=1;
//	int b=1;
//	int c=0;
//	if(n<=2)
//	{
//		return 1;
//	}
//	else
//	{
//		int i=0;
//		for(i=n-2;i>0;i--)
//		{
//			c=a+b;
//		    a=b;
//		    b=c;
//		}
//		return c;
//	}
//}
//����д��
//int Fib(int n)
//{
//    int a=1;
//	int b=1;
//	int c=1;
//	
//	while(n>2)
//	{
//	    c=a+b;
//		a=b;
//		b=c;
//		n--;	
//	}
//	return c;	
//} 
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("��%d��쳲���������:%d\n",n,ret);
//	return 0;
//}




/*
//���ַ�����Ԫ��+ð������ 
void Bubble_sort(int arr[],int sz)
{
	int i = 0;
	int j = 0;
	for(i=0;i<sz-1;i++)
	{
		int flag = 1;//����������Ѿ��������� 
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int t = arr[j];
				arr[j] = arr[j+1];
                arr[j+1] = t;
				flag = 0;//���н�����˵���������ʱ��������������			
			}
		}
		if(flag == 1)
		{
			break;
		}
	}
}

int Binary_search(int arr[],int k,int sz)
{
	int left = 0;
	int right = sz-1;
	
	while(left<=right)
	{
		int mid = (left + right)/2;
	    if(arr[mid] > k)
	    {
		    right = mid - 1;
	    }
	    else if(arr[mid] < k)
	    {
		    left = mid + 1;
	    }
	    else
	    {
		    return mid;
	    }
	}
	return 0;
}

int main()
{
	printf("������������Ҫ���в��Ҳ���������:\n");
	int i=0;
	int arr[10]={0};
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);//�˴���������ʱҪһ��һ�����룬������һ������10������ 
	} 
	Bubble_sort(arr,sz);
	
	int k = 0;
	printf("������Ҫ���ҵ�Ԫ��:\n");
	scanf("%d",&k);
	int ret = Binary_search(arr,k,sz);
	if(ret == 0)
	{
		printf("δ�ҵ���Ԫ��\n");
	}
	else
	{
		printf("�ҵ��ˣ���Ԫ���±���:%d\n",ret);
	}
	
	return 0;
}
*/ 

//2024.3.1
//1.���ͼ�� 
/* 
int main()
{
	int n = 5;
	int i=1;
	char a='A';
	for(int i1=1;i1<=n;i1++)
	{
	    for(i=1;i<=n-i1;i++)
	    {
	   		printf(" ");
	    }
	    for(int j=1;j<=2*i1-1;j++)
	    {
	    	printf("%c",a+i1-1);
		} 
		printf("\n");	
    }     
	return 0;
}
*/
//


//������
////1.a+b
//int main()
//{
//	int a,b=0;
//	while(scanf("%d%d",&a,&b)==2)
//	{
//		printf("%d\n",a+b);//������Ҫ���д��� 
//	}
//	return 0;	
//} 


//???2.���ִ����ж� 
//int main()
//{
//	int num,i;
//	scanf("%d",&num);
//	int ws = 0;
//	int arr[]={0};
//	int num1=num;
//	while(num>0)
//	{
//		num=num/10;
//		ws+=1;
//	}
//	printf("%d\n",ws);
//	for(i=ws;i>0;i--)
//	{
////		int t=(int)(pow(10,(ws-i)));
////        arr[i-1]=(num1/t)%10;
//        arr[i-1]=((num1/(int)(pow(10,(ws-i))))%10);
//    }
//	for(i=0;i<ws-1;i++)
//	{
//		printf("%d ",arr[i]);
//		if(i==ws-2)
//		{
//			printf("%d\n",arr[i+1]);
//		}
//	}
//	for(i=ws;i>0;i--)
//	{
//		printf("%d",arr[i-1]);
//	} 
//	return 0;
//} 
 
 
 /*
//???
#include<stdio.h>
#include<math.h>
int main()
{
    int num,i;
    scanf("%d",&num);
    int ws = 0;
    int arr[]={0};
    int num1=num;
    while(num>0)
    {
        num=num/10;
        ws+=1;
    }
    printf("%d\n",ws);
    for(i=ws;i>0;i--)
    {
        arr[i-1]=((num1/(int)(pow(10,(ws-i))))%10);
    }
    for(i=0;i<ws-1;i++)
    {
        printf("%d ",arr[i]);
        if(i==ws-2)
        {
            printf("%d\n",arr[i+1]);
        }
    }
    for(i=ws;i>0;i--)
    {
        printf("%d",arr[i-1]);
    } 
    return 0;
}
 
 */
/*
#include <string.h>
int main()
{
	char str[10];
	scanf("%s",str);
	
	int len=strlen(str);
	printf("%d\n",len);
	
	for(int i=0;i<len;i++)
	{
		printf("%c ",str[i]);
	}
	printf("\n");
	for(int i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	return 0;
}
*/ 
/*
//1.
#include <math.h>
int main()
{
	int num;
	num=(2)+(2*9)+(2*pow(9,3));
	printf("%d",num);
	return 0;
}

*/
/* 2.
int main()
{
	//1�� 
	20220101 20220102 ...20220122 20220123   //1�� 
	//2��
	202202  //0��
	//3��
	202203  //0��
	//4��
	202204  //0��
	//5��
	202205  //0 
	//6
	202206  //0
	//7 8 9
	202207 202208 202209  //0
	//10
	202210  //0
	//11
	20221123  //1
	//12
	20221230  20221230  //2
	//��4��˳������ 
	return 0;
}
*/
int main()
{
	//2022��Ϊ ƽ�� 2��28�� 
	int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	//�洢ÿ���·ݵ����� 
	int b[8]={2,0,2,2};
	//�洢ÿ������ 
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
			{
				count++;
			}
		}	
	}
	printf("%d\n",count);
	
	return 0;
}

/*3.
int main()
{
	int a,b,n,days;
	scanf("%d%d%d",&a,&b,&n);
	int week=n/(5*a+2*b);
	int n2=n%(5*a+2*b);
	if(n2<=a)
	{
		days=week*7+1;
	}
	else if(n2<=(5*a))
	{
		days=week*7+(n2/a)+1;
	}
	else if((n2-(5*a))<=b)
	{
		days=week*7+5+1;
	}
	else if((n2-(5*a))<(2*b))
	{
		days=week*7+5+2;
	}
	printf("%d\n",days);
    return 0;	
} 
*/
/*
//4.������� 
int main()
{
	int N;
	scanf("%d",&N);
    printf("4\n2\n4\n");
	return 0;
}
*/

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

