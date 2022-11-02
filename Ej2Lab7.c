#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *NotasdePromedio;                  // Archivo de notas
    NotasdePromedio = fopen("Notas", "w+"); // abrimos un archivo y elegimos el modo de lectura y escritura

    float resultado, notas, NumNotas, promedio = 0;
    if (NotasdePromedio == NULL)
    {
        printf("No se ha podido crear el archivo"); // Si el archivo no se crea correctamente mueestra el error
        return 1;
    }

    printf("Cantidad de notas: "); // preguntamos el numero de notas que ingresara para
    scanf("%f", &NumNotas);        // poder empezar un loop y terminarlo en el numero de notas que ingresara

    for (int i = 0; i == NumNotas; i++)
    {
        printf("Escriba las notas para su promedio: ");
        scanf("%f", &notas);
        fprintf(NotasdePromedio, "%f", notas);
        fprintf(NotasdePromedio, "\n");
        promedio = promedio + notas;
    }

    resultado = promedio / NumNotas;

    // Imprimimos el archivo
    char ch;
    ch = fgetc(NotasdePromedio);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(NotasdePromedio);
    }
    printf("El promedio de las notas es: %f", resultado);

    // cerramos el archivo
    fclose(NotasdePromedio);
    return 0;
}