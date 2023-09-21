#include <stdio.h>

const char *parOuImpar(int numero) {
    if (numero % 2 == 0) {
        return "par";
    } else {
        return "impar";
    }
}

int somaDosDigitos(int numero) {
    int soma = 0;
    while (numero > 0) {
        soma += numero % 10;
        numero /= 10;
    }
    return soma;
}

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    const char *parImpar = parOuImpar(numero);
    int soma = somaDosDigitos(numero);

    printf("%d eh %s\nA soma dos algarismos de %d eh %d\n", numero, parImpar, numero, soma);

    return 0;
}
