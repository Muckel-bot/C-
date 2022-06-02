#include"stdio.h"
#include"string.h"
#include"math.h"

//递归1

double mh(float x,int n)
{
	double y;
	if(n==0)y=1;
	else(n>0)y=x*mh(x,n-1);
	else y=mh(x,n-1)/x;
	return y;
}

  int s1(int n)
{
  if(n==1)return 1;
  else return (n+s1(n-1));
}
int s(int n)
{
	if(n==1)return 1;
	else return(s(n-1)+s1(n));//双重递归
}
double f1(double x,int n)
{
	if(n==1)return(x);
	else return((-1)x*x/((2*n-1)*(2*n-2))*f1(x,n-1));//每次乘一个(-1)x*x/((2*n-1)*(2*n-2))
}
double f(double x,int n)
{
	if(n==1)return(x);
	else return(f1(x,n)+f(x,n-1));
}

