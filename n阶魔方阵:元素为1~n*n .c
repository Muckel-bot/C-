#include<stdio.h>

#include<string.h>
main()
{
int a[20][20]={0},i,j,k,ti,tj,n;
	scanf("%d",&n);         n为奇数
	i=0;j=n/2;a[i][j]=1; 
	for(k=2;k<=n*n;k++)
	{
		ti=i;tj=j;        存放上一个坐标
		i=i-1;j=j+1;      新数一般在上一行后一列
		if(i<0) i=n-1;
		if(j==n) j=0;
		if(a[i][j]!=0){i=ti+1;j=tj;}  上一个数的下一行
		a[i][j]=k;
	}
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
			printf("%4d",a[i][j]);
	printf("\n");
	}
 }
