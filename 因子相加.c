#include<stdio.h>
#include"string.h"
int n,i,s,j,f[100];
for(n=6;n<1000;n++)
{
	s=1;j=0;f[j]=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0){s+=i;f[++j]=i;}
	}
	if(s==n)
	{
		printf("%d=",n);
		for(i=0;i<=j;i++)printf("+%d",f[i]);
		printf("\n");
	}
}
