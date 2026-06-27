#include <stdio.h>
int main()
{
    int num[5],sum,i,average;
    sum=0;
    for(i=0;i<5;i++)
    {
        printf("Enter a number:");
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    average=sum/5;
    printf("%d",average);
}
