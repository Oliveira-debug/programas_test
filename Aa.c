#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char letra;
    char Maiuscula;
    char minuscula;

    printf("Didite um caractere:\n");
    scanf("%c", &letra);

    Maiuscula = toupper(letra);
    minuscula = tolower(letra);

    printf("Maiuscula: %c\n", Maiuscula);
    printf("minuscula: %c\n", minuscula);

    return 0;
}