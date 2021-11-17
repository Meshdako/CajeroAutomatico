#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Libreria/operaciones.h"
#include "Libreria/cuentas.h"

//Funciones
int IniciarSesion(Cuenta Aux)
{
    char name[50], pass[50];

    printf("\nIngresa tu nombre de usuario: ");
    scanf("%s", name);
    printf("\nIngresa tu contraseña de usuario: ");
    scanf("%s", pass);

    if(strcmp(name, Aux.username) == 0){
        if(strcmp(pass, Aux.password) == 0){
            return 0;
        }
        else{
            printf("\nContraseña incorrecta.");
            return 2;
        }
    }
    else{
        return 1;
    }
}

void MenuCajero(Cuenta Aux)
{
    int OP, R;
    do{
        system("clear");

        printf("\n\tBienvenido %s", Aux.username);
        printf("\nPor favor, eliga una de las siguientes opciones:");
        printf("\n1. Ver saldo.");
        printf("\n2. Sacar dinero.");
        printf("\n3. Transferir dinero.");
        printf("\n4. Ingresar dinero.");
        printf("\n0. Cerrar sesión.");
        printf("\n>> ");
        scanf("%i", &OP);

        switch (OP){
            case 0:
                system("clear"); 
                printf("\n\tGracias por preferirnos.");
                break;
            case 1:
                do{
                    system("clear");
                    R = VerSaldo(Aux.saldo);
                }while(R != 0);
                break;
            case 2:
                do{
                    system("clear");
                    R = SacarDinero(&Aux.saldo);
                }while(R != 0);
                break;
            case 3:
                printf("\nEstamos trabajando para usted.");
                break;
            case 4:
                do{
                    system("clear");
                    R = IngresarDinero(&Aux.saldo);
                }while(R != 0);
                break;
            default:
                printf("\nIngrese una opción válida.");
                break;
        }
    }while(OP != 0);
}

//Función principal
int main()
{
    int R = IniciarSesion(CuentAdmin);

    if(R == 0)
        MenuCajero(CuentAdmin);
    else{
        if(R == 1)
            printf("\nEl usuario no existe.");
    }

    return 0;
}