#include <stdio.h>
int main()
{
    int num[5],newarray[5],sum,i,n,rem,reverse;
    sum=0;
    for(i=0;i<5;i++)
    {
        printf("Enter a number:");
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++)
    {
        n=num[i];
        reverse=0;
        while(n>0)
        {
            rem=n%10;
            reverse=reverse*10+rem;
            n=n/10;
        }
        newarray[i]=reverse;
        sum=sum+newarray[i];
    }
    printf("Sum =%d",sum);
}
