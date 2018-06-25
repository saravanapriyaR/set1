#include<stdio.h>
void main()
{
    int i=1,N,sum=0;
    scanf("%d",&N);
    while(i<=N)
    {
        sum=sum+i;
        i++;
    }
    printf("The sum of natural numbers is:%d",sum);
}
