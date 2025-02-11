#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Jeferson

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    

    int codigo_cidade ;
    char nome [20] ;
    int população ;
    int area ;
    int pib ;
    int pontos_turisticos ;  

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Faça o cadastro das Cidades\n");
    printf("Coloque o codigo da cidade\n");
    scanf("%d",&codigo_cidade);
    printf("Nome da Cidade?\n");
    scanf("%s", &nome);
    printf("numero de moradores?\n");
    scanf("%d", população);
    printf("Area total?\n");
    scanf("%d", area);
    printf("Qual o PIB?");
    scanf("%d", pib);
    printf("Numero de pontos turisticos?\n");
    scanf("%d", pontos_turisticos);
    
    printf("validação de dados\n");
    printf("Codigo cidade: %d\n", codigo_cidade);
    printf("Nome cidade: %s\n", nome);
    printf("população %d Habitantes\n", população);
    printf("area total %d\n", area);
    printf("PIB %d\n", pib);
    printf("Pontos turisticos %d\n", pontos_turisticos);
    printf("\n");
    printf("fim");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
