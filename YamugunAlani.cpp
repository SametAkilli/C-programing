#include<stdio.h>

int main () {
	
	int t,b,h;
	float a;
	printf("Enter the top horizontal line =");
	scanf("%d",&t);
	printf("Enter the bottom horizontal line =");
	scanf("%d",&b);
	printf("Enter the height =");
	scanf("%d",&h);
	a=(b+t)*h/2.0;
	printf("Area of the trapezoid =%.2f",a);
	
	return 0;
} 
