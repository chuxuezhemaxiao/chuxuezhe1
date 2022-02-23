#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int data[100];
int num = 0;

void output(int total)
{
     for(int i = total;i > 0; i--)
     {
      printf("%d ", data[i]);
     }
     printf("\n");
     num++;
}
void findComb(int total, int count, int sum, int begin)
{
    if( count < 0 )
    {
        printf("error\n");
        return;
    }
    else if( count == 1 )
    {
         data[count] = sum;
         output(total);
         return;
    }
    else
    {
        for(int i = begin; i <= (sum-1)/count; ++i )
        {
             
                data[count] = i;
                findComb(total, count-1, sum-i, i+1);  
        }
    }
}

int main()
{   
 
  findComb(5, 5, 20, 1);
  printf("Total: %d\n", num);
   system("PAUSE");
   return 0;
}