#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Variáveis para a primeira carta
    unsigned long int populacao1;
    int pontosturisticos1;
    char estado1[30], nome1[30], codigo1[2];
    float PIB1, area1, densidadepopulacional1, pibpercapita1;

    // Variáveis para a segunda carta
    unsigned long int populacao2;
    int pontosturisticos2;
    char estado2[30], nome2[30], codigo2[2];
    float PIB2, area2, densidadepopulacional2, pibpercapita2;


    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar primeira carta\n");
        printf("2. Cadastrar segunda carta\n");
        printf("3. Exibir cartas cadastradas\n");
        printf("4. Realizar batalha\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Cadastro da primeira carta:\n");

                printf("Em qual Estado está a cidade?\n");
                scanf(" %s", estado1);

                printf("Qual o nome da cidade?\n");
                scanf("%s", nome1);

                printf("Digite um código de A a H e um número de 1 a 8 para registrar a carta, como A1: \n");
                scanf("%s", codigo1);

                printf("Qual a população da cidade?\n");
                scanf("%lu", &populacao1);

                printf("Qual o PIB da cidade?\n");
                scanf("%f", &PIB1);

                printf("Quantos pontos turísticos tem a cidade?\n");
                scanf("%d", &pontosturisticos1);

                printf("Qual a área da cidade?\n");
                scanf("%f", &area1);

                pibpercapita1 = PIB1 / populacao1;
                densidadepopulacional1 = populacao1 / area1;

                printf("Cadastro da primeira carta concluído!\n");
                break;

            case 2:
                printf("Cadastro da segunda carta:\n");

                printf("Em qual Estado está a cidade?\n");
                scanf(" %s", estado2);

                printf("Qual o nome da cidade?\n");
                scanf("%s", nome2);

                printf("Digite um código de A a H e um número de 1 a 8 para registrar a carta, como A1: \n");
                scanf("%s", codigo2);

                printf("Qual a população da cidade?\n");
                scanf("%lu", &populacao2);

                printf("Qual o PIB da cidade?\n");
                scanf("%f", &PIB2);

                printf("Quantos pontos turísticos tem a cidade?\n");
                scanf("%d", &pontosturisticos2);

                printf("Qual a área da cidade?\n");
                scanf("%f", &area2);

                pibpercapita2 = PIB2 / populacao2;
                densidadepopulacional2 = populacao2 / area2;

                printf("Cadastro da segunda carta concluído!\n");
                break;

            case 3:
                printf("Dados da primeira carta:\n");
                printf("Estado: %s\n", estado1);
                printf("Cidade: %s\n", nome1);
                printf("Código: %s\n", codigo1);
                printf("População: %lu\n", populacao1);
                printf("PIB: %f\n", PIB1);
                printf("Pontos Turísticos: %d\n", pontosturisticos1);
                printf("Área: %f\n", area1);
                printf("Pib per capita: %f\n", pibpercapita1);
                printf("Densidade populacional: %f\n", densidadepopulacional1);

                printf("Dados da segunda carta:\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", nome2);
                printf("Código: %s\n", codigo2);
                printf("População: %lu\n", populacao2);
                printf("PIB: %f\n", PIB2);
                printf("Pontos Turísticos: %d\n", pontosturisticos2);
                printf("Área: %f\n", area2);
                printf("Pib per capita: %f\n", pibpercapita2);
                printf("Densidade populacional: %f\n", densidadepopulacional2);
                break;

            case 4:
                printf("Hora da batalha!\n");

                if (populacao1 > populacao2) {
                    printf("População: Carta 1 venceu!\n");
                } else if (populacao2 > populacao1) {
                    printf("População: Carta 2 venceu!\n");
                } else {
                    printf("População: Empate!\n");
                }

                if (PIB1 > PIB2) {
                    printf("PIB: Carta 1 venceu!\n");
                } else if (PIB2 > PIB1) {
                    printf("PIB: Carta 2 venceu!\n");
                } else {
                    printf("PIB: Empate!\n");
                }

                if (pontosturisticos1 > pontosturisticos2) {
                    printf("Pontos Turísticos: Carta 1 venceu!\n");
                } else if (pontosturisticos2 > pontosturisticos1) {
                    printf("Pontos Turísticos: Carta 2 venceu!\n");
                } else {
                    printf("Pontos Turísticos: Empate!\n");
                }

                if (area1 > area2) {
                    printf("Área: Carta 1 venceu!\n");
                } else if (area2 > area1) {
                    printf("Área: Carta 2 venceu!\n");
                } else {
                    printf("Área: Empate!\n");
                }

                if (pibpercapita1 > pibpercapita2) {
                    printf("PIB per capita: Carta 1 venceu!\n");
                } else if (pibpercapita2 > pibpercapita1) {
                    printf("PIB per capita: Carta 2 venceu!\n");
                } else {
                    printf("PIB per capita: Empate!\n");
                }

                if (densidadepopulacional1 < densidadepopulacional2) {
                    printf("Densidade populacional: Carta 2 venceu!\n");
                } else if (densidadepopulacional2 < densidadepopulacional1) {
                    printf("Densidade populacional: Carta 1 venceu!\n");
                } else {
                    printf("Densidade populacional: Empate!\n");
                }

                if (populacao1 + PIB1 + pontosturisticos1 + area1 + pibpercapita1 + densidadepopulacional1 >
                    populacao2 + PIB2 + pontosturisticos2 + area2 + pibpercapita2 + densidadepopulacional2) {
                    printf("Poder: A carta 1 tem o maior nível de Super Poder!\n");
                } else if (populacao2 + PIB2 + pontosturisticos2 + area2 + pibpercapita2 + densidadepopulacional2 >
                           populacao1 + PIB1 + pontosturisticos1 + area1 + pibpercapita1 + densidadepopulacional1) {
                    printf("Poder: A carta 2 tem o maior nível de Super Poder!\n");
                } else {
                    printf("Poder: Empate!\n");
                }
                break;

            case 5:
                printf("Obrigado por jogar!\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (opcao != 5);
    
    return 0;
}