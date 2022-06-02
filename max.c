#include"stdio.h"
#include"string.h"
#include"math.h"
main()
{
	int a,b,c,max(int,int);
	printf("输入三个数：");
	scanf("%d %d %d",&a,&b,&c);
	printf("最大值为：%d\n",max(max(a,b),c));
}
int max(int x,int y)
{
   if(x>y)return x;
   else return y;
}
