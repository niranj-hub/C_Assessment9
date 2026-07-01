#include <stdio.h>
int main()
{
    int num[100],i=0,sum=0;
    while(1)
    {
        printf("Enter a number:");
        scanf("%d",&num[i]);
        if(num[i]==0)
        {
            break;
        }
        sum=sum+num[i];
        i++;
    }
    printf("Total numbers=%d\n",i);
    printf("Sum=%d",sum);
}
