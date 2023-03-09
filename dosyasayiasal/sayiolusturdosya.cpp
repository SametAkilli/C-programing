#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
	int i,sayi;
	FILE *dosya;
	srand(time(NULL));
	dosya=fopen("sayilar.txt","w");
	
	if(dosya==NULL){
		printf("Dosya olusturulamadi");
	}
	
	else{
		printf("Dosya olusturma basarili.");
		for(i=0 ; i<100 ; i++){
		sayi=rand()%1001;
		fprintf(dosya,"%d\n",sayi);
	}
	}
	fclose(dosya);
	
	
	return 0;
}
