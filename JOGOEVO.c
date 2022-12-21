#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int cont,cont2=3;
int main(void){
	
	srand(time(NULL));
	
	do{
		int i,v,l;
		printf("		ROLETA ALTOMATICA!!!");printf("						Score(%d)\n\n",cont);
		
		printf("Chance:%d\n",cont2);
		
		printf("Tente a sorte: ");
		scanf("%d",&v);
		
	
		l=rand()%10;
		
		for(i=0; i<1; i++){
			printf("\n%d\n",l);
		}
		
		
		if(v!=l && l!=v){
			cont2--;
			
			if(cont2 == 0){
				printf("Game Over\n");
				break;
			}
		}  
		
		if(v==l){
			cont2++;
			cont++;
			
		
		if(v!=l && l!=v){
		
			cont2--;
			if(cont2 == 0){
				printf("Game Over\n");
				break;
			}
		}
			
			
				int i,v,l;
				printf("		ROLETA ALTOMATICA!!!						Score(%d)\n\n",cont);
	
				printf("Tente a sorte: ");
				scanf("%d",&v);
		
				l=rand()%10;
		
				for(i=0; i<1; i++){
					printf("\n%d\n",l);
				}
				
				if(v!=l && l!=v){
					printf("Perdeu!!!");
					cont2--;
					if(cont2 == 0){
						printf("Game Over\n");
						break;
					}
				}
				
				if(v==l){
					cont++;
					cont2++;					
				}
				
				if(v!=l && l!=v){
					printf("Perdeu!!!");
					cont2--;
					if(cont2 == 0){
						printf("Game Over\n");
						break;
					}
				}
		}
	
	}while(1==1);		
}
	

