//Ver saldo
int VerSaldo(int aux)
{
    int op;

    printf("\nSu saldo es: %d", aux);

    printf("\n¿Salir? \n1. Sí");
    printf("\n>>");
    scanf("%d", &op);

    if(op == 1)
        return 0;
    else
        return 1;
}

//Sacar dinero
int SacarDinero(int *aux)
{
    int monto, op;

    printf("\nIngrese la cantidad de dinero que desea retirar: ");
    printf("\n>> ");
    scanf("%d", &monto);

    if(monto < *aux){
        *aux = *aux - monto;
        
        do{
            system("clear");
            printf("\nUsted a retirado %d. Gracias por preferirnos.", monto);
            printf("\n¿Salir? \n1. Sí");
            printf("\n>>");
            scanf("%d", &op);
        }while(op != 1);
        
        return 0;
    }
    else{
        printf("\nSu saldo es inferior al monto solicitado.");
        return 1;
    }
}

//Transferir

//Ingresar dinero
int IngresarDinero(int *aux)
{
    int monto, op;

    printf("\nIndique la cantidad de dinero que desea ingresar: ");
    printf("\n>> ");
    scanf("%d", &monto);

    *aux = *aux + monto;

    do{
        system("clear");
        printf("\nUsted a ingresado %d. Gracias por preferirnos.", monto);
        printf("\n¿Salir? \n1. Sí");
        printf("\n>>");
        scanf("%d", &op);
    }while(op != 1);
        
    return 0;
}