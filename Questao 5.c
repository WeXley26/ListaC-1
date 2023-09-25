#include <stdio.h>

int main() {
    int A, B;
    
    printf("Digite dois valores inteiros:\n");
    scanf("%d %d", &A, &B);

    // Verificação se os valores são iguais
    if (A == B) {
        printf("Os valores lidos sao iguais\n");
    } else {
        // Encontrando o maior valor
        int maior, menor;
        if (A > B) {
            maior = A;
            menor = B;
        } else {
            maior = B;
            menor = A;
        }
        
        printf("%d eh maior que %d\n", maior, menor);

        // Verificação se um valor é múltiplo do outro
        if (maior % menor == 0) {
            printf("%d eh multiplo de %d\n", maior, menor);
        } else {
            printf("%d nao eh multiplo de %d\n", maior, menor);
        }
    }

    return 0;
}