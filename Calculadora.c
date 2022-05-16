#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>


main (){
	// Declaração de Variaveis
	float valor1, valor2; 
	float soma, subtracao, multiplicacao, divisao;
	
	// Para normalizar a acentuação e o uso de ç
	setlocale(LC_ALL, "Portuguese");
	
	#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>


main (){
	// Declaração de Variaveis
	float valor1, valor2; 
	float soma, subtracao, multiplicacao, divisao;
	
	// Para normalizar a acentuação e o uso de ç
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira o primeiro valor:\n");
	scanf("%f",&valor1);
	printf("Insira o segundo valor: \n");
	scanf("%f",&valor2);
	if(valor1<0||valor2<0){
		printf("ATENÇÃO: Valores inferiores a zero encontrados.\n\n");				
	}

	// Soma 
	printf("\t O somatório equivale a: %f\n",(valor1+valor2));
	
	// Subtração
	printf("\t A subtração equivale a: %f \n",(valor1-valor2));
	
	// Multiplicação 
	printf("\t A multiplicação equivale a: %f \n",(valor1*valor2));
	
	// Divisão 
	printf("\t A divisão equivale a: %f \n",(valor1/valor2));			
	
}
