#include<stdio.h>


int main () {
	
	int m;
	
	printf("Enter the mass =");
	scanf("%d",&m);
	printf("\n\n\n");
	
	printf("1-)Mercury = %.2f\n",m* 3.7);
	printf("2-)Venus = %.2f\n",m* 8.87);
	printf("3-)Earth = %.2f\n",m* 9.81);
	printf("4-)Anthem = %.2f\n",m* 3.7);
	printf("5-)Jupiter = %.2f\n",m* 25.8);
	printf("6-)Saturn = %.2f\n",m* 10.44);
	printf("7-)Uranus = %.2f\n",m* 8.69);
	printf("8-)Neptune = %.2f",m* 11.15);
	
	return 0;
}
