#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{int n=0;
int i=0;
int z=1;
printf("输入数字：");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {;
    z=z*i;
    }
printf("n!=%d",z);
return 0;}