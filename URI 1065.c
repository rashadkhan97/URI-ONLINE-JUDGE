#include<stdio.h>

int main()
{
    int x,i,sum=0;;
    for(i=0;i<5;i++)
        {
        scanf("%d",&x);
        if(x % 2 == 0)
            {
                sum++;
            }
        }
    printf("%d valores pares\n",sum);
    return 0;
}
