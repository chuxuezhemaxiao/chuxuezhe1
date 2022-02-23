#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int count_bit(int a)
{
    //方法1
   int count=0;
   while(a)
   {
       a=a&(a-1);
       count++;
   }
return count;   
   
   
   
   
   
    //方法2
    // int count=0;
    // int b=1;
    // for(int i=0;i<32;i++)
    // {
    //     if((a>>i)&b==1)
    //     {
    //         count++;
    //     }
    // }
    // return count;




    //方法3
    // int count=0;
    // while(a)
    // {
    //     if(a%2==1)
    //     {
    //         count++;
    //     }
    //     a=a/2;
    // }
    // return count;
}
int main()
{
    int a=0;
    scanf("%d",&a);
    int count=count_bit(a);
    printf("%d",count);
    return 0;
}