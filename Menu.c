int a,b,r,op;
int trans(){
	int op3;
	float c,LC;
	char s[3];
	float d;
	
	setlocale(LC,"Portuguese");
	printf("				1 - Calculo		0 - Sair\n");
	printf("				Digite uma opcao: ");
	scanf("%d",&op3);
	
	printf("				Um dólar custa 5.02 reais brasileiros sabendo disto digite sua quantidade em dolar\n");
	
	printf("				Digite seu valor dolar: "); 
	scanf("%f",&c);
	
	printf("				Digite o simbolo da moeda: ");
	scanf("%s",&s);
	
	switch(op3){
		case 0:
			break;
			system("cls");
			
		case 1:
			
			d = 4.76;
			c = c*d; 
			printf("				Voce tem: %.2f%s",c,s);
			break;
			system("cls");
	}
	

}

int calculadora(){
	do{
		
		printf("				\n       				Funcao Calculadora.......................................\n\n");
	
		printf("				1 - Soma		2 - Subtracao\n");
		printf("				3 - Multiplicacao	4 - Divisao		0 - saida\n\n");
	
		printf("				Digite sua opcao: ");
		scanf("%d",&op);
		
		if(op==0){
			system("cls");
			printf("Bye");
			break;
		}
	
		printf("				Digite um valor: ");
		scanf("%d",&a);
	
		printf("				Digite outro valor: ");
		scanf("%d",&b);
	
		printf("\n				Calculando...............................................\n\n");
	
		
		switch(op){
			
			case 1:
				printf("				R = %d+%d=%d",a,b,a+b);
				break;
				system("cls");
			
			case 2:
				printf("				R = %d-%d=%d",a,b,a-b);
				break;
				system("cls");
			
			case 3:
				printf("				R = %d*%d=%d",a,b,a*b);
				break;
				system("cls");
			
			case 4:
				printf("				R = %d/%d=%d",a,b,a/b);
				break;
				system("cls");
				
			default:
				printf("Error");
				break;
				system("cls");
		}
		
	}while(op!=0);
}

int op1;
float p,kg;
int imc(){
		
	do{
		
				printf("				\n       				Funcao Imc.......................................\n\n");
	
			printf("				1 - calculo do imc		0 - saida\n");
			printf("				Digite a opcao:	");
			scanf("%d",&op1);
		
			printf("				Digite seu peso kg: ");
			scanf("%f",&p);
		
			printf("				Digite sua altura em m: ");
			scanf("%f",&kg);
		
			if(op1==0){
				system("cls");
					printf("\n					Bye			");
				break;
			}
		
			switch(op1){				
				case 1:
						printf("				Seu imc eh:%.2f ",p/(kg*kg));
					break;
					system("cls");
				default:
					printf("Error");
		}
		
	}while(op1!=0);
}

int quad(){
	
	int op2,b,h;
	char LC;
	
	printf("				1 - Multiplicar base *altura		0 - sair\n");
	printf("				.....................................................");
		setlocale(LC,"Portuguese");
	printf("\n				Digite uma opção: ");
	scanf("%d",&op2);
	
	printf("				\n				Digite a area da base: ");
	scanf("%d",&b);
	
	printf("				Digite a area da altura: ");
	scanf("%d",&h);
	
	switch(op2){
		case 1:
			printf("				A Base:%d x Altura:%d = %d",b,h,b*h);
			break;
		default:
			printf("\n	Error	");
			break;
	}
}

int main(){
	char CL;
	int op;
	do{
		setlocale(CL,"Portuguese");
		printf("						\n\n                                                MENU DE OPCOES\n\n\n\n				");
		
		printf("1 - Calculadora				2 - Calcula  o IMC\n");
		printf("				3 - Calcular a Base e altura 	 	0 - sair\n");
		printf("				4 - Dólar para real");
		printf("													5- Jogo da Roleta automatica");
		printf("\n				.....................................................\n");
		printf("				Digite uma opção: ");
		scanf("%d",&op);
		
		switch(op){
			case 1:
				calculadora();
				break;
				system("cls");
			case 2:
				imc();
				break;
				system("cls");
			case 3:
				quad();
				break;
				system("cls");
			case 4:
				trans();
				break;
				system("cls");
			case 5:
				game();
				break;
				system("cls");
		}
		
	}while(op!=0);
	return 0;
}
