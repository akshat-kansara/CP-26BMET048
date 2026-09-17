#include<stdio.h>
void main()
{
    int row,col,i,j;
    //printf("no. of rows:");
    //scanf("%d",&row);
    printf("no. of col:");
    scanf("%d",&col);
    for(i=1;i<=col;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d%d\n",i,j);
        }
        printf("\n");
    }

}


