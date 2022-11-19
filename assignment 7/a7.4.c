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
    printf("HCF of given two numbers is %d",HCF);
    return 0;




}
