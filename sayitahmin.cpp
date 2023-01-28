#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main () {
	
	int n,i;
	int count=0;
	srand(time(NULL));
	n=rand() %100;
	
	while(1>0){
		printf("\nBir sayi giriniz =");
		scanf("%d",&i);
		
		if(i==n){
			printf("Tebrikler dogru tahmin ettiniz sayi =%d",i);
			count++;
			break;
	
		}
		
		else if(i>n){
			printf("Daha kucuk bir sayi giriniz");
			count++;
		}
		else{
			printf("Daha buyuk bir sayi giriniz");
			count++;
		}
		
	}
	printf("\n%d inci tahminde dogru sonuca ulastiniz",count);
	
	
	return 0;
}
