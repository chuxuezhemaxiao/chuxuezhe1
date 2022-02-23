// #define _CRT_SECURE_NO_WARNINGS
// #include<stdio.h>
// #include<string.h>
// int main()    
// // {
// // printf("%d\n",strlen("C:\test\32\test.c"));
// // return 0;
// // }
// {int arr[10]={1,3,5,7,9,2,4,6,8,10};
// int a=0;
// while (a<=10)
// {printf("%d  ",arr[a]);
// a++;
   
// }

// return 0;}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
int b=5;

    while(b<10)
    {
        b++;
        int a=1;
        int i=1;
        while(i<b)
        {
            i=i+1;
            if(b%i==0)
            {a=0;} 
        }
                 if(a==1){printf("%d",b);}   
        }                                   
return 0;}