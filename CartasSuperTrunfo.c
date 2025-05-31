#include <stdio.h>

int main() {
    
    printf("BEM VINDO AO JOGO SUPER TRUNFO!\n");    //Texto de boas avindas
    printf("\n");
    printf(">Começe cadastrando suas cartas<\n");   //Solicitação pra cadastrar as cartas
    
    printf("\n");   


    unsigned long int populacao, POPULACAO;
    int turistico, TURISTICO;
    float area, AREA;
    float pib, PIB;
    float denp, DENP;   //Densidade populacional
    float pibper, PIBPER;   //PIB Percapto
    char estado, ESTADO;
    char nome[30], NOME[30];
    char codigo[30], CODIGO[30];


    //INFORMAÇÕES DA PRIMEIRA CARTA
    printf("    >Carta 1<     \n");  
    printf("\n");

    printf("Escolha uma letra de 'A' a 'H': ");    //Letra da carta
    scanf(" %c", &estado);
    
    printf("Digite o código da carta, do '01' ao '04': ");  //Numeração da carta
    scanf("%s", codigo);

    printf("Digite o nome do estado: ");    //Nome do estado escolhido
    scanf(" %[^\n]", nome);

    printf("Digite a população do estado: ");
    scanf("%lu", &populacao);

    printf("Digite a área do estado: ");
    scanf("%f", &area);

    printf("Digite o PIB do estado: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos do estado: ");
    scanf("%d", &turistico);

    denp = (float)(populacao / area);   //DENSIDADE POPULACIONAL DA PRIMEIRA CARTA
    pibper = (float)(pib / populacao);  //PIB PERCAPTO DA PRIMEIRA CARTA

    printf("\n");
    printf("\n");
    
    //INFORMAÇÕES DA SEGUNDA CARTA 
    printf("    >Carta 2<     \n");     
    printf("\n");


    printf("Escolha uma letra de 'A' a 'H' que não tenha escolhido antes: ");
    scanf(" %c", &ESTADO);
    
    printf("Digite o códico da carta, do '01' ao '04': ");
    scanf("%s", CODIGO);

    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", NOME);

    printf("Digite a população do estado: ");
    scanf("%d", &POPULACAO);

    printf("Digite a área do estado: ");
    scanf("%f", &AREA);

    printf("Digite o pib do estado: ");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos do estado: ");
    scanf("%d", &TURISTICO);

    DENP = (float)(POPULACAO / AREA);   //DENSIDADE POPULACIONAL DA SEGUNDA CARTA
    PIBPER = (float)(PIB / POPULACAO);  //PIB PERCAPTO DA SEGUNDA CARTA


    printf("\n");
    printf("\n");

    printf("    INFORMAÇÕES DAS CARTAS  \n");   //Parte que imprime o quje o usuario preencheu no formulário
    printf("\n");

    printf(">Carta 1 \n");  //Info da primeira carta 
    printf("Código: %c%s \n", estado, codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %.3fKm² \n", area);
    printf("PIB: R$ %.3f \n", pib);
    printf("Numero de pontos turisticos: %d \n", turistico);
    printf("Densidade Populacional: %.2f \n", denp);
    printf("PIB Percapto: %.2f \n", pibper);

    printf("\n");
    printf("\n");

    printf(">Carta 2 \n");  //ifo da segunda carta
    printf("Código: %c%s \n", ESTADO, CODIGO);
    printf("Nome da Cidade: %s \n", NOME);
    printf("População: %d \n", POPULACAO);
    printf("Área: %.3fKm² \n", AREA);
    printf("PIB: R$ %.3f \n", PIB);
    printf("Numero de pontos turisticos: %d \n", TURISTICO);
    printf("Densidade Populacional: %.2F \n", DENP);
    printf("PIB Percapto: %.2f \n", PIBPER);

    printf("\n");
    printf(">COMPARANDO OS ATRIBUTOS< \n");
    printf("\n");
    
    printf("Carta 1 (1) / Carta 2 (0)\n\n");

    printf("População: (%d) venceu!\n", populacao>POPULACAO);
    printf("Área: (%d) venceu!\n", area>AREA);
    printf("PIB: (%d) venceu!\n", pib>PIB);
    printf("Pontos Turísticos: (%d)venceu!\n", turistico>TURISTICO);
    printf("Densidade Populacional: (%d) venceu!\n", denp<DENP);
    printf("PIB Percapto: (%d) venceu!\n", pibper>PIBPER);
    
    //Printf("Super Poder: %d venceu!", superpoder>SUPERPODER);

    return 0;
}
