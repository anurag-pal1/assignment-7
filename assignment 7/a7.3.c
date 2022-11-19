//To check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c=0,x,flag=0;
    printf("Enter the value which have to check:\n");
    scanf("%d",&x);
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(x==b)
            flag=1;

    }
    if(flag==1||x==0||x==1)
        printf("Number is present in series");
    else if(flag==0)
        printf("Number is not present in series");



    return 0;
}

