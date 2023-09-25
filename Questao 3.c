#include <stdio.h>

int main() {
    int senha_cadastrada, senha_inserida;
    
    printf("Insira uma senha de 4 digitos:\n");
    scanf("%d", &senha_cadastrada);
    printf("Senha cadastrada: %04d\n", senha_cadastrada);
    
    while (1) {
        scanf("%d", &senha_inserida);
        
        if (senha_inserida == senha_cadastrada) {
            printf("Senha valida!\n");
            break;
        } else {
            printf("Senha invalida!\n");
        }
    }
    
    return 0;
}
