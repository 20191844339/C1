// 6 2.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
int main()
{
    int i,j,t;
    int a[10];
    printf("������10������:\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);//�����鸳ֵ 
    for(j=0;j<9;j++)
        for(i=0;i<9-j;i++)//����n-j�������Ƚ� 
        if(a[i]>a[i+1])
        {
            t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
                 
        }
       printf("��С��������:\n");
    for(i=0;i<10;i++)
        printf(" %d",a[i]);
    return 0;
}

