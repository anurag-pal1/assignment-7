//To print all prime numbers between two numbers.
#include<stdio.h>
int main()
{
    int i,flag,N,a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    for(N=a+1;N<=b;N++)
    {
        flag=0;
        for(i=2;i<=N/2;i++)
        {
            if(N%i==0)
            {
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d\n",N);
        }
    }

    return 0;
}

