#include<stdio.h>

int main () {
	
	int i=0;
	int toplam =0;
	printf("!!! Islemi bitirmek icin negatif bir sayi giriniz !!!");
	while(i>=0){
		
		printf("\nToplamak istediginiz sayiyi giriniz =");
		scanf("%d",&i);
		if(i>=0){
		toplam += i;
		}
		else{
			printf("%d",toplam);
			break;
		}
	}
	
	
	return 0;
}
