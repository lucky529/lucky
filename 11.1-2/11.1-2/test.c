#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#define N 10
//int main()
//{
//	int i=0;
//	int j=0;
//	for(i=0; i<N; i++)
//	{
//		for(j=0; j<N-i-1; j++)
//		printf(" ");
//		for(j=0; j<2*i+1; j++)
//			printf("*");
//		printf("\n");		
//	}
//	for(i=0; i<N-1; i++)
//	{
//		for(j=0; j<=i; j++)
//			printf(" ");
//		for(j=0; j<2*(N-i)-3; j++)
//			printf("*");
//		printf("\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int a=0,b=0,c=0,d=0;
//	for(i=100; i<1000; i++)
//	{
//		a=i%10;
//		
//		b=(i/10)%10;
//		
//		c=((i/10)/10)%10;
//		
//		if((a*a*a+b*b*b+c*c*c)==i)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i=0;
//	for(i=0; i<1000; i++)
//	{
//		int count=1;
//		int sum=0;
//		int temp=0;
//		temp=i;
//		while(temp/10)
//		{
//			count++;
//			temp/=10;
//		}
//		temp=i;
//		while(temp)
//		{
//			sum += pow((temp % 10), count);
//			temp /= 10;
//		}
//		if(i==sum)
//			printf("%d ",i);
//
//	}
//	return 0;
//}
//#include <stdio.h>
// 
//int main()
//{
//	int a = 2;
//	int Sn = 0;
//	int i = 0;
//	int j = a;
//	for (i=0; i<5; i++)
//	{
//		Sn = Sn+j;
//		j = j*10+a;
//	}
//	printf("%d\n", Sn);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i=0;
//	int n=0;
//	int tmp=0;
//	int sum=0;
//	int a=0;
//	scanf("%d%d",&a,&n);
//	for(i=0; i<n; i++)
//	{
//		tmp=tmp*10+a;
//		sum=sum+tmp;
//	}
//	printf("%d",sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{	
//	int count = 0;	
//	char ch = 0;	
//	while((ch = getchar())!=EOF)	
//	{		
//		if(ch == '{')		
//			count++;		
//		else if(ch == '}')		
//		{			
//			if(count == 0)			
//			{				
//				printf("不匹配");			
//			}			
//			else			
//			{				
//				count--;			
//			}		
//		}	
//	}	
//	if(count == 0)	
//	{		
//		printf("匹配！");	
//	}	else	
//	{		
//		printf("不匹配！");	
//	} 	
//	return 0;
//}

#include<stdio.h>
int main()
{
	int i=0;
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={4,5,6,9,8};
	int tmp=0;
	int sz=sizeof(arr1)/sizeof(arr1[0]);
		for(i=0; i<sz; i++)
		{
			tmp=arr1[i];
			arr1[i]=arr2[i];
			arr2[i]=tmp;
		}
		for(i=0; i<sz; i++)
		{
			printf("%d ",arr1[i]);
			
		}
		printf("\n");
		for(i=0; i<sz; i++)
		{
			printf("%d ",arr2[i]);			
			
		}
	return 0;
}
