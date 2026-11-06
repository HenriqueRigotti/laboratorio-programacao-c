#include <stdio.h>

int calcularFatorial(int numero) {
    int fatorial = 1;
    
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    
    return fatorial;
}

int main() {
    int numero;

    printf("===== CALCULADORA DE FATORIAL =====\n\n");

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 0 && numero <= 12) {
        int resultado = calcularFatorial(numero);
        printf("\nFatorial de %d = %d\n", numero, resultado);
    } else {
        printf("\nPor favor, insira um numero entre 0 e 12.\n");
    }

    return 0;
}
