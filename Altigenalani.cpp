#include<stdio.h>
#include<math.h>
int main () {
	
	float a;
	int n;
	printf("Enter the length of the side =");
	scanf("%d",&n);
	a=6*n*n*pow(27,pow(2,-1))/4;
	printf("Area of the hexagon =%.2f",a);
	
	return 0;
}
