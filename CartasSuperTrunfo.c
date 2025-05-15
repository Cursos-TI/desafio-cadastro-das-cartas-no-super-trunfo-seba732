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

    //Agora vou declarar as variaveis da carta 2
    char estado2 = 'b'; // código do estado da carta 2
    char codigo4, codigo5, codigo6; // variáveis para códigos de 3 caracteres
    char cidade2 [24]; // nome da cidade da carta 2
    int populacao2 = 900000; //numero inteiro população
    float area2 = 965.080700; // área em km²
    float pib2 = 569.004400; // PIB em bilhões
    int pontoturistico2 = 20; // pontos turísticos

    //aqui peço para digitar os dados da carta 1
    printf("Digite o codigo do estado de A-H: "); 
    scanf("%s", &estado);

    printf("Digite o codigo da carta de A01-A04: "); //digitar 3 digitos
    scanf("  %c %c %c", &codigo1, &codigo2, &codigo3); // leitura de 3 caracteres

    printf("Digite o Nome da cidade: " ); //ao digitar, nao usar nome composto
    scanf("%s", cidade); // leitura de palavra única de até 24 caracteres

    printf("Digite o nmero de habitantes: ");
    scanf("%d", &populacao); //leitura  da populção

    printf("Digite a area da cidade em kM²: "); //digitar a arem em km²
    scanf("%f", &area); 

    printf("Digite o pib: "); //digitar o pib em bilhoes 
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: "); //digitar pontos turisticos 
    scanf("%d", &pontoturistico);

      
    //peço para digitar os dados da carta 2, p
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

    //aqui eu faço print das respostas da carta1 
    printf("O estado é: %c\n", estado); //exibe a letra do estado 
    printf("O codigo da carta é: %c%c%C\n", codigo1, codigo2, codigo3); //exibe 3 caracteres 
    printf("O nome da cidade é: %s\n", cidade); //exibe o nome da cidade
    printf("O numero de habitantes é: %d\n", populacao); //exibe o numero de habitantes
    printf("A area da cidade é: %f\n", area); // exibe a area da cidade 
    printf("O pibe da cidade é: %f\n", pib); //exibe o pib da cidade  
    printf("O numero de pontostos turisticos é: %d\n", pontoturistico); // exibe o numero de pontos turisticos

    //agora o print da segunda carta
    printf(" O estado é: %c\n", estado2); //exibe a letra do estado 2 
    printf("O codigo da carta é: %c%c%c\n", codigo4, codigo5, codigo6); //exibe 3 caracteres
    printf("O nome da cidade é: %s\n", cidade2); //exibe o nome da cidade 2
    printf("O numero de habitantes é: %d\n", populacao2); //exibe o numero de habitantes 2
    printf("A area da cidade é: %f\n", area2 ); // exibe a area da cidade 2
    printf("O pibe da cidade é: %f\n", pib2); //exibe o pib da cidade 2
    printf("O numero de pontos turisticos é: %d\n", pontoturistico2);

    return 0; //finaliza o programa 

}