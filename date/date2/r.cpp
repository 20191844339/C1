// r.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
int main()
{
		int year = 0, month = 0, day = 0, leap = 0, dayth = 0;
		printf("输入年: ");
		scanf("%d",&year);
		printf("输入月: ");
		scanf("%d",&month);
		printf("输入日: ");
		scanf("%d",&day);
		if(month>12 || month<1)
		{
			printf("year out of limit\n");
		}
		if(day>31 || day<1)
		{
			printf(" month out of limit\n");
		}
		if(year%4 == 0 && year%100 != 0 || year%400 ==0)
		{
			leap = 29;
		}
		else
		{
			leap = 28;
		}
		month = month - 1;
		switch(month)
		{
			case 11 : dayth += 30;
			case 10 : dayth += 31;
			case  9 : dayth += 30;
			case  8 : dayth += 31;
			case  7 : dayth += 31;
			case  6 : dayth += 30;
			case  5 : dayth += 31;
			case  4 : dayth += 30;
			case  3 : dayth += 31;
			case  2 : dayth += leap;
			case  1 : dayth += 31;
		}
		dayth += day;
		printf("这是%d年的第%d天",year,dayth);
		return 0;
} 

