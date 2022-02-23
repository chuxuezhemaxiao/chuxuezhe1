#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int Max (int a,int b)
{if (a>b)
    return a;
else(a<b);
    return b;}

int main()

 {
     int x=10;
     int y=100;
     int max=0;
 max=Max(x,y);
 printf("最大值是%d\n",max);
 return 0;}
