#include<stdio.h>

int asal (int sayi){
	
	int i;
	
	if(sayi<2){
		return 0;
	}
	
	else{
		for(i=2 ; i<sayi ; i++){
			if(sayi %i ==0){
				return 0;
			}
		}
	}
	return 1;
}
int main () {
	int sayi;
	FILE *dosya1,*dosya2;
	
	dosya1 = fopen("sayilar.txt","r");
	dosya2 = fopen("sayilar2.txt","w");
	
	if(dosya1==NULL && dosya2==NULL){
		printf("Islem basarisiz");
	}
	
	else{
		printf("Dosya olusturuldu");
		while(fscanf(dosya1,"%d",&sayi) != EOF) {
			if(asal(sayi)){
				fprintf(dosya2,"%d\n",sayi);
			}
		}
	}
	fclose(dosya1);
	fclose(dosya2);
	
	
	return 0;
}
