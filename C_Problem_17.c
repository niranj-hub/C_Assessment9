#include <stdio.h>
int main()
{
    int num[5], i;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=4;i>0;i--)
    {
        if(num[i]>=10)
        {
            num[i-1]=num[i-1]+(num[i]/10);
            num[i]=num[i]%10;
        }
    }
    printf("After carry adjustment:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",num[i]);
    }
}
