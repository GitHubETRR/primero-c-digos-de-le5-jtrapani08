#include <stdio.h>
   
   int main()
   
{
   int dia, mes, anio;
   int dianac, mesnac, anionac;
   int edad;
   do{
        printf("Ingrese el día actual:\n");
        scanf("%d", &dia);
    }while((dia>31) || (dia<1));
    do{
        printf("Ingrese el mes actual:\n");
        scanf("%d", &mes);
    }while((mes>12) || (mes<1));
    do{
        printf("Ingrese el año actual:\n");
        scanf("%d", &anio);
    }while(!(anio==2025));
    do{
        printf("Ingrese el día de su fecha de nacimiento:\n");
        scanf("%d", &dianac);
    }while((dianac>31) || (dianac<1));
    do{
        printf("Ingrese el mes de su fecha de nacimiento:\n");
        scanf("%d", &mesnac);
    }while((mesnac>12) || (mesnac<1));
    do{
        printf("Ingrese el año de su fecha de nacimiento:\n");
        scanf("%d", &anionac);
    }while((anionac>2025) || (anionac<1));
    edad=anio-anionac;
    if(mesnac>mes){
        edad=edad-1;
    }
    if(mesnac==mes){
        if(dianac>dia){
            printf("¡Ya casi es tu cumpleaños!\n");
            edad=edad-1;
        }
        if(dianac==dia){
            printf("¡Feliz cumpleaños!\n");
        }
    }
    printf("Su edad actual es: %d \n", edad);
    return 0;
    
}