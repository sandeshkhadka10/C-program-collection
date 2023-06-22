#include<stdio.h>
int main()
{
	int i=0,a[100],b[100],c[100],*p1,*p2,*p3,o=0,n=0;
	p1=a;
	p2=b;
	p3=c;
	printf("Enter the number you want: ");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("Enter the number for a[%d]: ",i);
		scanf("%d",(p1+i));
		
		printf("Enter the number for b[%d]: ",i);
		scanf("%d",(p2+i));
		
		*(p3+i)=*(p1+i)+*(p2+i);
		if(*(p3+i)%2!=0)
		{
			o++;
		}
	}
	printf("The no of odd is %d",o);
	return 0;
}
