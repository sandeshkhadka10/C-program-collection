#include<stdio.h>
int main()
{
	int i=0,num=0,great=0,n=0;
	
	printf("Enter how many number you want to input: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter the number: ");
		scanf("%d",&num);
		
		if(num>great)
		{
			great=num;
		}
	}
	printf("The greatest number among n digit is %d",great);
	return 0;
}
