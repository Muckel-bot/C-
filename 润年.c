  #include"stdio.h"
  main(){
  int year,month,day,leap;
	scanf("%d%d",&year,&month);
	if((year%4==0&&year%100!=0)||year%400==0) leap=1;
	switch(month)
	{
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:day=31;break;
    case 4:case 6:case 9:case 11:day=30;break;
	case 2:if(leap) day=29;
		else day=28;break;
	default:day=0;break;
	}
	if(day)
		printf("%d year %d month have %d day\n",year,month,day);
	else
		printf("粗偶无");
    }
