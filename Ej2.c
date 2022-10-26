#include <stdio.h>
#include <string.h>

int main()
{

    char palabra[250]; // declaramos nuestro string
    int tamanio = 0;   // creamos una variable que nos ayudara
    // a establecer el tamaño del string y empezamos en 0 porque
    // de acuerdo a la palabra que ingrese el usuario ese valor cambiará
    int palindrome = 1; // creamos una variable booleana para validar
    // al final si es un palindrome o no

    printf("Ingrese una palabra: "); // solicitamos una palabra
    scanf("%s", palabra);            // la guardamos en el string usando scanf porque
    // no se contaran espacios, es una sola palabra no frase con espacios

    tamanio = strlen(palabra); // usamos la función 'strlen' para ayudarnos a
    // limitar el tamaño del arreglo de acuerdo a la palabra ingresada

    for (int i = 0; i < tamanio; i++) // empezamos un for para evaluar cada posición del arreglo
    {
        if (palabra[i] != palabra[tamanio - i - 1]) // empezamos evaluando de la posición 1 y la final hasta llegar
            // al centro y si en un punto la condición no se cumple
            palindrome = 0; // nuestra variable es falsa por lo tanto no es una palabra palindrome
    }

    if (palindrome)              // llamamos a nuestra variable booleana y evaluamos si se cumple o no
        printf("Es palindrome"); // si se cumple entonces es una palabra palindrome
    else
        printf("No es palindrome"); // si no se cumple entonces no es palindrome

    return 0;
}