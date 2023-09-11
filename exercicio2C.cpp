#include<stdio.h>

main(){
	
	int A = 105,B = 15,C = 280,D = 255;
	
	if(A > B && A > C && A > D){
		printf("\nA é o maior");
		if(B<C && B<D){
			printf("\nB é o menor");
		}else if(C < D){
			printf("\nC é o menor");
		}else{
			printf("\n D é o menor");
		}
	}else if(B > A && B > C && B > D){
		printf("\n B é o maior");
		if(A < C && A < D){
			
		}else if(C < B){
			printf("\nC é o menor");
		}else{
			printf("\nD é o menor");
		}
	}else if (C > A && C > B && C > D){
		printf("\n C é o maior");
			if(A < B && A < D){
			printf("A é o menor");
		}else if(C < D){
			printf("\nC é o menor");
		}else{
			printf("\nD é o menor");
		
	}
	}else{
		printf("\n D é o maior");
			if(A < B && A < C){
			printf("A é o menor");
		}else if(B < C){
			printf("\nB é o menor");
		}else{
			printf("\nC é o menor");
	}
	
	
}
}
