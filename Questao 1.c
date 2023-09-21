#include <stdio.h>


int ocorreramOlimpiadasVerao(int ano) {
    int olimpiadasVerao[] = {
        1896, 1900, 1904, 1908, 1912, 1920, 1924, 1928, 1932,
        1936, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976,
        1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 
        2016, 2020
    };
    int numOlimpiadasVerao = sizeof(olimpiadasVerao) / sizeof(olimpiadasVerao[0]);

    for (int i = 0; i < numOlimpiadasVerao; i++) {
        if (ano == olimpiadasVerao[i]) {
            return 1;
        }
    }

    return 0;
}


int ocorreuCopaMundo(int ano) {
    int copaMundo[] = {
        1930, 1934, 1938, 1950, 1954, 1958, 1962, 1966, 1970,
        1974, 1978, 1982, 1986, 1990, 1994, 1998, 2002, 2006, 
        2010, 2014, 2018, 2022
    };
    int numCopaMundo = sizeof(copaMundo) / sizeof(copaMundo[0]);

    for (int i = 0; i < numCopaMundo; i++) {
        if (ano == copaMundo[i]) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int ano;
    printf("Digite um ano (1800-2022): ");
    scanf("%d", &ano);

    int ocorreuOlimpiadas = ocorreramOlimpiadasVerao(ano);
    int ocorreuCopa = ocorreuCopaMundo(ano);

    if (!ocorreuOlimpiadas && !ocorreuCopa) {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    } else {
        if (ocorreuOlimpiadas) {
            printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
        }
        if (ocorreuCopa) {
            printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
        }
    }

    return 0;
}
