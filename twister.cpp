#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//4  yeþil sarý mavi kýrmýzý


int main () {
	
	int sayi,j,sayi1,sayi2;
	char renk;
	srand(time(0));
	
	while(1>0){
		printf("Devam etmek icin 1 e basin :");
		scanf("%d",&j);
		if(j==1){
			sayi1= rand() %4 +1;
			sayi2= rand() %4 +1;
			if(sayi2==1){
			
				printf("\033[0;32m");
				printf("yeþil renk \n");
			}
			else if(sayi2==2){
				
				printf("\033[0;33m");
				printf("sari renk \n");

			}
			else if(sayi2==3){
				
				printf("\033[0;34m");
				printf("mavi renk \n");

			}
			else if(sayi2==4){
				
				printf("\033[0;31m");
				printf("kirmizi renk \n");

			}
			printf("%d. kutu \n",sayi1);
		}
	}
	
	
	return 0;
}
