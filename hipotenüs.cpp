#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main () {
	
	
	int k1,k2;
	float janseli;
	
	printf("Dik ucgenin kenarlarini giriniz = ");
	scanf("%d",&k1);
	
	printf("Dik ucgenin kenarlarini giriniz = ");
	scanf("%d",&k2);
	
	janseli = sqrt(k1*k1 + k2*k2);
	
	printf("HIPOTENUS = %.2f",janseli);
	
	
	return 0;
}
