#include<stdio.h>

int main () {
	
	int vize1,vize2,final;
	float ortalama;
	
	printf("Birinci vize notunuzu giriniz=");
	scanf("%d",&vize1);
	printf("�kinci vize notunuzu giriniz=");
	scanf("%d",&vize2);
	printf("Final notunuzu giriniz=");
	scanf("%d",&final);
	
	ortalama = (vize1+vize2+final)/3.0;
	
	if (ortalama > 60) {
		
		printf("Dersten gectiniz");
	}
	
	else if (ortalama > 45 ) {
		printf("Bute kaldiniz");
	}
	
	else {
		printf("KALD�N�Z");
	}
	
	
	
	
	return 0;
}
