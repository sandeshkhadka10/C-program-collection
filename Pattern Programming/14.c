/* program to print the following pattern
 *********
  *******
   *****
    ***
     * */
#include<stdio.h>
int main()
{
	int i=0,j=0,k=0;
	for(i=1;i<=5;i++)
	{
		for(k=2;k<=i;k++)
		{
			printf(" ");
		}
		for(j=9;j>=2*i-1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
