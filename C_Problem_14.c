#include <stdio.h>
int main()
{
    int num[100], i=0, sum;
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
    if(i%2!=0)
    {
        printf("Middle number = %d", num[i/2]);
    }
    else
    {
        sum=num[(i/2)-1]+num[i/2];
        printf("Average = %d", sum/2);
    }
}
