#include<stdio.h>
void main()
{
    int row,col,i,j,k;
    //printf("no. of rows:");
    //scanf("%d",&row);
    printf("no. of col:");
    scanf("%d",&col);
    for(i=1;i<=col;i++)
    {
        for(j=1;j<=col;j++)
        {
           for(k=1;k<=col;k++)
            printf("%d%d%d\n",i,j,k);

        }
        printf("\n");
    }

}


