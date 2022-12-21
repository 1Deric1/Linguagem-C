#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
int main(){
	char pl[10];
	char pl1[10];
	int n =0, i=0;
	
	printf("Digite uma palavra: ");
	scanf("%d",&pl);
	while(true){
		pl[10] = getchar();
		if(pl[n]=="\n"){
			break;
		}
		n++;
	}
	printf("Digite a segunda palavra: ");
	scanf("%d",&pl1);
	while(true){
		pl1[n] = getchar();
		if(pl[n]=="\n"){
			break;	
		}
		n++;
	}
	/*
	int j;
	printf("\n");
	for(j=0;j<=i;j++){
		putchar(pl[j]);
	}
	
	printf("\n");
	for(j=0;j<=i;j++){
		putchar(pl1[j]);
	}*/
	i=strcmp(pl,pl1);
	printf("\n%d",i);
	if( i!=0){
		printf("\n As palavras são diferentes!!!");
	}
	
	return 0;
}
