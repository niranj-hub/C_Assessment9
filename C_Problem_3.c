#include <stdio.h>
int main()
{
    int num[5],i,smallest;
    for(i=0;i<5;i++)
    {
        printf("Enter a number:");
        scanf("%d",&num[i]);
    }
    smallest=num[0];
    for(i=1;i<5;i++)
    {
        if(num[i]<smallest)
        {
            smallest=num[i];
        }
    }
    printf("%d",smallest);
}
