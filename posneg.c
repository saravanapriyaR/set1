#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        printf("The entered number is positive");
    }
    else if(n==0)
    {
        printf("The entered number is zero");
    }
    else
    {
        printf("The entered number is negative");
    }
}
