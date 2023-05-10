#include<stdio.h>
int main()
{
    int i=0, j=0, m=0, n=0, p=0, q=0, sum=0, k=0;
    int first[10][10], second[10][10], multiply[10][10];
    
    printf("Enter no of rows and columns for 1st matrix: ");
    scanf("%d %d", &m, &n);
    
    printf("Enter the elements of 1st matrix: ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }
    
    
        flag:
        printf("Enter no of rows and columns for 2nd matrix: ");
        scanf("%d %d", &p, &q);
        
        if(n != p)
        {
            printf("The multiplication isn't possible.\n");
            goto flag;
        }
        
    
    
    printf("Enter the elements of 2nd matrix: ");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }
    
    for(i=0; i<m; i++)
    {
        for(j=0; j<q; j++)
        {
            sum = 0;
            for(k=0; k<p; k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }
            multiply[i][j] = sum;
        }
    }
    
    printf("Product is:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("%d\t", multiply[i][j]);
        }
        printf("\n");
    }
    
    return 0;		
}
