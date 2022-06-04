#include<stdio.h>

#include<string.h>
main()
{
int a[15][15],i,j,m,n,k=1;
	printf("输入阶数：");
	scanf("%d",&n);
	m=(n+1)/2;  
	for(i=0;i<m;i++)
	{for(j=i;j<n-i;j++)a[j][i]=k++;       //左侧上到下
	 for(j=i+1;j<n-i;j++)a[n-1-i][j]=k++;//下 从左到右
	 for(j=n-i-2;j>=i;j--)a[j][n-i-1]=k++;//右侧下到上
	 for(j=n-2-i;j>i;j--)a[i][j]=k++;

	}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				printf("%3d",a[i][j]);
			printf("\n");
		}
}
