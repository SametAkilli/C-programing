#include<stdio.h>

int main () {
	
	int kilo;
	float boy;
	float ke;
	  
	printf("Boyunuzu giriniz (m cinsinden)=");
	scanf("%f",&boy);
	printf("Kilonuzu giriniz (kg cinsinden)=");
	scanf("%d",&kilo);
	 
	 ke = kilo/(boy*boy);
	 
	 printf("Kitle endeksiniz %f=",ke);
	
	
	
	
	
	
	
	return 0;
}
