#include <stdio.h>
#include <string.h>

int main()
{
    FILE *NumerosPositivos; // creamos archivo para los numeros positivos
    FILE *NumerosNegativos; // creamos archivo para los numeros negativos

    NumerosPositivos = fopen("Numeros Positivos", "w+"); // abrimos un archivo y elegimos el modo de lectura y escritura
    if (NumerosPositivos == NULL)
    {
        printf("Hay un error al abrir el archivo"); // Si el archivo no se crea correctamente mueestra el error
        return 1;
    }

    NumerosNegativos = fopen("Numeros Negativos", "w+"); // abrimos un archivo y elegimos el modo de lectura y escritura
    if (NumerosNegativos == NULL)
    {
        printf("Hay un error al abrir el archivo"); // Si el archivo no se crea correctamente mueestra el error
        return 1;
    }

    float numerosN, numerosP; // Declaramos las varibales para que el usuario guarde los números
    int n, p;                 // y esta variable sirve para que el usuario decida cuántos datos quiere ingresar

    printf("\nIngrese el numero de datos positivos que  quiere ingresar: ");
    scanf("%d", &p);

    for (int i = 0; i == p; i++) // de esta manera podemos almanecar todos los datos del usuario
    {
        printf("Escriba numeros reales positivos: ");
        scanf("%f", &numerosP);
        fprintf(NumerosPositivos, "%5.2f", numerosP);
        fprintf(NumerosPositivos, "\n");
    }

    printf("\nIngrese el numero de datos negativos que  quiere ingresar: ");
    scanf("%d", &n);

    for (int i = 0; i == n; i++) // de esta manera podemos almanecar todos los datos del usuario
    {
        printf("Escriba numeros reales positivos: ");
        scanf("%f", &numerosP);
        fprintf(NumerosPositivos, "%5.2f", numerosP);
        fprintf(NumerosPositivos, "\n");
    }

    // con esto imprimimos los archivos
    printf("\nEl archivo de numeros positivos es: ");
    char a;
    a = fgetc(NumerosPositivos);
    while (a != EOF)
    {
        printf("%c", a);
        a = fgetc(NumerosPositivos);
    }

    printf("\nEl archivo de numeros negativos es: ");
    char b;
    b = fgetc(NumerosNegativos);
    while (b != EOF)
    {
        printf("%c", b);
        b = fgetc(NumerosNegativos);
    }

    fclose(NumerosPositivos); // con esto cerramos el archivo de numeros positivos
    fclose(NumerosNegativos); // y con este cerramos el archivo de numeros negativos

    return 0;
}