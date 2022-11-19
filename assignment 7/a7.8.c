//To print next prime number of a number.
#include<stdio.h>
int main()
{
    int i,flag,N,a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    for(N=a;N<=a*5;N++)
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
            break;
        }
    }

    return 0;
}


