#include<stdio.h>
#define MAX 50

void selectionsort(int arr[],int size){
	
	int i,j;
	int minimumindex;
	
	for(i=0 ; i < size ; i++) {
		
		minimumindex=i;
		
		for(j = i ; j < size ; j++){
			
			if (arr[j] < arr[minimumindex]) {
				minimumindex = j ;
			}
		}
		
		int temp = arr[i];
		arr[i] = arr[minimumindex];
		arr[minimumindex] = temp;	
		
	}
}

int mani () {
	
	int array[MAX],size;
	int i;
	
	printf("Arrayin eleman sayisini giriniz = ");
	scanf("%d",&size);
	
	
	for(i=0 ; i < size ; i++) {
		
		
		printf("Elemanlari giriniz = ");
		scanf("%d",&array[i]);
	
	}
	
	selectionsort(array,size);
	
	for(i=0 ; i<size ; i++) {
		
		printf(" %d",array[i]);	
	}
	
	return 0;
}





