#include<stdio.h>

 main(){
	float A, B, C;
	float delta, X1,X2;
	
	printf("\nDigite o coeficiente de A: ");
	scanf("%f",&A);
	
		
	printf("\nDigite o coeficiente de B: ");
	scanf("%f",&B);
	
		
	printf("\nDigite o coeficiente de C: ");
	scanf("%f",&C);
	
	delta = B * B - 4 * A * C;
	
	if(A==0){
		printf("\n nao e uma equacao de segundo grau.");
		
	}
	if(delta < 0){
		printf("\n nao tem raiz.");
	}else if(delta==0){
		X1 = -B / (2 * A);
		printf("\n Unica raiz: %.2f\n",X1);
	}else{
		X1 = (-B + srqt(delta) / (2 * A);
		X2 = (-B - srqt(delta) / (2 * A);
		printf("raizes reais: %.2f e %.2f",X1,X2);
	}

}
