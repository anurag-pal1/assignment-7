//To print all Armstrong Numbers under 1000
#include<stdio.h>
#include<math.h>
int main()
{
    int i,remainder,result=0,count=0,num;
    for(i=1;i<=1000;i++)
    {
          num=i;
          while(num!=0)
         {
               num /=10;
               count++;
         }
         num=i;
         result=pow(num%10,count)+pow((num%100-num%10)/10,count)+pow((num%1000-num%100)/100,count);

         if(result==i)
          {
               printf("%d\n",i);
          }
      count=0;
    }
    return 0;
}
