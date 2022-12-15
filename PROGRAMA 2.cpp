#include<stdio.h>
#include<windows.h>
#include <stdlib.h>

int opc;
int suma(int x, int y);
int resta(int x, int y);
int multiplicacion(int x, int y);
float division(float z, float w);

int main()
{
	do{
		printf("MENU DE OPCIONES\n");
		printf("SELECCIONE UNA OPCIONE\n 1. SUMA\n 2. RESTA\n 3. MULTIPLICACION\n 4. DIVISION\n");
		scanf("%d", &opc);
		system("cls");
	}while(opc>4||opc<1);
	switch(opc){
		
		case 1://suma
		int x;
		int y;
		printf("has seleccionado la opcion de suma\n");
		printf("el resultado es %d", suma(x,y));
		break;
		
		case 2: //resta
		printf("has seleccionado la opcion de resta\n");
		printf("el resultado es %d", resta(x,y));
		break;
		
		case 3://multiplicacion 
		printf("has seleccionado la opcion de multiplicacion\n");
		printf("el resultado es %d", multiplicacion(x,y));
		break;
		
		case 4: //division
		float z;
		float w;
		printf("has seleccionado la opcion de division\n");
		printf("el resultado es %f", division(z,w));
		break;
	}
	
		return 0;
}
	int suma(int x, int y)
{
	int resultadoR;
	printf("ingrese el primer valor x: ");
	scanf("%d", &x);
	printf("ingrese el segundo valor y: ");
	scanf("%d", &y);
	resultadoR = x+y;
	return resultadoR;
}
	int resta(int x, int y)
{
	int resultadoR;
	printf("ingrese el primer valor x: ");
	scanf("%d", &x);
	printf("ingrese el segundo valor y: ");
	scanf("%d", &y);
	resultadoR = x-y;
	return resultadoR;
}
	int multiplicacion(int x, int y)
{
	int resultadoR;
	printf("ingrese el primer valor x: ");
	scanf("%d", &x);
	printf("ingrese el segundo valor y: ");
	scanf("%d", &y);
	resultadoR = x*y;
	return resultadoR;
}
	float division(float z, float w)
{
	float resultadoF;
	printf("ingrese el numerador z: ");
	scanf("%f", &z);
	printf("ingrese el denominador w: ");
	scanf("%f", &w);
	resultadoF = z/w;
	return resultadoF;
}