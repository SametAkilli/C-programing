#include <stdio.h>

int bt(int sayi){
	int rakam, toplam = 0;
	while(sayi > 0) {
		rakam = sayi % 10;
		toplam = toplam + rakam;
		sayi = sayi / 10;
	}
	printf("Sayidaki rakamlarin toplami : %d", toplam);
	return toplam;
}

int main(){
	int sayi,i;
	printf("Bir Sayi Giriniz : ");
	scanf("%d", &sayi);
	bt(sayi);
	
	return 0;
}
