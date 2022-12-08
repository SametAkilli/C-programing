#include<stdio.h>
#define MAX 50

/*
Ýntin deðer aralýðý -2147483648 ile 2147483647 arasýndadýr.
*/


void bubbleshort (int arr[] ,int size) {
	
	
	int i,j;
	
	for (i=0 ; i< size ; i++){
		
		for(j=1 ; j < size - i ; j++){
			
			if(arr[j-1] > arr[j]){
				int temp = arr[j];
				arr[j]= arr[j-1];
				arr[j-1]= temp;
			}
		}
	}
}
int main () {
	
	int array[MAX],size;
	int i;
	printf("Dizi kac elemanli=");
	scanf("%d",&size);
	
	for (i=0 ; i < size ; i++){
		
		printf("Arrayin elemanlarini giriniz =");
		scanf("%d",&array[i]);
		
	}
	
	bubbleshort(array,size);
	
	for (i=0 ; i < size ; i++){
		
		
		printf(" %d",array[i]);
}
	return 0;
	}
