#include <stdio.h>
#include <stdlib.h>

int sum (int num0,int num1,int num2,int num3,int num4,int num5,int num6,int num7,int num8,int num9,int num10,int num11,int num12,int num13,int num14,int num15,int num16,int num17,int num18,int num19)
{
    int sum=num0+num1+num2+num3+num4+num5+num6+num7+num8+num9+num10+num11+num12+num13+num14+num15+num16+num17+num18+num19;
    return  sum;
}


int main()
{
int sum=0;
int f=20;
int array[f];
int num=0;
    printf("enter 20 different numbers \n");
    for(int num=0;num<f;num++)
        {

       scanf("%d\n",&array[num]);

       if (array[num]==array[num-1]||array[num]==array[num-2]||array[num]==array[num-3]||array[num]==array[num-4]||array[num]==array[num-5]||array[num]==array[num-6]||array[num]==array[num-7]||array[num]==array[num-8]||array[num]==array[num-9]||array[num]==array[num-10]||array[num]==array[num-11]||array[num]==array[num-12]||array[num]==array[num-13]||array[num]==array[num-14]||array[num]==array[num-15]||array[num]==array[num-16]||array[num]==array[num-17]||array[num]==array[num-18]||array[num]==array[num-19]||array[num]==array[num-20])
      {
          continue;
        // printf("number is repeated you lose a place\n");

       }

}
printf("you entered:");
for(num=0;num<20;num++)
    {

       if (array[num]==array[num-1]||array[num]==array[num-2]||array[num]==array[num-3]||array[num]==array[num-4]||array[num]==array[num-5]||array[num]==array[num-6]||array[num]==array[num-7]||array[num]==array[num-8]||array[num]==array[num-9]||array[num]==array[num-10]||array[num]==array[num-11]||array[num]==array[num-12]||array[num]==array[num-13]||array[num]==array[num-14]||array[num]==array[num-15]||array[num]==array[num-16]||array[num]==array[num-17]||array[num]==array[num-18]||array[num]==array[num-19]||array[num]==array[num-20])
      {
          continue;
      }
        sum+=array[num];
    printf("%d , ",array[num]);
    }
    printf("sum=%d \n",sum);
    return 0;
}
