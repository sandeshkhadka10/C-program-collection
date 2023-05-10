#include<stdio.h>
void x(float);
int main()
{
	float c=0;
	printf("Enter the temp in celcius: ");
	scanf("%f",&c);
	x(c);
	return 0;
}
void x(float a)
{
	float z=0;
	z=1.8*a+32;
	printf("The temp in farenheit is %f",z);
}
