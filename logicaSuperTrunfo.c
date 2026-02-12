#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Estrutura da cidade
struct Cidade {
    char nome[30];
    int criminalidade;
    int qualidade_ar;
    int lazer;
};

// Função para calcular qualidade de vida
float calcularQualidadeVida(struct Cidade c) {
    return (c.qualidade_ar * 0.4) +
           (c.lazer * 0.4) -
           (c.criminalidade * 0.2);
}

int main() {

    // Cidades
    struct Cidade sp = {"São Paulo - SP", 70, 60, 85};
    struct Cidade rj = {"Rio de Janeiro - RJ", 75, 65, 80};
    struct Cidade ba = {"Salvador - BA", 65, 70, 75};

    struct Cidade jogador;
    struct Cidade computador;

    int escolhaJogador;
    int escolhaComputador;

    float qvJogador, qvComputador;

    srand(time(NULL));

    printf("===== SUPER TRUNFO - CIDADES DO BRASIL =====\n\n");

    printf("Escolha sua cidade:\n");
    printf("1 - São Paulo - SP\n");
    printf("2 - Rio de Janeiro - RJ\n");
    printf("3 - Salvador - BA\n");

    printf("\nDigite o número da cidade: ");
    scanf("%d", &escolhaJogador);

    // Jogador 1
    if (escolhaJogador == 1) {
        jogador = sp;
    } 
    else if (escolhaJogador == 2) {
        jogador = rj;
    } 
    else if (escolhaJogador == 3) {
        jogador = ba;
    } 
    else {
        printf("Opção inválida!\n");
        return 1;
    }

    // Sorteio 
    escolhaComputador = (rand() % 3) + 1;

    // Garantir divergencia
    if (escolhaComputador == escolhaJogador) {
        if (escolhaComputador == 1) {
            escolhaComputador = 2;
        } else {
            escolhaComputador = 1;
        }
    }

    // Definição da carta do computador
    if (escolhaComputador == 1) {
        computador = sp;
    } 
    else if (escolhaComputador == 2) {
        computador = rj;
    } 
    else {
        computador = ba;
    }

    // Exibição das cartas
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

    // Resultado final
    if (qvJogador > qvComputador) {
        printf("Você venceu!\n");
    } 
    else if (qvComputador > qvJogador) {
        printf("Computador venceu!\n");
    } 
    else {
        printf("Empate!\n");
    }

    return 0;
}
