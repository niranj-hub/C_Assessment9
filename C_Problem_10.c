#include <stdio.h>
int main()
{
    int num[5],i,j,k,count,newarray[5];
    j=0;
    for(i=0;i<5;i++)
    {
        printf("Enter a number:");
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++)
    {
        count=0;
        for(k=1;k<=num[i];k++)
        {
            if(num[i]%k==0)
            {
                count++;
            }
        }
        if(count!=2)
        {
            newarray[j]=num[i];
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d ",newarray[i]);
    }
}
