#include<stdio.h>

void degistir(int a,int b) {
	
	
	int gecici=a;
	a=b;
	b=gecici;
	
	printf("a =%d  b=%d\n",a,b);
	
	
	
	
}



int main () {
	
	int x = 5;
	int y = 10;
	
	
	degistir(x,y);
	
	printf("x : %d y : %d",x,y);
	
	
	/*
     Why x and y didn't change place 
	 
	 becasue:
	 The variable inside the function and the variables outside are not the same, so we need to write the addresses of the variables outside the function,
	 so ampersand should be added to the beginning of the variables in the function inside the int main	
	
	*/
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
