#include"stdio.h"
#include"string.h"
#include"math.h"

float pi()
{
	float s=1.0,t=1.0;
	int i;
	for(i=1;t>1e-6;i++)
	{
		t=t*i/(2*i+1);  //变化的累加规律
		s+=t;
	}
	return 2*s;
}
main()
{
printf("PI=%f\n",pi());
}
