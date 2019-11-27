// pie.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <math.h>
int main()
{
	int i=1,f=1;
	double pi=0.0,term=1.0,n=0.0;
	while(fabs(term)>=1e-6)
	{
		pi=pi+term;
		f=f+2;
		n=pow(f,2);// 计算分母的值 
		
        term=i/n;
		
	}
	pi=sqrt(pi*8);
	printf("pi=%10.8f\n",pi);
	return 0;
}

