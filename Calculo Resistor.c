#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//variaveis globais
float Vin = 0.0,
	  Vled = 0.0,
	  Iled = 0.0,
	  Calc = 0.0;
bool parar = false;
int resp = 0;

int main(int argc, char *argv[])
{
	do {
		// texto apresentação
	printf("------------------------\n");
	printf(" - CALCULO DE LED - \n");
	printf("------------------------\n");
	printf("Autor: Erik Makiak\n");
	printf("Empresa: X\n");
	printf("------------------------\n");
	
	// recebendo valores das variaveis
	printf("Digite o valor de Vin em volts: ");
	scanf("%f",&Vin);
	printf("\n");
	
	printf("Digite o valor de Vled em volts: ");
	scanf("%f",&Vled);
	printf("\n");
	
	printf("Digite o valor de Iled em amperes: ");
	scanf("%f",&Iled);
	printf("\n");
	
	// calculo da formula utilizando as variaveis
	Calc = (Vin-Vled)/Iled;
	
	// respostas
	printf("------------------------\n");
	printf("Vin = %.2f\n",Vin);
	printf("Vled = %.2f\n",Vled);
	printf("Iled = %.2f\n",Iled);
	printf("------------------------\n");
	printf("O resistor para o LED tem o valor de %.2f Ohms\n",Calc);
	printf("------------------------\n");
	
	printf("Deseja realizar um novo calculo?\n");
	printf("1- Sim\n");
	printf("2- Não\n");
	printf("------------------------\n");
	printf("Resposta: ");
	scanf("%i",&resp);
	
	// tratando respostas
	if (resp == 2){
		parar = true;
	}
	else if (resp != 1){
		printf("Resposta Invalida! Encerrando Programa...");
		parar = true;
	}
	
	} while (parar == false);
	system("PAUSE");
	return 0;
}
