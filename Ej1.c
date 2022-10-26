#include <stdio.h>
#include <string.h>

int main()
{

    char frase[60], secuenciadeletras[20];      // declaramos los strings
    printf("Ingrese una frase corta: ");         // pedimos la frase o texto de parte del usuario
    fgets(frase, sizeof(frase), stdin);          // guardamos toda una frase por eso usamos fgets
    printf("Ingrese una secuencia de letras: "); // pedimos la combinacion de letras que quiere buscar el usuario
    scanf("%s", secuenciadeletras);              // se guarda con scanf porque es una combinación sin espacios
    printf("La secuencia es: ");                 // imprimimos la frase
    puts(secuenciadeletras);                     // immpimimos la frase y se usa un puts
    if (strstr(frase, secuenciadeletras))        // comparamos la combinacion con el string original y strstr nos devuelve
        puts("Si esta en el texto");             // si es verdadero o falso entonces si se cumple se imprimeque la combinación está en el texto
    else
    {
        printf("No esta en el texto"); // si nos devuelve falso entonces pasamos al else e imprimimos que no está en el texto
    }

    return 0;
}