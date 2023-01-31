#include<stdio.h>
#include<string.h>
struct bilgiler{
	char isim[15];
	char soyisim[15];
	int yas;
	
};

int main () {
	
	struct bilgiler *x1;s
	struct bilgiler bilgi1;
	
	strcpy(bilgi1.isim,"Samet");
	strcpy(bilgi1.soyisim,"Akilli");
	bilgi1.yas=19;
	
	printf("%s %s %d",bilgi1.isim,bilgi1.soyisim,bilgi1.yas);
	printf("%s %s %d",x1->isim,x1->soyisim,x1->yas);
	
	return 0;
}
