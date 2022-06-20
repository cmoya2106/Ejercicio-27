//Manuel Rodriguez Carlos moya

#include<stdio.h>

int main(){
	int numero, i;
	
	printf("Ingrese un numero:");
	scanf("%i",&numero);
	
	for (i = 1; i< numero; i++){
		
		if ( numero%i == 0){
			
			printf("%i \n",i);
		}
			
	}
	
	return 0;
}