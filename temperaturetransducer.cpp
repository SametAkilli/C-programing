#include<stdio.h>

int main () {
	
	float c,f,k;
	int n;
	
	printf("a-)Celcius\nb-)Fahrenheit\nc-)Kelvin\n\n\n1-)a to b\n2-)a to c\n3-)b to a\n4-)b to c\n5-)c to a\n6-)c to b");
	printf("\n\nPleas select the transaction you want to calculate =");
	scanf("%d",&n);
	if(n==1){
		printf("Enter the celcius =");
		scanf("%f",&c);
		f=(160+9*c)/5.0;
		printf("%.2f celcius = %2.f Fahrenheit",c,f);
	}
	else if(n==2){
		printf("Enter the celcius =");
		scanf("%f",&c);
		k=c+273.15;
		printf("%.2f celcius = %2.f Kelvin",c,k);
	}
	else if(n==3){
		
       printf("Enter the Fahrenheit =");
	   scanf("%f",&f);
	   c=(f-32)/1.8;
	   printf("%.2f Fahrenheit = %2.f Celcius",f,c);
		
	}
	else if(n==4){
		printf("Enter the Fahrenheit =");
		scanf("%f",&f);
		k=(f+459)*5/9;
		printf("%.2f Fahrenheit = %2.f Kelvin",f,k);
		
	}
	
	else if(n==5){
		printf("Enter the Kelvin =");
		scanf("%f",&k);
		c=k-273;
		printf("%.2f Kelvin = %2.f Celcius",k,c);
	}
	
	else if(n==6){
		printf("Enter the Kelvin =");
		scanf("%f",&k);
		f=9*k/5-459;
		printf("%.2f Kelvin = %2.f Fahrenheit",k,f);
	}
	
	return 0;
}
