#include<stdio.h>

#include<string.h>
main()         
{	int a[15][15],i,j,m,n;
	printf("输入阶数：");
	scanf("%d",&n);
	m=(n+1)/2;  
	for(i=0;i<m;i++)
		for(j=i;j<n-i;j++)
		{
			a[i][j]=i+1;a[n-1-i][j]=i+1;  
			a[j][i]=i+1;a[j][n-1-i]=i+1;

		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				printf("%3d",a[i][j]);
			printf("\n");
		}
}
