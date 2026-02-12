#include <stdio.h>

Qualidade de Vida =
(qualidade_do_ar * 0.4) +
(lazer * 0.4) -
(criminalidade * 0.2)
    
struct Carta {
        char nome [30];
        int criminalidade;
        int qualidade_ar;
        int lazer;
    }    
 float calcular_qualidade (struct cidade c) {
        return (c.qualidade_ar * 0.4) +
               (c.lazer *0.4) -
               (c.criminalidade * 0.2);
int main() {
        struct cidade_jogador1 = {"São Paulo - SP", 50, 60, 80};
        struct cidade_jogador2 = {"Rio de Janeiro - RJ", 75, 70, 99};

    float qv_jogador1, qv_jogador2;

    printf("=== SUPER TRUNFO - CIDADES DO BRASIL ===/n/n");

    printf("Jogador 1: %s/n", jogador1.nome);
    printf("Criminalidade: %d/n", jogador1.criminalidade);
    printf("Qualidade do ar: %d/n", jogador1.qualidade_ar);
    printf("Lazer: %d/n/n", jogador1.lazer);

    printf("Jogador 2: %d/n", jogador2.nome);
    printf("Criminalidade: %d/n", jogador2.criminalidade);
    printf("Qualidade do ar: %d/n", jogador2.qualidade_ar);
    printf("Lazer: %d/n/n", jogador2.lazer);

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
