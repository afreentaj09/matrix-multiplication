#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int m1, n1, m2, n2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m1, &n1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &m2, &n2);
    printf("Enter elements of first matrix:\n");
    for (int i=0;i<m1;i++)
    {
        for (int j=0;j<n1;j++) 
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i=0;i<m2;i++)
    {
        for (int j=0;j<n2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for (int i=0;i<m1;i++)
    {
        for (int j=0;j<n2;j++)
        {
            c[i][j]=0;
            for ( int k=0;k<n1;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }    
    printf("Result of matrix:\n");
    for (int i=0;i<m1;i++)
    {
        for (int j=0;j<n2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
return 0;
}

