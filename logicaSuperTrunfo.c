#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_CIDADES 5

// Estrutura que representa uma carta do jogo
struct Cidade {
    char nome[30];
    int criminalidade;   // quanto menor, melhor
    int qualidade_ar;    // quanto maior, melhor
    int lazer;           // quanto maior, melhor
};

// Função para calcular a qualidade de vida
float calcularQualidadeVida(struct Cidade c) {
    return (c.qualidade_ar * 0.4) +
           (c.lazer * 0.4) -
           (c.criminalidade * 0.2);
}

int main() {
    // Vetor de cidades (cartas)
    struct Cidade cidades[TOTAL_CIDADES] = {
        {"São Paulo - SP", 70, 60, 85},
        {"Rio de Janeiro - RJ", 75, 65, 80},
        {"Curitiba - PR", 40, 85, 70},
        {"Salvador - BA", 65, 70, 75},
        {"Belo Horizonte - MG", 50, 75, 72}
    };

    struct Cidade jogador1, jogador2;
    float qv1, qv2;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Sorteio das cidades
    jogador1 = cidades[rand() % TOTAL_CIDADES];
    jogador2 = cidades[rand() % TOTAL_CIDADES];

    printf("===== SUPER TRUNFO - CIDADES DO BRASIL =====\n\n");

    printf("Jogador 1 recebeu: %s\n", jogador1.nome);
    printf("Criminalidade: %d\n", jogador1.criminalidade);
    printf("Qualidade do ar: %d\n", jogador1.qualidade_ar);
    printf("Lazer: %d\n\n", jogador1.lazer);

    printf("Jogador 2 recebeu: %s\n", jogador2.nome);
    printf("Criminalidade: %d\n", jogador2.criminalidade);
    printf("Qualidade do ar: %d\n", jogador2.qualidade_ar);
    printf("Lazer: %d\n\n", jogador2.lazer);

    // Cálculo da qualidade de vida
    qv1 = calcularQualidadeVida(jogador1);
    qv2 = calcularQualidadeVida(jogador2);

    printf("Qualidade de Vida - Jogador 1: %.2f\n", qv1);
    printf("Qualidade de Vida - Jogador 2: %.2f\n\n", qv2);

    // Resultado final
    if (qv1 > qv2) {
        printf("🏆 Jogador 1 venceu! (%s)\n", jogador1.nome);
    } 
    else if (qv2 > qv1) {
        printf("🏆 Jogador 2 venceu! (%s)\n", jogador2.nome);
    } 
    else {
        printf("🤝 Empate!\n");
    }

    return 0;
}
