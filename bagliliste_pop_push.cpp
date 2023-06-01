#include<stdio.h>
#include<stdlib.h>

struct Stu{
	int ogrnumb;
	int vize;
	int final;
	struct Stu *next;
};


struct Stu *Push(struct Stu *top , struct Stu ogrnumb , struct Stu vize , struct Stu final){
		
		struct Stu *yeni =(struct Stu*)malloc(1*sizeof(struct Stu*));
		
		yeni->ogrnumb = ogrnumb;
		yeni->vize = vize;
		yeni->final = final;
		yeni->next=NULL;
		if(top==NULL){
			top=yeni;
			return top;
		}
		else{
			
			yeni->next=top;
			return new;
			
		}
	}
	
	struct Stu *Pop(struct Stu *top , struct Stu *ogrnumb , struct Stu *vize, struct Stu *final){
		if(top==NULL){
			*ogrnumb=NULL;
			*vize=NULL;
			*final=NULL;
			return top;
		}
		else{
			struct Stu gecici*;
			gecici=top;
			
			*ogrnumb-> gecici = ogrnumb;
			*vize-> gecici = vize;
			*final-> gecici =final;
			
			top= top->next;
			free(gecici);
			return top;
		}
	}

int main (void) {
	
	struct Stu *top=NULL;
	int ogrnumb,vize,final,i;
	
	for(i=0 ; i<3 ; i++){
		
		printf("%d. student -----------\n",i+1);
		printf("Vize =");
		scanf("%d",&vize);
		printf("Final =");
		scanf("%d",&final);
		
		top=Push(top,i+1,vize,final);
	}
	
	printf("\n\n");
	
	for(i=0 ; i<3 ; i++){
		
		top Pop(top,ogrnumb,vize,final);
		printf("ogr : %d vize/final : %d/%d"ogrnumb,vize,final);
		
	}
	
	
	return 0;
}
