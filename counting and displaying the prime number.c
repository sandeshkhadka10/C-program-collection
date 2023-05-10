#include<stdio.h>
int main()
{
	int i=0,j=0,count=0,total=0,num=0;
	printf("Enter the num: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
    	if(count==2)
	    {
	    	printf("%d\n",i);
	    	total++;
	    }
	count=0;
    }
	printf("The total prime number between 1 to %d is %d.",num,total);
	return 0;
}
