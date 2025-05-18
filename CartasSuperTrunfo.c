#include <stdio.h>

int main() { 
    //variaveis da primera carta 1
    char estado = 'a'; // uso de char para armazenar um caractere 
    char codigo1, codigo2, codigo3; // variáveis para códigos de 3 caracteres
    char cidade [25];  // array de caracteres para o nome da cidade
    int populacao = 6564000; //numero intero populção
    float area = 7000.000;  // float que aceita casas decimais area km²
    float pib = 456.5671009; // float que aceita casas decimais pib em bilhoes 
    int pontoturistico = 20; // numero inteiro 
    float densidade; // A densidade é calculada dividindo o número total de habitantes pela área da cidade
    float pibpercapita; // PIB per Capita é calculada dividindo o número total do PIB / habitantes
    double superPoder; // Pontuação total calculada da primeira carta 

    //Agora vou declarar as variaveis da carta 2
    char estado2 = 'b'; // código do estado da carta 2
    char codigo4, codigo5, codigo6; // variáveis para códigos de 3 caracteres
    char cidade2 [24]; // nome da cidade da carta 2
    int populacao2 = 900000; //numero inteiro população
    float area2 = 965.080700; // área em km²
    float pib2 = 569.004400; // PIB em bilhões
    int pontoturistico2 = 20; // pontos turísticos
    float densidade2; // A densidade é calculada dividindo o número total de habitantes pela área da cidade
    float pibpercapita2; // PIB per Capita é calculada dividindo o número total do PIB / habitantes
    double superPoder2; // Pontuação total calculada da carta 2

    //aqui peço para digitar os dados da carta 1
    printf("Digite o codigo do estado de A-H: "); 
    scanf("%s", &estado);

    printf("Digite o codigo da carta de A01-A04: "); //digitar 3 digitos
    scanf("  %c %c %c", &codigo1, &codigo2, &codigo3); // leitura de 3 caracteres

    printf("Digite o Nome da cidade: " ); //ao digitar, nao usar nome composto
    scanf("%s", cidade); // leitura de palavra única de até 24 caracteres

    printf("Digite o nmero de habitantes: ");
    scanf("%d", &populacao); //leitura  da população

    printf("Digite a area da cidade em kM²: "); //digitar a arem em km²
    scanf("%f", &area); 

    printf("Digite o pib: "); //digitar o pib em bilhoes 
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: "); //digitar pontos turisticos 
    scanf("%d", &pontoturistico);

    densidade = (float) populacao / area; // O cast (float) garante que a divisão seja feita com casas decimais exata
    pibpercapita = (float) (pib * 1e9) / populacao; // O PIB foi fornecido em bilhões, Essa foi a forma que encontre para converter em reais.
    
    //Superpoder é a soma de todos os critérios da carta. Quanto menor a densidade, maior o valor do inverso.
    superPoder = pib + (float) populacao + area + (float)pontoturistico + pibpercapita + (1.0f/ densidade);

       
    //Peço para digitar os dados da carta 2, p
    printf("Digite o estado da carta 2 de A-H "); //Peço que digite valores diferentes da primeira 
    scanf("%s", &estado2);

    printf("Digite o codigo da carta 2 de A01- A04: "); //digitar 3 digitos 
    scanf(" %c %c %c", &codigo4, &codigo5, &codigo6);

    printf("Digite o nome da segunda cidade:  "); //Usar diferente do primeiro, não usar nome composto
    scanf("%s", cidade2); // leitura de palavra única de até 24 caracteres

    printf("Digite o nmero de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a area em KM²: ");
    scanf("%f", &area2);

    printf("Digite o pib: "); //digitar o pib em bilhoes
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontoturistico2);

    densidade2 = (float) populacao2 / area2; // O cast (float) garante que a divisão seja feita com casas decimais exata
    pibpercapita2 =  (float) (pib2 * 1e9) / populacao2; // O PIB foi fornecido em bilhões, Essa foi a forma que encontrei para converter em reais.

    // Superpoder é a soma de todos os critérios da carta. Quanto menor a densidade, maior o valor do inverso
    superPoder2 = pib2 + (float) populacao2 + area2 + (float)pontoturistico2 + pibpercapita2 + (1.0f/ densidade2);

    //aqui eu faço print das respostas da carta1 
    printf("O estado é: %c\n", estado); //exibe a letra do estado 
    printf("O codigo da carta é: %c%c%C\n", codigo1, codigo2, codigo3); //exibe 3 caracteres 
    printf("O nome da cidade é: %s\n", cidade); //exibe o nome da cidade
    printf("O numero de habitantes é: %d\n", populacao); //exibe o numero de habitantes
    printf("A area da cidade é: %f\n", area); // exibe a area da cidade 
    printf("O PIB da cidade é: %f\n", pib); //exibe o pib da cidade  
    printf("O numero de pontostos turisticos é: %d\n", pontoturistico); // exibe o numero de pontos turisticos
    printf("A densidade é: %.2f hab/km²\n" , densidade); //exibe o cauculo da densidade 
    printf("O PIB per capita é: %.2f reais\n" , pibpercapita ); //exibe cauculo do pib per capita


    //agora o print da segunda carta
    printf(" O estado é: %c\n", estado2); //exibe a letra do estado 2 
    printf("O codigo da carta é: %c%c%c\n", codigo4, codigo5, codigo6); //exibe 3 caracteres
    printf("O nome da cidade é: %s\n", cidade2); //exibe o nome da cidade 2
    printf("O numero de habitantes é: %d\n", populacao2); //exibe o numero de habitantes 2
    printf("A area da cidade é: %f\n", area2 ); // exibe a area da cidade 2
    printf("O PIB da cidade é: %f\n", pib2); //exibe o pib da cidade 2
    printf("O numero de pontos turisticos é: %d\n", pontoturistico2);
    printf("A densidade é: %.2f hab/km²\n" , densidade2 ); //exibe o cauculo da densidade 
    printf("O PIB per capita é: %.2f reais\n" , pibpercapita2 ); //exibe cauculo do pib per capita

    //comparação das cartas 
    printf("A popução da primeira carta (%d) e maior que a segunta carta (%d): %d\n",populacao, populacao2, populacao > populacao2);
    printf("A area da carta primeira carta (%.2f) é maior que a segunda carta (%.2f): %d\n", area, area2, area > area2);
    printf("O pib da primerira carta (%.2f) é maior que o pibe da segunda carta (%2f): %d\n", pib, pib2, pib > pib2);
    printf("A primeira carta (%d) tem mais pontos turisticos que a segunda carta (%.d): %d\n", pontoturistico, pontoturistico2, pontoturistico > pontoturistico2);
    printf("A densidade da primeira (%.2f) carta é maio que a segunda carta (%.2f) %d\n", densidade, densidade2, densidade > densidade2);
    printf("O PIB per capita da primeira carta (%.2f) e maior que a segunda (%.2f) %d\n", pibpercapita, pibpercapita2, pibpercapita > pibpercapita2);
   
         

    // Exibe o valor total de cada carta  
    printf("Super Poder da carta 1: %.2lf\n", superPoder);
    printf("Super Poder da carta 2: %.2lf\n", superPoder2);

    //exibe 1 se for verdadeiro e 0 se for falso 
    printf("População a carta 1 venceu: %d\n", populacao > populacao2); //se respota 1 verdadeiro se 0 falso 
    printf("Area a carta 1 venceu: %d\n", area > area2); //se respota 1 verdadeiro se 0 falso
    printf("PIB a carta 1 venceu: %d\n", pib > pib2); //se respota 1 verdadeiro se 0 falso
    printf("Pontos turisticos a carta 1 venceu: %d\n", pontoturistico > pontoturistico2); //se respota 1 verdadeiro se 0 falso
    printf("Densidade a carta 1 venceu: %d\n", densidade > densidade2);//se respota 1 verdadeiro se 0 falso
    printf("PIB per capita a carta 1 venceu: %d\n", pibpercapita > pibpercapita2);//se respota 1 verdadeiro se 0 falso
    printf("super poder a carta 1 venceu: %d\n", superPoder > superPoder2); //se respota 1 verdadeiro se 0 falso


    return 0; //finaliza o programa 

}