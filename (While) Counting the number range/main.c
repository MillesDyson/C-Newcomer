#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,contador;

    printf("Digite o numero inicial: ");
    scanf("%d",&num1);
    printf("Digite o numero final: ");
    scanf("%d",&num2);
    contador = num1 + 1;

    while (contador + 1 <= num2) {
        printf("%d\n",contador);
        ++contador;
    }
    return 0;
}
