#include<stdio.h>
#include"string.h"
main(){
int a[100],i,j,n,max,sx=0,mi,f;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for(i=1;i<n;i++)
		if(max<a[i]){max=a[i];mi=i;}
	for(i=0;i<n;i++)
	{f=1;
		for(j=2;j<=a[i]/2;j++)
			if(a[i]%j==0){f=0;break;}
		//if(j>a[i]/2)
		if(f)	sx++;

	}
	printf("max:a[%d]=%d\n",mi,max);
		printf("素数有%d个\n",sx);
  }
