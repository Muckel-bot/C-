#include"stdio.h"
#include"string.h"
#include"math.h"
#define KK 100
long sjz(char b[])
{
	long n=0,i;
    for(i=0;b[i];i++)
	{
		if(b[i]>='0'&&b[i]<='9')n=n*16+b[i]-'0';//16*n从底位到高位

		if(b[i]>='a'&&b[i]<='f')n=n*16+10+b[i]-'a';
		if(b[i]>='A'&&b[i]<='F')n=n*16+10+b[i]-'A';
	}
	return n;
}
main()
{
	char a[KK],c;
	long sjz(char b[]);
	int i=0,f=0;
	printf("输入十六机制数：");
	while((c=getchar())!='\n'&& i<KK)
	{
		if(c>='0'&&c<='9'||c>='a'&&c<='f'||c>='A'&&c<='F')
		{f=1;a[i++]=c;}
	}
	a[i]='\0';
	if(f==0)printf("输入错误！");
	else printf("%ld\n",sjz(a));

}
