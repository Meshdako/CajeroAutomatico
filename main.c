#include <stdio.h>
#include <stdlib.h>

//Funciones
void MenuCajero()
{
    int OP;
    do{
        printf("\n\tBienvenido");
        printf("\nPor favor, eliga una de las siguientes opciones:");
        printf("\n1. Ver saldo.");
        printf("\n2. Sacar dinero.");
        printf("\n3. Transferir dinero.");
        printf("\n4. Ingresar dinero.");
        printf("\n0. Cerrar sesión.");
        printf("\n>> ");
        scanf("%i", &OP);

        switch (OP){
            case 1:
                printf("\nEstamos trabajando para usted.");
                break;
            case 2:
                printf("\nEstamos trabajando para usted.");
                break;
            case 3:
                printf("\nEstamos trabajando para usted.");
                break;
            case 4:
                printf("\nEstamos trabajando para usted.");
                break;
            default:
                printf("\nIngrese una opción válida.");
                break;
        }
    }while(OP != 0);
    printf("\n\tGracias por preferirnos.");
}


//Función principal
int main()
{
    MenuCajero();
}