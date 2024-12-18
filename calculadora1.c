#include <stdio.h>
#include <string.h>
#include <locale.h>

float calculadora(float num1, float num2, int operacao) {

    switch (operacao) {
        case 1:
            return num1 + num2;
        case 2:
            return num1 - num2;
        case 3:
            return num1 * num2;
        case 4:
            if (num2 == 0) {
                printf("Divis�o por zero n�o � permitida!\n");
                return 0;
            } else {
                return num1 / num2;
            }
        default:
            return 0;
    }
}

int main(){
     setlocale (LC_ALL, "");

    float numero1, numero2, resultado;
    int operacao, soma, sub, multi, divi;

    printf("ESCOLHA A OPERA��O: (1-SOMA, 2-SUBTRA��O, 3-MULTIPLICA��O, 4-DIVIS�O): \n");
    scanf("%d", &operacao);

    printf("Digite o Primeiro N�mero: ");
    scanf("%f", &numero1);

    printf("Digite o Segundo N�mero: ");
    scanf("%f", &numero2);

    resultado = calculadora(numero1, numero2, operacao);

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
