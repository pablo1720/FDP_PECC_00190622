#include <stdio.h>
int main()
{
    FILE *Letras;                   // creamos el archivo
    Letras = fopen("Letras", "w+"); // abrimos el archivo en modo lectura y escritura
    if (Letras == NULL)
    {
        printf("Hay un error al abrir el archivo"); // Si el archivo no se crea correctamente mueestra el error
        return 1;
    }

    int NLa = 0, NLe = 0, NLi = 0, NLo = 0, NLu = 0; // iniciamos contadores igualados a 0
    // para que cuando el programa recorra las letras pueda aumentar
    char frase[50];
    printf("Ingrese una frase corta: "); // pedimos la frase o texto de parte del usuario
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; i < 50; i++) // usamos este for para recorrer la frase e incrementar los contadores de cada vocal
    {
        if (frase[i] == 'a')
        {
            NLa++;
        }
        else if (frase[i] == 'e')
        {
            NLe++;
        }
        else if (frase[i] == 'i')
        {
            NLi++;
        }
        else if (frase[i] == 'o')
        {
            NLo++;
        }
        else if (frase[i] == 'u')
        {
            NLu++;
        }
    }

    printf("Hay %d letras 'a' en la frase\n", NLa); // imprimimos los resultados
    printf("Hay %d letras 'e' en la frase\n", NLe);
    printf("Hay %d letras 'i' en la frase\n", NLi);
    printf("Hay %d letras 'o' en la frase\n", NLo);
    printf("Hay %d letras 'u' en la frase\n", NLu);

    // Imprimimos el archivo
    char ch;
    ch = fgetc(Letras);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(Letras);
    }

    // cerramos el archivo
    fclose(Letras);

    return 0;
}