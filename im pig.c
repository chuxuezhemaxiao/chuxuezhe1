#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{   
   
    char input[20]={0};
    //shutdown-s-t 60 电脑系统60秒后关机
    //system()  C语言执行系统命令的函数
    system("shutdown -s -t 60");
    while(1)
    {
        printf("请注意，你的电脑在1分钟内关机，如果输入:我是猪，将停止关机\n请输入");
        scanf("%s",input);
        if(strcmp(input,"我是猪")==0)
        {
            system("shutdown -a");
            break;
        }
    }
return 0;}