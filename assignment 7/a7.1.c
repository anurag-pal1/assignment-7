// To find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("The %dth term of fibonacci series %d ",n,b);
    return 0;
}
