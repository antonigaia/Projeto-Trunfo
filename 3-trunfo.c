#include <stdio.h>

    int (main)() {
        printf("Olá, você está no Super Trunfo!!!\n");

        // Definindo as variáveis
        char estadoA[30], estadoB[30], cidadeA[30], cidadeB[30];
        double areaA, areaB, percapitA, percapitB, populacaoA, populacaoB, pibA, pibB;
        int codigoA, codigoB, pturisticosA, pturisticosB;
        
        // Solicitando ao usuário que informe o estadoA
        printf("Informe o estado A(digite sem acentos, por favor): \n");
        scanf("%s",&estadoA);

        // Solicitando ao usuário que informe o códigoA
        printf("Informe o código A(01 até o 04): \n");
        scanf("%d",&codigoA);

        // Solicitando ao usuário que informe a cidadeA
        printf("Informe a cidade A(digite sem acentos, por favor): \n");
        scanf("%s",&cidadeA);

        // Solicitando ao usuário que informe a áreaA
        printf("Informe a área A(km²): \n");
        scanf("%lf",&areaA);

        // Solicitando ao usuário que informe a populaçãoA
        printf("Informe a população A : \n");
        scanf("%lf",&populacaoA);

        // Solicitando ao usuário que informe o PIBA
        printf("Informe o PIB A: \n");
        scanf("%lf",&pibA);

        // Solicitando ao usuário que informe o número de pontos turísticosA
        printf("Informe o número de pontos turísticos de A: \n");
        scanf("%d",&pturisticosA);

        percapitA = pibA/populacaoA;
        
        // Verificando os valores inseridos de A
        printf("Logo abaixo, você poderá conferir as informações que você informou sobre o ponto A:\n");
        printf("O estado informado foi: %s\n", estadoA);
        printf("Seu código é: %.1s%d\n", estadoA, codigoA);
        printf("A cidade informada foi: %s\n", cidadeA);
        printf("A área informada foi: %.2lf km²\n", areaA);
        printf("A população informada foi: %.2lf hab.\n", populacaoA);
        printf("O PIB informado foi: %.2lf reais\n", pibA);
        printf("O número de pontos turísticos informado foi: %d\n", pturisticosA);
        printf("A densidade populacional é: %.2lf hab/km²\n", populacaoA/areaA);
        printf("O PIB per capita é: %.2lf reais\n" , percapitA);

        // Solicitando ao usuário que informe o estadoB
        printf("Informe o estado(digite sem acentos, por favor): \n");
        scanf("%s",&estadoB);

        // Solicitando ao usuário que informe o códigoB
        printf("Informe o código(01 até o 04): \n");
        scanf("%d",&codigoB);

        // Solicitando ao usuário que informe a cidadeB
        printf("Informe a cidade(digite sem acentos, por favor): \n");
        scanf("%s",&cidadeB);

        // Solicitando ao usuário que informe a áreaB
        printf("Informe a área(km²): \n");
        scanf("%lf",&areaB);

        // Solicitando ao usuário que informe a populaçãoB
        printf("Informe a população: \n");
        scanf("%lf",&populacaoB);

        // Solicitando ao usuário que informe o PIBB
        printf("Informe o PIB: \n");
        scanf("%lf",&pibB);

        // Solicitando ao usuário que informe o número de pontos turísticosB
        printf("Informe o número de pontos turísticos: \n");
        scanf("%d",&pturisticosB);

        percapitB = pibB/populacaoB;

        // Verificando os valores inseridos de B
        printf("Logo abaixo, você poderá conferir as informações que você informou:\n");
        printf("O estado informado foi: %s\n", estadoB);
        printf("Seu código é: %.1s%d\n", estadoB, codigoB);
        printf("A cidade informada foi: %s\n", cidadeB);
        printf("A área informada foi: %.2lf km²\n", areaB);
        printf("A população informada foi: %.2lf hab.\n", populacaoB);
        printf("O PIB informado foi: %.2lf reais\n", pibB);
        printf("O número de pontos turísticos informado foi: %d\n", pturisticosB);
        printf("A densidade populacional é: %.2lf hab/km²\n", populacaoB/areaB);
        printf("O PIB per capita é: %.2lf reais\n" , pibB/populacaoB);

        // Comparando os valores de A e B
        //Comparanto a área
        printf("Agora você verá a comparação entre os valores informados:\n");
        printf("A área maior é da: %s \n", areaA > areaB ? "Carta 1" : "Carta 2");
        printf("A população maior é da: %s \n", populacaoA > populacaoB ? "Carta 1" : "Carta 2");
        printf("O PIB maior é da: %s \n", pibA > pibB ? "Carta 1" : "Carta 2");
        printf("O PIB per capita maior é da: %s \n", percapitA > percapitB ? "Carta 1" : "Carta 2");
        printf("O número de pontos turísticos maior é da: %s \n", pturisticosA > pturisticosB ? "Carta 1" : "Carta 2");
        printf("A densidade populacional será calculada para averiguar o menor valor\n");
        printf("A densidade populacional ganhadora, é da: %s \n", populacaoA/areaA < populacaoB/areaB ? "Carta 1" : "Carta 2");
        printf("O PIB per capita ganhador, é da: %s \n", percapitA > percapitB ? "Carta 1" : "Carta 2");
        printf("O Super Trunfo, o total de todas as pontuações, sendo o ganhador é da: %s \n", (populacaoA + areaA + pibA + percapitA + pturisticosA +populacaoA/areaA) > (populacaoB + areaB + pibB + percapitB + pturisticosB + populacaoB/areaB) ? "Carta 1" : "Carta 2"); 

        return 0;
    }