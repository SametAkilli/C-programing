#include<stdio.h>

void asal(int n){
	int i;
	int count=0;
	for(i=2 ; i<n ; i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==0){
		printf("Sayi asaldir");
	}
	else{
		printf("Sayi asal degildir");
	}
}

int main () {
	
	int n;
	printf("Bir sayi giriniz =");
	scanf("%d",&n);
	
	asal(n);
	
	
	return 0;
}
