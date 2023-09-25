#include <stdio.h>

int main() {
    char nivel;
    double salario, aumento, salario_atualizado;

    
    printf("Qual o nivel de experiencia do funcionario (a, b ou c)? ");
    scanf("%c", &nivel,"\n");
    printf("Qual o salario do funcionario? ");
    scanf("%lf", &salario,"\n");

    if (nivel == 'a') {
        aumento = salario * 0.05;
    } else if (nivel == 'b') {
        aumento = salario * 0.07;
    } else if (nivel == 'c') {
        aumento = salario * 0.08;
    } else {
        printf("Nível de experiência inválido\n");
        return 1;
    }

    salario_atualizado = salario + aumento;

    printf("Salario anterior: R$ %.2lf\nSalario Atualizado: R$ %.2lf\n", salario, salario_atualizado);

    return 0; // Saída com sucesso
}
