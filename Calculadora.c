#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>


main (){
	// Declara��o de Variaveis
	float valor1, valor2; 
	float soma, subtracao, multiplicacao, divisao;
	
	// Para normalizar a acentua��o e o uso de �
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira o primeiro valor:\n");
	scanf("%f",&valor1);
	printf("Insira o segundo valor: \n");
	scanf("%f",&valor2);
	if(valor1<0||valor2<0){
		printf("ATEN��O: Valores inferiores a zero encontrados.\n\n");
		// Soma 
		printf("\t O somat�rio equivale a: %f\n",(valor1+valor2));
		
		// Subtra��o
		printf("\t A subtra��o equivale a: %f \n",(valor1-valor2));
		
		// Multiplica��o 
		printf("\t A multiplica��o equivale a: %f \n",(valor1*valor2));
		
		// Divis�o 
		printf("\t A divis�o equivale a: %f \n",(valor1/valor2));					
	}
	else{
		// Soma 
		printf("\t O somat�rio equivale a: %f\n",(valor1+valor2));
		
		// Subtra��o
		printf("\t A subtra��o equivale a: %f \n",(valor1-valor2));
		
		// Multiplica��o 
		printf("\t A multiplica��o equivale a: %f \n",(valor1*valor2));
		
		// Divis�o 
		printf("\t A divis�o equivale a: %f \n",(valor1/valor2));			
	}
}
