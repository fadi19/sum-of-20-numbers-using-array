#include <stdio.h>
#include <stdlib.h>

int sum (int num1,int num2,int num3,int num4,int num5,int num6,int num7,int num8,int num9,int num10,int num11,int num12,int num13,int num14,int num15,int num16,int num17,int num18,int num19,int num20)
{
    int sum=num1+num2+num3+num4+num5+num6+num7+num8+num9+num10+num11+num12+num13+num14+num15+num16+num17+num18+num19+num20;
    return  sum;
}
int main()
{
int sum=0;
int f=20;
int array[f];
int num;
    printf("enter 20 numbers\n");
    for(num=0;num<f;num++)
    {

       scanf("%d\n",&array[num]);
       if (array[num]==array[num-1])
       {
           scanf("%d\n",&array[num]);
       }
    }

printf("you entered:");
for(num=0;num<f;num++)
    {sum+=array[num];

    printf("%d , ",array[num]);
    }
    printf("sum=%d \n",sum);
    return 0;
}
