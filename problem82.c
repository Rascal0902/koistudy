#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        if(i%3==0)
        {
            printf("X ");
        }
        else
        {
            printf("%d ",i);
        }
    }
    return 0;
}
