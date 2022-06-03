	
  #include<stdio.h>
#include"string.h"
main(){
int a[100],i,j,t,n,nj=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)   //排列
			if(a[j]<a[i])
			{t=a[i];a[i]=a[j];a[j]=t;}
    for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		if(a[i]%2)nj++;
	}
	printf("\n奇数个数%d\n",nj);
  }
