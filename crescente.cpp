#include<stdio.h>

main(){
	
	
	int num, i;
	
	printf("\n Numero inteiro positivo: ");
	scanf("%d",&num);
	
	
	
	if(num >= 0){
		
		i=0;
		
		while(i<=num){
			printf("\n%d",i);
			i++;
		}
		
	}else{
		printf("\n Digitedo nao e um inteiro positivo");
	}
}
