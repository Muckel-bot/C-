#include"stdio.h"
main(){
double a,b,c,p,s;
  scanf("%lf%lf%lf",&a,&b,&c);
  p=(a+b+c)/2.0;
  if((a+b>c)  && abs(a-b)<c)
  {
     s=sqrt(p*(p-a)*(p-b)*(p-c));
	 printf("s=%.2lf\n",s);
  }
  else
	  printf("不能构成三角形");
    }
