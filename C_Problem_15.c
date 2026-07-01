#include <stdio.h>
int main()
{
    int num[100], newarray[100],i=0, j, temp,n, rem, sum;
    while(1)
    {
        printf("Enter a number:");
        scanf("%d",&num[i]);

        if(num[i]==0)
        {
            break;
        }
        i++;
    }
    for(j=0;j<i;j++)
    {
        n=num[j];
        sum=0;
        while(n>0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        newarray[j]=sum;
    }
    for(j=0;j<i;j++)
    {
        for(temp=j+1;temp<i;temp++)
        {
            if(newarray[j]>newarray[temp])
            {
                sum=newarray[j];
                newarray[j]=newarray[temp];
                newarray[temp]=sum;
            }
        }
    }
    for(j=0;j<i;j++)
    {
        printf("%d ",newarray[j]);
    }
}
