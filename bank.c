#include<stdio.h>

int main () {
	
	int islem;
	int bakiye = 1200;
	int tutar;
	
	printf("İslemler\n1: Para cekme\n2: Para yatirma\n3:Havale\n4: Bakiye sorgulama\n5: Kart iade \n\n\n ");
	
	printf("İsleminizi seciniz=");
	scanf("%d",&islem);
	
	
	switch(islem) {
		
		
	case 1:
		printf("Bakiyeniz %d\n",bakiye);
		printf("Cekilecek tutar:");
		scanf("%d",&tutar);
		if (tutar > bakiye) {
			printf("Yetersiz bakiye\n");
		}
		bakiye -= tutar;
		printf("Bakiyeniz %d\n",bakiye);
		break;
		
	case 2:
		printf("Bakiyeniz %d\n",bakiye);
		printf("Yatirilacak tutar:");
		scanf("%d",&tutar);
		bakiye += tutar;
		printf("Bakiyeniz %d\n",bakiye);
		break;
	
	case 3:
		printf("Bakiyeniz %d\n",bakiye);
		printf("Havale edilecek tutar:");
		scanf("%d",&tutar);
		if (tutar > bakiye){
			printf("Yetersiz bakiye");
		}
		bakiye -= tutar;
		printf("Gönderme islemi gerceklesti yeni bakiyeniz %d\n =",bakiye);
		break;
		
	
	case 4:
		
	printf("Bakiyeniz %d =",bakiye);
	break;
	case 5:
	printf("Kartınız iade edildi iyi gunler dileriz.");
	break;
	default:
		printf("HATA");
		
	}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;
}
