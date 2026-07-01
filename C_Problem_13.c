#include <stdio.h>
int main()
{
    int num[100], i=0;
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
    if(i==4 && num[0]==num[3])
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}
