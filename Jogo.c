#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	
	srand(time(NULL));
	
	do{
		int i,v,l,cont=0;
		printf("		ROLETA ALTOMATICA!!!");printf("						Score(%d)\n\n",cont);
	
		printf("Tente a sorte: ");
		scanf("%d",&v);
		
	
		l=rand()%10;
		
		for(i=0; i<1; i++){
			printf("\n%d\n",l);
		}
		  
		if(v==l){
			cont++;
			system("cls");
			
			do{
				int i,v,l,cont;
				printf("		ROLETA ALTOMATICA!!!						Score(%d)\n\n",cont);
	
				printf("Tente a sorte: ");
				scanf("%d",&v);
		
				l=rand()%10;
		
				for(i=0; i<1; i++){
					printf("\n%d\n",l);
				}
				
				if(v==l){
					cont++;
					system("cls");					
				}
				
				else{
					printf("Perdeu!!!");
				}
				
			}while(1==1);		
		}
			
		else{
			printf("perdeu!!\n");
			
			do{
				int i,v,l,cont;
				printf("		ROLETA ALTOMATICA!!!						Score(%d)\n\n",cont);
	
				printf("Tente a sorte: ");
				scanf("%d",&v);
		
				l=rand()%10;
		
				for(i=0; i<1; i++){
					printf("\n%d\n",l);
				}
	  			
				
				if(v==l){
					printf("ganhou\n");
					cont++;
					system("cls");
				}
				
				else{
					printf("Perdeu!!!");
				}
			}while(1==1);		
		}
	}while(1==1);
}

