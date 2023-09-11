#include<stdio.h>

main(){
	
	int num = 100;
	int contador;
	int res;
	
	for(contador = 0; contador <=10; contador++){
		
		res= num * contador;
		
		printf("\n %d x %d = %d",num, contador, res);
	}
	
	printf("\nFim do loop");
}
