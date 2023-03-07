#include<stdio.h>
#include<string.h>
#define MAX 120
int main () {
	
	
	FILE *filep; 
	char data[MAX];
    filep = fopen("yourwrite.txt","a");
    
    
	if(filep == NULL){
		printf("We can not created this file");
	}
	
	else{
	
		printf("Write the text =");
	    fgets(data,MAX,stdin);
		
		fputs (data,filep);
		printf("excelent");
		
		fclose(filep);
	}
	
	
	return 0;
}
