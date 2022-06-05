#include<stdio.h>
main(){
int x;long y;
scanf("%d",&x);
y=x*x;
if(x>0 && x<10000)
{
	if(y%10==x||y%100==x||y%1000==x||y%10000==x)
		printf("%d yes,%d*%d=%d\n",x,x,x,y);
	else
		printf("%d no,%d*%d=%d\n",x,x,x,y);
}
else
printf("错误");
}
