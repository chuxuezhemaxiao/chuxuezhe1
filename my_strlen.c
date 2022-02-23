#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// int my_strlen(char* str)
// {  
//     int count=0;
//     while(*str!='\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }
int my_strlen(char* str)
{
    
   if (*str!='\0')
    {
        return 1+my_strlen(str+1); 
    }
    else
    {
        return 0;
    }
    return *str;
}
int main()
{
char arr[]="bitjgfh";
int len=my_strlen(arr);
printf("len=%d\n",len);

return 0;
}