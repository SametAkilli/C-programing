#include<stdio.h>
#include<math.h>


int main () {
	
	int m1,m2;
	float r,f;
	float g=6.67/pow(10,11);
	
	printf("Enter the mass of the first object =");
	scanf("%d",&m1);
	printf("Enter the mass of the second object =");
	scanf("%d",&m2);
	printf("Enter the distance between objects in meters =");
	scanf("%f",&r);
	f=g*(m1+m2)/pow(r,2);
	printf("Gravitational force =%.2f",f);
	
	
	
	return 0;
}
