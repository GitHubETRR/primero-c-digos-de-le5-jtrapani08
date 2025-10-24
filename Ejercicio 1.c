#include <stdio.h>
int SumarVect(int A[], int TVECT);


int main()
{
    int TVECT;
    printf("¡BIENVENIDO/A!\n\n");
    printf("Ingrese el tamaño de su vector:");
    scanf("%d", &TVECT);
    
    int A[TVECT];
    printf("\nREGISTRO DE NÚMEROS\n");
        for(int i = 0; i < TVECT; i++)
    {
        printf("Ingrese el valor del elemento %d: ", i+1);
        scanf("%d", &A[i]);
    }
     
     int suma = SumarVect (A, TVECT);
     printf("\nLa suma de todos los elementos del vector es: %d\n", suma);

    return 0;
}

int SumarVect(int A[], int TVECT)
{
    int suma = 0;
    for(int i = 0; i < TVECT; i++)
    {
        suma = suma + A[i];
    }
    return suma;
}