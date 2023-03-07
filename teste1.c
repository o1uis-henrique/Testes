#include<stdio.h> 

int main() {

	int i, n ,t1 = 0, t2 = 1 , proxTermo;
	
	printf("Quantidade de termos:  ");
	scanf("%i", &n);
	
	printf("SEQUÊNCIA DE FIBONACCI \n  ");
	
	
	for (i = 1; i <= n; ++i) {  
		printf("%i, ", t1);;
		
		proxTermo = t1 + t2; 
		t1 = t2;
		t2 = proxTermo;
				
		}

   return 0;
}