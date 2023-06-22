//program to find the temperature in celcius using function no parameter with return
#include<stdio.h>
float x();
int main()
{
	float result=0;
	result=x();
	printf("The temp in celcius is %f",result);
	return 0;
}
float x()
{
	float c=0,f=0;
	printf("Enter the temp in celcius: ");
	scanf("%f",&c);
	f=1.8*c+32;
	return f;
}
