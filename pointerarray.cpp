#include<stdio.h>





int main () {
	
	
	char *gunler[7] = {"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
   

	int a;
    
    printf("Haftanin kacinci gununu istediginizi giriniz=");
    scanf("%d",&a);
    
	printf("%s",gunler[a-1]);

	
	
	return 0;
}


	
	/*
	
	int a;
	
    printf ("Haftanin kacinci gununu istediginizi giriniz");
    scanf("%d",a);
    
    
    if (a = 1) {
    	
    	printf("%s",gunler[0]);
    	
    	if (a = 2) {
    		
    		printf("%s",gunler[1]);
    		
    		if (a = 3){
    			printf("%s",gunler[2]);
    			
    			if (a = 4) {
    				printf("%s",gunler[3]);
    				if (a = 5) {
    					printf("%s",gunler[4]);
    					if (a = 6) {
    						printf("%s",gunler[5]);
    						if (a = 7) {
    							printf("%s",gunler[6]);
							}
						}
					}
    				
				}
			}
		}
	}
	
	else {
		printf("HATA");
	}
	*/
	
	
