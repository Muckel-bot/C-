#include<stdio.h>

#include<string.h>
main()         
{
	char s[80];
	int i,j,len,n;
	gets(s);
	len=strlen(s);
	printf("输入移动的字符数：");
	scanf("%d",&n);
	for(i=len-1;i>=0;i--)s[i+n]=s[i];
	for(i=0;i<n;i++)s[i]=s[len+i];
	s[len]='\0';

		printf("%s\n",s);

    
}
