#include<stdio.h>
float x(float);
int main()
{
	float c=0,result=0;
	printf("Enter the temp in celcius: ");
	scanf("%f",&c);
	result=x(c);
	printf("The temp in farenheit is %f",result);
	return 0;
}
float x(float a)
{
	float z=0;
	z=1.8*a+32;
	return z;
}
