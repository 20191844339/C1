// 7 1.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
int main()
{
	int max(int x,int y);
	int min(int x,int y);
	int a,b;
	printf("��������������:\n");
	scanf("%d%d",&a,&b);
	printf("�������Ϊ:%d\n",max(a,b));
	printf("��С������Ϊ:%d\n",min(a,b));
}
     int max(int x,int y)
	 {
		 int z;
		 while(y!=0)
		 {
			 z=x%y;
			 x=y;
			 y=z;
		 }
		 return x;
	 }
	 int min(int x,int y)
	 {
		 int z;
		 z=x*y/max(x,y);
		 return z;
	 }

