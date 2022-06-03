#include<stdio.h>
#include"string.h"
#define N 40
main()
{
    int a[N],b[N],c[N],i,j,k,t=0;
	for(i=0;i<N;i++)a[i]=b[i]=c[i]=-1;
	i=j=0;k=N-1;
	printf("输入超长整数a：");
	do
	{
		a[++i]=getchar()-'0';//从一开始
	}while(a[i]!=-38);
	printf("输入超长整数b：");
	do
	{
		b[++j]=getchar()-'0';
	}while(b[j]!=-38);
	c[k]=-38;
    j--,i--,k--;
	for(;a[i]>=0 && b[j]>=0;i--,j--,k--)
	{
		c[k]=t+a[i]+b[j];
		t=c[k]/10;
		c[k]=c[k]%10;
	}
	while(a[i]>=0)
	{
		c[k]=t+a[i];t=c[k]/10;c[k]=c[k]%10;i--;k--;
	}
	while(b[j]>=0)
	{
		c[k]=t+b[j];t=c[k]/10;c[k]=c[k]%10;j--;k--;
	}
    k++;
	while(c[k]!=-38)printf("%d",c[k++]);
	printf("\n");
	getchar();
	return 0;


}
