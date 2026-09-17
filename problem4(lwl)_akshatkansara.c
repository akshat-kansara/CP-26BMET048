#include<stdio.h>
void main()
{
    int i,n,j;
    printf("enter the n value:\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }

}

