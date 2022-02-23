#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{int a=1;
int cur=1;
int sum=0;
while(a<=10)
{cur=cur*a;
sum=sum+cur;
a++;}
printf("%d",sum);
return 0;}
// {int n=0;
// int i=0;
// int z=0;
// int sum=0;
// for(n=1;n<=10;n++)
//     {
//         for(i=1,z=1;i<=n;i++)
//         {
//         z=z*i;
//         }
//          sum=z+sum;            }
// printf("%d",sum);
        