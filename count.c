#include<stdio.h>
#include<math.h>
void main()
{
    int n,count=0;
    scanf("%d",&n);
    count=log10(n)+1;
    printf("the digits in the number is:%d",count);
}
