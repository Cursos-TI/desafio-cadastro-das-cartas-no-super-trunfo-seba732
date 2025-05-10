#include <stdio.h>

int main() { 
    //aqui vou declarar as variaveis da primera carta 1
    char estado;
    char codigo1, codigo2; //tive dificuldade pesquisei um ponco e foi uma forma mais facil que entendi
    char cidade [25];  
    float area = 7000.000;
    float pib = 456.0000;
    int pontoturistico = 20;

    //aqui peço para digitar os dados da carta 1
    printf("Digite o codigo do estado de A-H: ");
    scanf("%s", &estado);

    printf("Digite o codigo da carta de A1-A4: ");
    scanf("  %c %c", &codigo1, &codigo2); //dificuldade em ler 2 caracter, encontrei esse metodo em uma pesquisa 

    printf("Digite o Nome da cidade: " );
    scanf("%s", cidade);

    printf("Digite a area da cidade em M²: ");
    scanf("%f", &area);

    printf("Digite o pibe: ");
    scanf("%f", &pib);

    printf("Digete o numero de pontos turisticos: ");
    scanf("%d", &pontoturistico);

    //aqui eu faço print das respostas da carta1 
    printf("O estado é: %c\n", estado);
    printf("O codigo da carta é: %c%c\n", codigo1, codigo2);
    printf("O nome da cidade é: %s\n", cidade);
    printf("A area da cidade é: %f\n", area);
    printf("O pibe da cidade é: %f\n", pib);
    printf("O numero de pontostos turisticos é: %d\n", pontoturistico);

    //Agora vou declarar as variaveis da carta 2
    char estado2;
    char codigo3, coddigo4;
    char cidade2 [24];
    float area2 = 70.000000;
    float pib2 = 56.000000;
    int pontoturistico2 = 20;

    //peço para digitar os dados da carta 2, para diferenciar as cartas peço que digite valores diferentes da primeira 
    printf("Digite o estado da carta 2 de A-H ");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta 2: ");
    scanf(" %c %c", &codigo3, &coddigo4);

    printf("Digite o nome da segunda cidade:  ");
    scanf("%s", cidade2);

    printf("Digite a area em KM²: ");
    scanf("%f", &area2);

    printf("Digite o pibe: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontoturistico2);

    //agora o print da segunda carta para melhor diferenciar, coloque valores diferentes ao digitar
    printf(" O estado é: %c\n", estado2);
    printf("O codigo da carta é: %c%c\n", codigo3, coddigo4);
    printf("O nome da cidade é: %s\n", cidade2);
    printf("A area da cidade é: %f\n", area2 );
    printf("O pibe da cidade é: %f\n", pib2);
    printf("O numero de pontos turisticos é: %d\n", pontoturistico2);


}