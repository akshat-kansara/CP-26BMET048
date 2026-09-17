#include<stdio.h>
void main()
{
    int row,col,i,j,k;
    printf("no. of rows:");
    scanf("%d",&row);
    printf("value of k:");
    scanf("%d",&k);
    for(i=k;i>row;i--)
    {
        for(j=1;j<=row;j++)
        {
            printf("%d%d\n",i,j);

        }
        printf("\n");
    }

}


