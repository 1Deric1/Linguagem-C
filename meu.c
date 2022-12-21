#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
int t[5][2],l,c;	

int User(){			
	for(l=0;l<5;l++){
		
		printf("Digite um id: ");
		scanf("%d",&t[l][0]);
		printf("Digite um salário: ");
		scanf("%d",&t[l][1]);
	}
	
	printf("\nID	SALÁRIO\n");
	for(l=0;l<5;l++){
		printf("%d	%d\n",t[l][0],t[l][1]);
	}
	
}

int Alterar(){
	int x,alterar;
	
	printf("Digite o valor a ser substituído: ");
	scanf("%d",&x);
	
	printf("Digite um número: ");
	scanf("%d",&alterar);
	for(l=0;l<5;l++){
		for(c=0;c<5;c++){
			if(t[l][c<x]){
				t[l][c] = alterar;
			}
		
		}	
		
	}
}


int main(){
	 
	char LP;
	int op;
	setlocale(LP,"");
	
	do{
	printf("			\n			MENU\n\n		");
	printf("0-SAIR	1-ID E SALÁRIO\n");
	printf("		2-ALTERAR SALARIO OU ID\n\n");
	
	printf("		Digite um número: ");
	scanf("%d",&op);

	
		switch(op){
			case 0:
				printf("			Backing\n");
				break;
				system("cls");
		
			case 1:
				User();
				break;
				system("cls");
		
			case 2:
				Alterar();
				break;
				system("cls");
			
			default:
				printf("Error tente novamente");
				break;
			system("cls");
			
			
		}
		
	}while(op!=0);
	return 0;
}

