#include<stdio.h>

main(){
	
	int num1, num2, soma, opcao;
	
	
	do{
		printf("\nDigite os numeros: ");
		scanf("%d %d",&num1, &num2);
		
		soma = num1 + num2;
		
		printf("\n Soma: %d",soma);
		
		printf("\n Deseja repetir a operacao? 0-Nao 1-Sim:");
		scanf("%d",&opcao);
		
		
	
	
	
	
	
	
	}while(opcao != 0);
	
	printf("\n Operacao encerrada");
	
}
