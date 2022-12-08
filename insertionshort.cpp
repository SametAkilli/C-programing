#include<stdio.h>
#define MAX 50

void insertionsort(int array[], int size){
	
	
	int i,j;
	int temp;
	
	for(i=1; i < size ; i++){
		
        temp = array[i];
		j = i-1;
		
		while(j >= 0 && array[j] > temp){
			
			array[j+1]=array[j];
			j--;
			
		}
		
		array[j+1]=temp;	
	}
}

int main () {
	
	int dizi[MAX],size;
	int i;
	
	printf("Arrayin eleman sayisini giriniz = ");
	scanf("%d",&size);
	
	
	for (i=0 ; i < size ; i++){
		
		printf("Arrayin elemanlarini giriniz = ");
		scanf("%d",&dizi[i]);
	}
	
	
	
	
	insertionsort(dizi,size);
	
	for(i=0 ; i < size ; i++){
		
		printf(" %d",dizi[i]);
		
	}
	

	return 0;
}
