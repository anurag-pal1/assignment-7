//To calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int x,y,i,LCM,HCF;
    printf("Enter two numbers:\n");
    scanf("%d %d",&x,&y);
    for(i=1;i<=x*y;i++)
    {
      if((i%x==0)&&(i%y==0))
      {
           LCM=i;
            break;
      }
    }
    HCF=x*y/LCM;

    if(HCF==1)
        printf("\nNumbers are co-prime");
    else
        printf("\nNumbers are not co-prime");
    return 0;
}

