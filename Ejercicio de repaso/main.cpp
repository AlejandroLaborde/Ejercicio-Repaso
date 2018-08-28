#include <iostream>
#include <stdio.h>


int main()
{
    int CantidadDePositivos=0;
    int SumaDePositivos=0;
    int CantidadDeNegativos=0;
    int SumaDeNegativos=0;
    int CantidadDeCeros=0;
    int CantidadDePares=0;
    int CantidadDeImpares=0;
    float PromedioPositivos;
    float PromedioNegativos;
    int DiferenciaEntrePN;
    char seguir='s';
    int numero;

    do{

    printf("Ingrese un numero:\n");
    setbuf(stdin,NULL);
    scanf("%d",&numero);

    if(numero<0)
    {
        CantidadDeNegativos++;
        SumaDeNegativos=SumaDeNegativos+numero;
    }
    if(numero>0)
    {
        CantidadDePositivos++;
        SumaDePositivos=SumaDePositivos+numero;
    }
    if(numero==0)
    {
        CantidadDeCeros++;
    }
    if(((numero%2) == 0)&& numero!=0)
    {
        CantidadDePares++;
    }









    printf("Desea continuar?: Y/N \n");
    setbuf(stdin,NULL);
    scanf("%c",&seguir);

    }while(seguir!='n');

    printf("Cantidad De Positivos: %d \n",CantidadDePositivos);
    printf("Cantidad De Negativos: %d\n",CantidadDeNegativos);
    printf("Cantidad De ceros: %d\n",CantidadDeCeros);
    printf("Cantidad De pares: %d\n",CantidadDePares);
    printf("Cantidad De impares: %d\n",CantidadDeImpares);
    printf("Suma de negativos: %d\n",SumaDeNegativos);
    printf("Suma de positivos: %d\n",SumaDePositivos);








    return 0;
}
