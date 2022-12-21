/*Desenvolver um programa que possua um menu principal com as seguintes opções:
1 - criar matriz de 5 x 5 que será preenchida por valores aleatórios.
2 - exibir a matriz
3 - alterar todos os valores que sejam menores que um determinado valor informado por um outro valor informado.
4 - alterar o último valor informado
5 - exibir o maior e o menor valor da matriz.
0 - fechar o programa.
*/
#include <stdio.h>
#include <locale.h>

void funcAdicionar();
void funcMostrar();
void funcAlterarMaior();
void funcAlterarUltimo();
void funcMaiorMenor();

int opcao, maior=0, menor=0,i,j,mat[5][5], valorAlterar,aux=0; 

void funcAdicionar(){
		for(i=0;i<5;i++){
				for(j=0;j<5;j++){
					mat[i][j]=rand ();
			//	printf("Digite um valor para a matriz na posição [%d][%d]: ", i,j);
			//	scanf("%d", &mat[i][j]);
			}
		}
}

void funcMostrar(){
	for(i=0;i<5;i++){
			printf("\n");
		for(j=0;j<5;j++){
		  printf(" [%d][%d]: %d     ", i,j, mat[i][j]);
		}
	}
}

void funcAlterarMaior(){
		printf("Digite um valor maior que o valor que quer alterar:");
			scanf("%d", &valorAlterar);
			for(i=0;i<5;i++){
				for(j=0;j<5;j++){
					if(valorAlterar > mat[i][j]){
						aux=mat[i][j];
						printf("valor na posição [%d][%d]:%d\n", i,j,mat[i][j]);
						printf("Digite o novo valor para a posição [%d][%d]: ", i, j);
						scanf("%d", &mat[i][j]);
						printf("Novo valor na posição [%d][%d]:%d\n", i,j,mat[i][j]);
					}
				}
			}
	funcMaiorMenor();
}

void funcAlterarUltimo(){
	printf("valor na posição [4][4]:%d\n",mat[4][4]);
	printf("\nDigite o novo valor para a posição [4][4]: ");
	scanf("%d", &mat[4][4]);
	printf("Novo valor na posição [4][4]:%d\n",mat[4][4]);
}
void funcMaiorMenor(){
	if(menor==aux){
		menor=mat[i][j];
	}
	if(maior==aux){
	maior=mat[i][j];
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i == 0 && j == 0) menor = mat[i][j];
			if(mat[i][j] > maior){
			maior = mat[i][j];
			}
			if(mat[i][j] < menor){
			menor = mat[i][j];
		}
		}
	}
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	do{
	printf("\nBem vindo ao menu da minha empresa. Em que podemos ajudar?\n\n1 - criar matriz de 5 x 5 que será preenchida por valores aleatórios.\n2 - exibir a matriz\n3 - alterar todos os valores que sejam menores que um determinado valor informado por um outro valor informado.\n4 - alterar o último valor informado\n5 - exibir o maior e o menor valor da matriz.\n0 - fechar o programa.");
	printf("\nDigite a opção: ");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
			system("cls");
			funcAdicionar();
			system("cls");
			break;
			case 2:
			system("cls");
			funcMostrar();
			break;
			case 3:
			system("cls");
			funcAlterarMaior();
			break;
			
			case 4:
			system("cls");
			funcAlterarUltimo();
			break;
			case 5:
			system("cls");
			funcMaiorMenor();
			printf("\nO maior elemento: %d\n", maior);
			printf("O menor elemento: %d\n", menor);
			break;
			case 0:
			system("cls");
			printf("Programa encerrado com sucesso!!");
			return 0;
			default:
			printf("ERROR");
			break;
		}
		
	} while(2==2);
}
