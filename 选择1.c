#include<stdio.h>

main()
{
char a,b;
scanf("%c%c",&a,&b);
if((a-b)%2==0)
printf("%c %c\n",a+1,b+1);
else 
printf("%c %c\n",a-1,b-1);
return 0;
}
