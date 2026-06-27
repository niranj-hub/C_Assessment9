#include <stdio.h>
int main()
{
    int num[5],i,biggest;
    for(i=0;i<5;i++)
    {
        printf("Enter a number:");
        scanf("%d",&num[i]);
    }
    biggest=num[0];
    for(i=1;i<5;i++)
    {
        if(num[i]>biggest)
        {
            biggest=num[i];
        }
    }
    printf("%d",biggest);
}
