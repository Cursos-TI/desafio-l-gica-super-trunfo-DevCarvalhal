#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_CIDADES 5

// Carta
struct Cidade {
    char nome[30];
    int criminalidade;
    int qualidade_ar;
    int lazer;
};

// calcular qualidade de vida
float calcularQualidadeVida(struct Cidade c) {
    return (c.qualidade_ar * 0.4) +
           (c.lazer * 0.4) -
           (c.criminalidade * 0.2);
}

int main() {
    struct Cidade cidades[TOTAL_CIDADES] = {
        {"São Paulo - SP", 70, 60, 85},
        {"Rio de Janeiro - RJ", 75, 65, 80},
        {"Curitiba - PR", 40, 85, 70},
        {"Salvador - BA", 65, 70, 75},
        {"Belo Horizonte - MG", 50, 75, 72}
    };

    int escolhaJogador;
    int escolhaComputador;
    float qvJogador, qvComputador;

    srand(time(NULL));

    printf("===== SUPER TRUNFO - CIDADES DO BRASIL =====\n\n");
    printf("Escolha sua cidade:\n");

    // Menu de cidades
    for (int i = 0; i < TOTAL_CIDADES; i++) {
        printf("%d - %s\n", i + 1, cidades[i].nome);
    }

    printf("\nDigite o número da cidade: ");
    scanf("%d", &escolhaJogador);

    escolhaJogador--;

    // Validação simples
    if (escolhaJogador < 0 || escolhaJogador >= TOTAL_CIDADES) {
        printf("Opção inválida!\n");
        return 1;
    }

    // Sorteio da cidade do computador (diferente da do jogador)
    do {
        escolhaComputador = rand() % TOTAL_CIDADES;
    } while (escolhaComputador == escolhaJogador);

    struct Cidade jogador = cidades[escolhaJogador];
    struct Cidade computador = cidades[escolhaComputador];

    printf("\n--- SUA CARTA ---\n");
    printf("Cidade: %s\n", jogador.nome);
    printf("Criminalidade: %d\n", jogador.criminalidade);
    printf("Qualidade do ar: %d\n", jogador.qualidade_ar);
    printf("Lazer: %d\n\n", jogador.lazer);

    printf("--- CARTA DO COMPUTADOR ---\n");
    printf("Cidade: %s\n", computador.nome);
    printf("Criminalidade: %d\n", computador.criminalidade);
    printf("Qualidade do ar: %d\n", computador.qualidade_ar);
    printf("Lazer: %d\n\n", computador.lazer);

    // Cálculo da qualidade de vida
    qvJogador = calcularQualidadeVida(jogador);
    qvComputador = calcularQualidadeVida(computador);

    printf("Qualidade de Vida (Jogador): %.2f\n", qvJogador);
    printf("Qualidade de Vida (Computador): %.2f\n\n", qvComputador);

    // Resultado
    if (qvJogador > qvComputador) {
        printf("Você venceu! (%s tem melhor qualidade de vida)\n", jogador.nome);
    } 
    else if (qvComputador > qvJogador) {
        printf("Computador venceu! (%s tem melhor qualidade de vida)\n", computador.nome);
    } 
    else {
        printf("Empate!\n");
    }

    return 0;
}
