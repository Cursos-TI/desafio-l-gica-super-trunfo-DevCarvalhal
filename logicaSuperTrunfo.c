
QV = (qualidade_do_ar * 0.4) + (lazer * 0.4) - (criminalidade * 0.2)

#include <stdio.h>
#include <stdib.h>
#include <time.h>

#define total_cidades 5
    
struct Cidade {
        char nome [30];
        int criminalidade;
        int qualidade_ar;
        int lazer;
    };    
 float calcularQualidadeVida (struct cidade c) {
        return (c.qualidade_ar * 0.4) +
               (c.lazer *0.4) -
               (c.criminalidade * 0.2);
 }

int main() {
        struct Cidade cidade[total_cidades] = {
            {"São Paulo - SP", 50, 60, 80},
            {"Rio de Janeiro - RJ", 75, 70, 99},
            {"Curitiba - PR", 40, 85, 70},
            {"Salvador - BA", 65, 70, 75},
            {"Belo Horizonte - MG", 50, 75, 72}
};
    struct Cidade jogador1, jogador2;

    float qv1, qv2;
    srand(time(NULL));
    jogador1 = cidades[rand() % total_cidades];
    jogador2 = cidades[rand() % total_cidades];
    
    printf("=== SUPER TRUNFO - CIDADES DO BRASIL ===\n\n");

    printf("Jogador 1: %s\n", jogador1.nome);
    printf("Criminalidade: %d\n", jogador1.criminalidade);
    printf("Qualidade do ar: %d\n", jogador1.qualidade_ar);
    printf("Lazer: %d\n\n", jogador1.lazer);

    printf("Jogador 2: %d\n", jogador2.nome);
    printf("Criminalidade: %d\n", jogador2.criminalidade);
    printf("Qualidade do ar: %d\n", jogador2.qualidade_ar);
    printf("Lazer: %d\n\n", jogador2.lazer);


    qv_jogador1 = calcular_qualidade_vida(jogador1);
    qv_jogador1 = calcular_qualidade_vida(jogador2);

    printf("Qualidade de Vida Jogado 1: %.2f\n", qv_jogador1);
    printf("Qualidade de Vida Jogado 1: %.2f\n", qv_jogador2);

    if(qv_jogador1 > qv_jogador2) {
        printf("Jogador 1 venceu!! (%s tem a melhor qualidade de vida)\n", jogador1.nome);
    } else if {
        printf("Jogador 1 venceu!! (%s tem a melhor qualidade de vida)\n", jogador2.nome);
    } else {
        printf("Empate!!);
            }
    
    retunr 0;

    }



        
        // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
