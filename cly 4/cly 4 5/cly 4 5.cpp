// cly 4 5.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include<math.h>
int main(int argc, char* argv[])
{
	int a,b;
	scanf("%d",&a);
	if(a>1000)
	{	printf("����������һ��С��1000������a:");
			scanf("%d",&a);
	}
	b=sqrt(a);
	printf("%d",b);
	return 0;
}