#include <stdio.h>

int main(void)
{
    float n1, n2, n3, media;

    printf("digite a primeira nota:\n");
    scanf("%f", &n1);

    printf("digite a segunta nota:\n");
    scanf("%f", &n2);

    printf("digite a terceira nota:\n");
    scanf("%f", &n3);

    media = (n1 + n2 + n3)/3;
    
    printf("a media e: %.2f\n", media);

    if(media >= 7)
    
    printf("aprovado!");

    return 0;
}