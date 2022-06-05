#include"stdio.h"
main(){
int a,b,c,t;
scanf("%d%d%d",&a,&b,&c);
if(a<b){a=a^b;b=a^b;a=a^b;}
if(a<c){a=a+c;c=a-c;a=a-c;}
if(b<c){t=b;b=c;c=t;}
printf("%d %d %d\n",a,b,c);
}
