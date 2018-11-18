#include<stdio.h>
void main()
{
    int i,j,rows,columns;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    printf("Enter the number of columns\n");
    scanf("%d",&columns);
    int arr[rows][columns],arr2[rows][columns],arr3[rows][columns];
    printf("Enter the values of first matrix.\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the values of second matrix.\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The matrices are.\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("AND\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the matrices are.\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            arr3[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
}
