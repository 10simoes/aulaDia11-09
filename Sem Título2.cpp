#include<stdio.h>

main(){
	
	double numero;
	
	printf("\n Digite um numero por favor");
	scanf("%lf",&numero);
	
	if(numero == 5){
		
		printf("\n parabens, seu numero e igual a cinco");
	}else if(numero == 200){
		printf("\n parabens, seu numero e igual a duzentos");
	}else if(numero == 400){
		printf("\n parabens, seu numero e igual a quatrocentos");
	}else if(numero == 500 && 1000){
		printf("\n parabens, seu numero e igual ou maior a 500 e menor ou igual a 1000");
	}else{
		printf("Infelizmente seu numero nao e compativel");
	}
}
