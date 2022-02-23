#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{char ch1[]="Well come to bite!!!!";
 char ch2[]="#####################";
int sz=sizeof(ch1)/sizeof(ch1[0]);
int left=0;
int right=sz-2;//字符数组[a b c \0]，下标为0 1 2 3，所以想得到'c'的下标，就得减去2
               //或者直接 right=strlen(arr1)-1 求字符串长度-‘\0’
               //但是用“strlen”,开头要写头文件 #include<string.h>

for(left=0,right=sz-1;left<=right;left++,right--)
    {
        ch2[left]=ch1[left];
        ch2[right]=ch1[right];
        printf("%s\n",ch2);
        Sleep(1000);//休息一秒（1000毫秒）头文件 #include<windows.h>
        //system("cls");//执行系统命令函  数头文件 #include<stdlib.h>   "cls"清空屏幕
        
    }
//printf("%s\n",ch2);
return 0;
}