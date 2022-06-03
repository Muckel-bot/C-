	
#include<stdio.h>
#include"string.h"
main(){
int a[8]={2,3,4,55,66,88,-5,13};
	int i,j,max,min,ma,mi,t;
	max=min=a[0];
	ma=mi=0;
	for(i=0;i<8;i++)
	{
		if(max<a[i]){max=a[i];ma=i;}
		if(min>a[i]){min=a[i];mi=i;}
	}
	t=max;a[ma]=a[0];a[0]=t;
	t=min;a[mi]=a[7];a[7]=t;
	for(i=0;i<8;i++)
		printf("%3d,",a[i]);
	printf("\n");
  return 0;
  }
