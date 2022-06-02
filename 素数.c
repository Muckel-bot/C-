#include"stdio.h"
#include"string.h"
#include"math.h"

int test(int x)
{
   int i,f=1;
   for(i=2;i<=sqrt(x);i++)
	   if(x%i==0)f=0;
   return f;
}
main()
{
	int x,t;
	printf("input x:");
	scanf("%d",&x);
	t=test(x);
	if(t)printf("%d is a 素数\n",x);
	else printf("%d 不是素数\n",x);
}
