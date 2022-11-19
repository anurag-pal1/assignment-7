//To print first N terms in Fibonacci series.
int main()
{
    int a=0,b=1,c=0,count=0,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("First %dth terms of Fibonacci series are:-\n",n);
    printf("%d\n",a);
    printf("%d\n",b);
    count=2;
    while(count<n)
    {
        c=a+b;
        count++;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}
