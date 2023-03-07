#include<stdio.h>
#include<string.h>
#define MAX 50
int main () {
	
	char veri[MAX] = "Example event one";
	int size = strlen(veri);
	int i;
	
	FILE *filep = fopen("exampletwo.txt","w");
	
	if(filep == NULL){
		printf("Unsucsesful event");
	}
	
	
	else{
		
		for(i=0 ; i<size ; i++){
			
			fputc(veri[i],filep);
			printf("Enthered character is = %c\n",veri[i]);
			
		}
		fclose(filep);
		
	}
	
	
	
	
	return 0;
}
