#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    printf("BEM VINDO AO JOGO SUPER TRUNFO!\n");    //Texto de boas avindas
    printf("\n");
    printf(">Começe cadastrando suas cartas<\n");   //Solicitação pra cadastrar as cartas
    
    printf("\n");   //Espaço entre o texto de boas vindas e o cadastramento das cartas


    char letra;
    char nome[30];
    char codigo[30];
    int populacao;
    int turistico;
    float area;
    float pib;

    printf("    Carta 1     \n");   //Informações da 1º carta

    printf("Digite o nome do estado: ");
    scanf("%s", nome);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo);

    printf("Digite a primeira letra do estado escolhido: ");    //Por que não consigo preencher essa caixa, e nem quebrar ela pra outra linha?
    scanf("%c", letra);

    printf("Digite a população do estado: ");
    scanf("%d", &populacao);

    printf("Digite a área do estado: ");
    scanf("%f", &area);

    printf("Digite o PIB do estado: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos do estado: ");
    scanf("%d", &turistico);
    
    printf("\n");   //muito errado, REVER 
    printf("Informações da 1º carta: \n");
    printf("\n");

    printf("Nome do estado: %s \n");



    return 0;
}
