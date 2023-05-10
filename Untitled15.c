#include<stdio.h>
int main()
{
    int i=0,j=0,count=0,a[10];
    for(i=0;i<=9;i++)
    {
        printf("Enter the number for a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                count++;
                break;
            }
        }
       if(count==0 && a[i]!=1)
        {
            printf("Prime number is %d\n",a[i]);
        }
        count=0;
    }
    printf("\n");
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
        {
            printf("Even number is %d\n",a[i]);
        }
    }
    printf("\n");
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==1)
        {
            printf("Odd number is %d\n",a[i]); // add new line character
        }
    }
    return 0;
}

