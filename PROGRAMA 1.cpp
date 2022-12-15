#include <stdio.h>

const int dim=100;
int i,j,fil,clm;
float MatA[dim][dim],MatB[dim][dim]; 

int main(void)
{
    printf("Suma de dos matrices:\n\n");
    printf("Introduzca el tamano de las matrices:\n\n Filas:"); scanf("%i", &fil);
    printf(" Columnas: "); scanf("%i", &clm);
   
    
    printf("\n\nIntroduca los datos de la Matriz A:\n");
    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=clm;j++)
        {
            printf("\nIntroduzca la coordenada (%i,%i): ",i,j); scanf("%f", &MatA[i][j]);
        }
    }
   
    printf("\n\n\nIntroduca los datos de la Matriz B:\n");
    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=clm;j++)
        {
            printf("\nIntroduzca la coordenada (%i,%i): ",i,j); scanf("%f", &MatB[i][j]);
        }
    }
   
    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=clm;j++) MatA[i][j]=MatA[i][j]+MatB[i][j]; 
    }
   
    printf("\n\nLa matriz resultado es: \n\n");
    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=clm;j++) printf("%10.0f",MatA[i][j]);
        printf("\n");
    }
    return 0;
}