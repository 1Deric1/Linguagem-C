#include<stdio.h>
#include<locale.h>
	char pt;
	int l,c,t[5][5];
int user (){
	
	setlocale(pt,"");

	for(l=0;l<5;l++){
		
		printf("\n				Digite um id: ");
		scanf("%d",&t[l][0]);
		
		printf("				Digite um salário: ");
		scanf("%d",&t[l][1]);
	}
	printf("\n				Id		Salário\n");
	for(l=0;l<5;l++){
		printf("				%d		%d\n",t[l][0],t[l][1]);
	}
	
}
int alternar(){
	int alt,aux,aux2,alt2;
	printf("Digite o valor do id que dejesa alternar: ");		
	scanf("%d",&alt);
	
	for(l=0;l<5;l++){
	
			if(alt>t[l][0]){
				aux=t[l][0];
				printf("			Valor na posição [%d][%d]:%d\n", l,c,t[l][0]);
						
						printf("			Digite o novo valor para a posição [%d][%d]: ",l,0);
						scanf("%d", &t[l][0]);
						
						printf("		Novo valor na posição [%d][%d]:%d\n",l,c,t[l][0]);
						
			}	
		}
		
		printf("Digite o valor do id que dejesa alternar: ");		
		scanf("%d",&alt2);
		
		for(l=0;l<5;l++){
	
			if(alt2>t[l][1]){
				aux2=t[l][1];
				printf("			Valor na posição [%d][%d]:%d\n", l,c,t[l][1]);
						
						printf("			Digite o novo valor para a posição [%d][%d]: ",l,1);
						scanf("%d", &t[l][1]);
						
						printf("		Novo valor na posição [%d][%d]:%d\n",l,c,t[l][1]);
						
			}	
			
			
		
		}
		
	}

int exibir(){
			printf("\n				Id		Salário\n");
	for(l=0;l<5;l++){
		printf("				%d		%d\n",t[l][0],t[l][1]);
	}
}

int op;
int main(){
	setlocale(pt,"");
	printf("				\n					Menu\n	");
	printf("\n				1- id 		2-sair	\n");
	do{
	
		printf("\n				Digite um número: ");
		scanf("%d",&op);
		
		switch(op){
			case 0:
				break;
				system("cls");
			
			case 1:
				user();
				break;
				system("cls");
			case 2:
				alternar();
				break;
				system("cls");
			case 3:
				exibir();
				break;
				system("cls");
			
			default:
				printf("\n				Erroor!!!!!!\n");
				printf("				Digite um número válido!!\n");
				break;
				system("cls");
		
		}
	}while(0==0);
	
	return 0;
}
