// rq.cpp : Defines the entry point for the console application.
//


 #include <stdio.h>
 int main() 
 {
      int i,a,b,c,n;
      scanf("%d",&i);
      a=i%10;
      b=(i/10)%10;
      c=i/100;
      n=100*a+10*b+c;
      printf("%d",n);
      return 0;
  }
      







