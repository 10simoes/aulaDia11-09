#include<stdio.h>

main(){
	
	int A = 105,B = 15,C = 280,D = 255;
	
	if(A > B && A > C && A > D){
		printf("\nA � o maior");
		if(B<C && B<D){
			printf("\nB � o menor");
		}else if(C < D){
			printf("\nC � o menor");
		}else{
			printf("\n D � o menor");
		}
	}else if(B > A && B > C && B > D){
		printf("\n B � o maior");
		if(A < C && A < D){
			
		}else if(C < B){
			printf("\nC � o menor");
		}else{
			printf("\nD � o menor");
		}
	}else if (C > A && C > B && C > D){
		printf("\n C � o maior");
			if(A < B && A < D){
			printf("A � o menor");
		}else if(C < D){
			printf("\nC � o menor");
		}else{
			printf("\nD � o menor");
		
	}
	}else{
		printf("\n D � o maior");
			if(A < B && A < C){
			printf("A � o menor");
		}else if(B < C){
			printf("\nB � o menor");
		}else{
			printf("\nC � o menor");
	}
	
	
}
}
