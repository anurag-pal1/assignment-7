//To check given number is Armstrong number or not.
#include<stdio.h>
#include<math.h>
int main()
{
    int x,count=0,original,remainder,result=0;
    printf("Enter a number:\n");
    scanf("%d",&x);
    original=x;
    while(original!=0)
    {
        original /=10;
        count++;
    }
    original=x;
    while(original !=0)
    {
        remainder=original%10;
        result +=pow(remainder,count);
        original /=10;
    }
    if(result==x)
    {
        printf("Number is Armstrong.\n");
    }
    else
    {
        printf("Number is not Armstrong.\n");
    }
      return 0;
}
