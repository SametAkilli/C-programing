#include<stdio.h>
#include<string.h>
#define MAX 50


int main () {
	
	char veri[MAX];
	int uzunluk =strlen(veri);
	int i;
	
	FILE *filep = fopen("example.txt","a");
	
	if (filep == NULL){
		
		printf("Dosya olusturulamadi");
	}
	
	else {
		for (i=0 ; i<uzunluk ; i++){
			scanf("%c",veri[i]);
		}
		for (i=0 ; i<uzunluk ; i++){
			fputc(veri[i],filep);
			printf("Yazilan karakter =%c\n",veri[i]);
		
	}
	printf("Dosya basariyla yazdirildi");
	fclose(filep);
}
	
	
	return 0;
}
