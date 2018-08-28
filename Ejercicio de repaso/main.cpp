#include <iostream>
#include <stdio.h>


int main()
{
    int numero;
    char seguir='s';
    int positivo=0;
    int negativo=0;
    int ceros=0;
    do
    {
        printf("Ingrese un numero: \n");
        scanf("%d",&numero);
        printf("Desea seguir cargando datos¿?: \n");
        setbuf(stdin,NULL);
        scanf("%s",&seguir);

        if(numero<0)
        {
            negativo++;
        }

        if(numero>0)
        {
            positivo++;
        }
        if(numero==0)
        {
            ceros++;
        }




    }while(seguir!='n');

    printf("CANTIDAD DE POSITIVOS: %d \n", positivo);
    printf("CANTIDAD DE NEGATIVOS: %d\n", negativo);
    printf("CANTIDAD DE CEROS: %d\n", ceros);






    return 0;
}
