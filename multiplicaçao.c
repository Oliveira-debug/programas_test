#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, y; //definindo variavel intera

    printf("Digite o primeiro numero:\n ");
    scanf("%d", &x);
    printf("Digite o segundo numero:\n ");
    scanf("%d", &y);
    printf("O produto e %d \n",x*y);
    system("pause");

    return 0;
};