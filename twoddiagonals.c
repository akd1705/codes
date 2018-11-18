#include<stdio.h>
void main()
{
    int i,j,rows,columns;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    printf("Enter the number of columns\n");
    scanf("%d",&columns);
    int arr[rows][columns];
    printf("Enter the values of matrix.\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is.\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("The diagonal elements are.\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            if(i==j)
                printf("%d ",arr[i][j]);
        }
    }
}
