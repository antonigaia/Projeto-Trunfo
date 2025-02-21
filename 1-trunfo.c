#include <stdio.h>

    int (main)() {
        printf("Olá, você está no Super Trunfo!!!\n");

        // Definindo as variáveis
        char estado[30];
        char cidade[30];
        float area;
        float populacao;
        float pib;
        int codigo;
        int pturisticos;
        
        // Solicitando ao usuário que informe o estado
        printf("Informe o estado(digite sem acentos, por favor): \n");
        scanf("%s",&estado);

        // Solicitando ao usuário que informe o código
        printf("Informe o código(01 até o 04): \n");
        scanf("%d",&codigo);

        // Solicitando ao usuário que informe a cidade
        printf("Informe a cidade: \n");
        scanf("%s",&cidade);

        // Solicitando ao usuário que informe a área
        printf("Informe a área(km²): \n");
        scanf("%f",&area);

        // Solicitando ao usuário que informe a população
        printf("Informe a população: \n");
        scanf("%f",&populacao);

        // Solicitando ao usuário que informe o PIB
        printf("Informe o PIB: \n");
        scanf("%f",&pib);

        // Solicitando ao usuário que informe o número de pontos turísticos
        printf("Informe o número de pontos turísticos: \n");
        scanf("%d",&pturisticos);

        // Verificando se o código é válido
        printf("Logo abaixo, você poderá conferir as informações que você informou:\n");
        printf("O estado informado foi: %s\n", estado);
        printf("O código informado foi: %.1s%d\n", estado, codigo);
        printf("A cidade informada foi: %s\n", cidade);
        printf("A área informada foi: %f\n", area);
        printf("A população informada foi: %f\n", populacao);
        printf("O PIB informado foi: %f\n", pib);
        printf("O número de pontos turísticos informado foi: %d\n", pturisticos);

        return 0;
    }