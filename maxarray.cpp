#include<stdio.h> 

int max (int a[], int uzunluk) {
	
	int maks= a[0];
	
	int i;
	
	for(i=1 ; i < uzunluk ; i++) {
		
		if (a[i] > maks) {
			
			 maks = a[i]; 
			
		}
		
		
	}
 
 return maks;	
  	
}



int main () {
	
	int array[5] = {1,83,926,618,31};
	
	int maks = max(array,5);
	
	printf("Arrayin en büyük elamaný = %d",maks);
	
	
	
	return 0;
}
