#include<stdio.h>
#include<math.h>

int main(){
	
	int num,potencia;
	
	printf("Digite um número : ");
	scanf("%d",&num);
	
	#função (pow) faz potencia.
	potencia = pow(num,2);
	
	printf("Resultado %d\n",potencia);
	return 0;

}
