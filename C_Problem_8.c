#include <stdio.h>
int main()
{
    int num[5],i,j,newarray[5];
    j=0;
    for(i=0;i<5;i++)
    {
        printf("Enter a number:");
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++)
    {
       if(num[i]%2==0)
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
