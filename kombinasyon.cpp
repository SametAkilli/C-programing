#include<stdio.h>

int fakt(int n){
	
	int i;
	int carpim=1;
	for(i=1 ; i<=n ; i++){
		carpim *= i;
	}
	return carpim;
}





int main () {
	
	int r,n;
	int komb;
	printf("Bir sayi giriniz ve o sayinin kacli kombinasyonunu alacaginizi giriniz =");
	scanf("%d %d",&n,&r);
	
	komb=fakt(n)/(fakt(r)*fakt(n-r));
	printf("%d",komb);
	
	
	
	
	return 0;
}
