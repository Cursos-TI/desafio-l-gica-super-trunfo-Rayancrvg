#include <stdio.h>
    // Variáveis Carta 01
    char estado1[5], codigo1[5], cidade1[50]; // Todas as variáveis strings da Carta 01
    unsigned long int populacao1; // Usado unsigned long pedido no desafio mestre
    int ponto_tur1; // Todas as variáveis inteiras da Carta 01
    float area1, pib1; // Todas as variáveis de Ponto Flutuante da Carta 01
    float dens_popul1, pib_per1; // Inclui as variáveis do Desafio Aventureiro Carta 01
    float superPoder1; // Inclui variável do Desafio Mestre Carta 01

    char estado2[5], codigo2[5], cidade2[50]; // Todas as variáveis strings da Carta 02
    unsigned long int populacao2; // Usado unsigned long pedido no desafio mestre
    int ponto_tur2; // Todas as variáveis inteiras da Carta 02
    float area2, pib2; // Todas as variáveis de Ponto Flutuante da Carta 02
    float dens_popul2, pib_per2; // Inclui as variáveis do Desafio Aventureiro Carta 02
    float superPoder2; // Inclui variável do Desafio Mestre Carta 02

    // Carta 01 // Pega as informações da Carta 01.
    printf("Carta 01:\n"); 
    printf("Digite o Estado: "); // Imprime a solicitação para o scanf
    scanf("%s", estado1); // Lê o que foi digitado após o printf
    getchar();
    printf("Digite o Código: "); // Imprime a solicitação para o scanf
    scanf("%s", codigo1); // Lê o que foi digitado após o printf
    getchar();
    printf("Digite o nome da cidade: "); // Imprime a solicitação para o scanf
    fgets(cidade1, 50, stdin); // Lê o que foi digitado após o printf
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove a linha gerado pelo fgets
    printf("Digite a população: "); // Imprime a solicitação para o scanf
    scanf("%lu", &populacao1); // Lê o que foi digitado após o printf
    printf("Digite a área: "); // Imprime a solicitação para o scanf
    scanf("%f", &area1); // Lê o que foi digitado após o printf
    printf("Digite o PIB: "); // Imprime a solicitação para o scanf
    scanf("%f", &pib1); // Lê o que foi digitado após o printf
    printf("Digite o número de pontos turísticos: "); // Imprime a solicitação para o scanf
    scanf("%d", &ponto_tur1); // Lê o que foi digitado após o printf

    // Carta 02 // Pega as informações da Carta 02.
    printf("\nCarta 02:\n"); 
    printf("Digite o Estado: "); // Imprime a solicitação para o scanf
    scanf("%s", estado2); // Lê o que foi digitado após o printf
    getchar();
    printf("Digite o Código: "); // Imprime a solicitação para o scanf
    scanf("%s", codigo2); // Lê o que foi digitado após o printf
    getchar();
    printf("Digite o nome da cidade: "); // Imprime a solicitação para o scanf
    fgets(cidade2, 50, stdin); // Lê o que foi digitado após o printf
    cidade2[strcspn(cidade2, "\n")] = 0; // Remove a linha gerado pelo fgets
    printf("Digite a população: "); // Imprime a solicitação para o scanf
    scanf("%lu", &populacao2); // Lê o que foi digitado após o printf
    printf("Digite a área: "); // Imprime a solicitação para o scanf
    scanf("%f", &area2); // Lê o que foi digitado após o printf
    printf("Digite o PIB: "); // Imprime a solicitação para o scanf
    scanf("%f", &pib2); // Lê o que foi digitado após o printf
    printf("Digite o número de pontos turísticos: "); // Imprime a solicitação para o scanf
    scanf("%d", &ponto_tur2); // Lê o que foi digitado após o printf

    dens_popul1 = (float) populacao1 / area1; // Faz o calculo da Denseidade populacional da carta 01 e armazena na variável
    dens_popul2 = (float) populacao2 / area2; // Faz o calculo da Denseidade populacional da carta 02 e armazena na variável
    pib_per1 = (float) (pib1 * 1000000000) / populacao1; // Faz o calculo do PIB per Capita da carta 01 e armazena na variável
    pib_per2 = (float) (pib2 * 1000000000) / populacao2; // Faz o calculo do PIB per Capita da carta 02 e armazena na variável
    // Desafio novato Tema 02 
    // Compara a população das 2 cartas e volta com o resultado.
    if (populacao1 > populacao2){
        printf("\nCarta 01: %s (%s): %lu\n", cidade1, estado1, populacao1);
        printf("Carta 02: %s (%s): %lu\n", cidade2, estado2, populacao2);
        printf("Resultado: Carta 01 (%s) venceu\n", cidade1);
    } else {
        printf("\nCarta 01: %s (%s): %lu\n", cidade1, estado1, populacao1);
        printf("Carta 02: %s (%s): %lu\n", cidade2, estado2, populacao2);
        printf("Resultado: Carta 02 (%s) venceu\n", cidade2);
    };
    
    // Desafio Aventureiro Tema 02.
    int escolhaComp;
    printf("\nQual atributo da carta você quer comparar?\n");
    printf("[1] - População.\n");
    printf("[2] - Área.\n");
    printf("[3] - PIB.\n");
    printf("[4] - Número de pontos turísticos.\n");
    printf("[5] - Densidade Demográfica.\n");
    printf("Escolha uma das opções acima...\n");
    scanf("%d", &escolhaComp);
    // Começo do switch para escolha do usuário quanto a escolha da comparação a ser feita
    switch (escolhaComp)

    {
    // case 1 = População
    case 1:
        if (populacao1 > populacao2 || populacao1 < populacao2){
            if (populacao1 > populacao2){
                printf("\nCarta 01: %s (%s): %lu\n", cidade1, estado1, populacao1);
                printf("Carta 02: %s (%s): %lu\n", cidade2, estado2, populacao2);
                printf("Resultado: Carta 01 (%s) venceu\n", cidade1);
            } else {
                printf("\nCarta 01: %s (%s): %lu\n", cidade1, estado1, populacao1);
                printf("Carta 02: %s (%s): %lu\n", cidade2, estado2, populacao2);
                printf("Resultado: Carta 02 (%s) venceu\n", cidade2);
            };
        } else {
            printf("\nCarta 01: %s (%s): %lu\n", cidade1, estado1, populacao1);
            printf("Carta 02: %s (%s): %lu\n", cidade2, estado2, populacao2);
            printf("Resultado: Empate!!\n");
        };
        break;
    // case 2 = Área
    case 2:
        if (area1 > area2 || area1 < area2){
            if (area1 > area2){
                printf("\nCarta 01: %s (%s): %f\n", cidade1, estado1, area1);
                printf("Carta 02: %s (%s): %f\n", cidade2, estado2, area2);
                printf("Resultado: Carta 01 (%s) venceu\n", cidade1);
            } else {
                printf("\nCarta 01: %s (%s): %f\n", cidade1, estado1, area1);
                printf("Carta 02: %s (%s): %f\n", cidade2, estado2, area2);
                printf("Resultado: Carta 02 (%s) venceu\n", cidade2);
            };
        } else {
            printf("\nCarta 01: %s (%s): %f\n", cidade1, estado1, area1);
            printf("Carta 02: %s (%s): %f\n", cidade2, estado2, area2);
            printf("Resultado: Empate!!\n");
        };
        break;
    // case 3 = PIB
    case 3:
        if (pib1 > pib2 || pib1 < pib2){
            if (pib1 > pib2){
                printf("\nCarta 01: %s (%s): %f\n", cidade1, estado1, pib1);
                printf("Carta 02: %s (%s): %f\n", cidade2, estado2, pib2);
                printf("Resultado: Carta 01 (%s) venceu\n", cidade1);
            } else {
                printf("\nCarta 01: %s (%s): %f\n", cidade1, estado1, pib1);
                printf("Carta 02: %s (%s): %f\n", cidade2, estado2, pib2);
                printf("Resultado: Carta 02 (%s) venceu\n", cidade2);
            };
        } else {
            printf("\nCarta 01: %s (%s): %f\n", cidade1, estado1, pib1);
            printf("Carta 02: %s (%s): %f\n", cidade2, estado2, pib2);
            printf("Resultado: Empate!!\n");
        };
        break;
    // case 4 = Número de pontos turísticos
    case 4:
        if (ponto_tur1 > ponto_tur2 || ponto_tur1 < ponto_tur2){
            if (ponto_tur1 > ponto_tur2){
                printf("\nCarta 01: %s (%s): %d\n", cidade1, estado1, ponto_tur1);
                printf("Carta 02: %s (%s): %d\n", cidade2, estado2, ponto_tur2);
                printf("Resultado: Carta 01 (%s) venceu\n", cidade1);
            } else {
                printf("\nCarta 01: %s (%s): %d\n", cidade1, estado1, ponto_tur1);
                printf("Carta 02: %s (%s): %d\n", cidade2, estado2, ponto_tur2);
                printf("Resultado: Carta 02 (%s) venceu\n", cidade2);
            };
        } else {
            printf("\nCarta 01: %s (%s): %d\n", cidade1, estado1, ponto_tur1);
            printf("Carta 02: %s (%s): %d\n", cidade2, estado2, ponto_tur2);
            printf("Resultado: Empate!!\n");
        };
        break;
    // case 5 = Densidade Demográfica
    case 5:
        if (dens_popul1 < dens_popul2 || dens_popul1 > dens_popul2){
            if (dens_popul1 < dens_popul2){
                printf("\nCarta 01: %s (%s): %f\n", cidade1, estado1, dens_popul1);
                printf("Carta 02: %s (%s): %f\n", cidade2, estado2, dens_popul2);
                printf("Resultado: Carta 01 (%s) venceu\n", cidade1);
            } else {
                printf("\nCarta 01: %s (%s): %f\n", cidade1, estado1, dens_popul1);
                printf("Carta 02: %s (%s): %f\n", cidade2, estado2, dens_popul2);
                printf("Resultado: Carta 02 (%s) venceu\n", cidade2);
            };
        } else {
            printf("\nCarta 01: %s (%s): %f\n", cidade1, estado1, dens_popul1);
            printf("Carta 02: %s (%s): %f\n", cidade2, estado2, dens_popul2);
            printf("Resultado: Empate!!\n");
        };
        break;
    default:
        printf("Vôce escolheu uma opção inexistente.");
        break;
    }

int opcao1, opcao2, resultado;
    float soma1, soma2;
    printf("\nSuper Trufo - Agora você vai escolher duas opções!\n");
    printf("[1] - População.\n");
    printf("[2] - Área.\n");
    printf("[3] - PIB.\n");
    printf("[4] - Pontos Turísticos.\n");
    printf("[5] - Densidade Demográfica.\n");
    printf("Escolha uma das opções acima... ");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
    case 1:
        printf("\n Agora escolha a segunda opcao!\n");
        printf("Obs.: Não pode ser igual a primeira escolha.\n");
        printf("[2] - Área.\n");
        printf("[3] - PIB.\n");
        printf("[4] - Pontos Turísticos.\n");
        printf("[5] - Densidade Demográfica.\n");
        printf("Escolha uma das opções acima... ");
        scanf("%d", &opcao2);
        switch (opcao2)
        {
        // Comparando População e Área
        case 2:
            soma1 = (float)(populacao1 + area1);
            soma2 = (float)(populacao2 + area2);
            
            printf("\nCarta 01: %s (%s) População: %lu, Área: %.2f\n", cidade1, estado1, populacao1, area1);
            printf("Carta 02: %s (%s) População: %lu, Área: %.2f\n", cidade2, estado2, populacao2, area2);
            printf("Carta 01: Soma de População e Área: %.2f\n", soma1);
            printf("Carta 02: Soma de População e Área: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break;
        // Comparando População e PIB
        case 3:
            soma1 = (float)(populacao1 + pib1);
            soma2 = (float)(populacao2 + pib2);
            
            printf("\nCarta 01: %s (%s) População: %lu, PIB: %.2f\n", cidade1, estado1, populacao1, pib1);
            printf("Carta 02: %s (%s) População: %lu, PIB: %.2f\n", cidade2, estado2, populacao2, pib2);
            printf("Carta 01: Soma de População e PIB: %.2f\n", soma1);
            printf("Carta 02: Soma de População e PIB: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break;
        // Comparando População e Pontos Turísticos
        case 4:
            soma1 = (float)(populacao1 + ponto_tur1);
            soma2 = (float)(populacao2 + ponto_tur2);
            
            printf("\nCarta 01: %s (%s) População: %lu, Pontos Turísticos: %d\n", cidade1, estado1, populacao1, ponto_tur1);
            printf("Carta 02: %s (%s) População: %lu, Pontos Turísticos: %d\n", cidade2, estado2, populacao2, ponto_tur2);
            printf("Carta 01: Soma de População e Pontos Turísticos: %.2f\n", soma1);
            printf("Carta 02: Soma de População e Pontos Turísticos: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break;
        // Comparando População com Densidade Demográfica
        case 5:
            soma1 = (float)(populacao1 + (area1 / populacao1));
            soma2 = (float)(populacao2 + (area2 / populacao2));
            
            printf("\nCarta 01: %s (%s) População: %lu, Densidade Demográfica: %.2f\n", cidade1, estado1, populacao1, dens_popul1);
            printf("Carta 02: %s (%s) População: %lu, Densidade Demográfica: %.2f\n", cidade2, estado2, populacao2, dens_popul2);
            printf("Carta 01: Soma de População e Densidade Demográfica: %.2f\n", soma1);
            printf("Carta 02: Soma de População e Densidade Demográfica: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break; 
            
            default:
                printf("Você escolheu uma opção inexistente!!");
                break;
        };
        break;
    // Comparando cartas com Área
    case 2:
        printf("\n Agora escolha a segunda opcao!\n");
        printf("Obs.: Não pode ser igual a primeira escolha.\n");
        printf("[1] - População.\n");
        printf("[3] - PIB.\n");
        printf("[4] - Pontos Turísticos.\n");
        printf("[5] - Densidade Demográfica.\n");
        printf("Escolha uma das opções acima... ");
        scanf("%d", &opcao2);
        switch (opcao2)
        {
        // Comparando Área e População
        case 1:
            soma1 = (float)(area1 + populacao1);
            soma2 = (float)(area2 + populacao2);
            
            printf("\nCarta 01: %s (%s) Área: %.2f, População: %lu\n", cidade1, estado1, area1, populacao1);
            printf("Carta 02: %s (%s) Área: %.2f, População: %lu\n", cidade2, estado2, area2, populacao2);
            printf("Carta 01: Soma de Área e População: %.2f\n", soma1);
            printf("Carta 02: Soma de Área e População: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break;
        // Comparando Área e PIB
        case 3:
            soma1 = (float)(area1 + pib1);
            soma2 = (float)(area2 + pib2);
            
            printf("\nCarta 01: %s (%s) Área: %.2f, PIB: %.2f\n", cidade1, estado1, area1, pib1);
            printf("Carta 02: %s (%s) Área: %.2f, PIB: %.2f\n", cidade2, estado2, area2, pib2);
            printf("Carta 01: Soma de Área e PIB: %.2f\n", soma1);
            printf("Carta 02: Soma de Área e PIB: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break;
        // Comparando População e Pontos Turísticos
        case 4:
            soma1 = (float)(area1 + ponto_tur1);
            soma2 = (float)(area2 + ponto_tur2);
            
            printf("\nCarta 01: %s (%s) Área: %.2f, Pontos Turísticos: %d\n", cidade1, estado1, area1, ponto_tur1);
            printf("Carta 02: %s (%s) Área: %.2f, Pontos Turísticos: %d\n", cidade2, estado2, area2, ponto_tur2);
            printf("Carta 01: Soma de Área e Pontos Turísticos: %.2f\n", soma1);
            printf("Carta 02: Soma de Área e Pontos Turísticos: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break;
        // Comparando População com Densidade Demográfica
        case 5:
            soma1 = (float)(area1 + (area1 / populacao1));
            soma2 = (float)(area2 + (area2 / populacao2));
            
            printf("\nCarta 01: %s (%s) Área: %.2f, Densidade Demográfica: %.2f\n", cidade1, estado1, area1, dens_popul1);
            printf("Carta 02: %s (%s) Área: %.2f, Densidade Demográfica: %.2f\n", cidade2, estado2, area2, dens_popul2);
            printf("Carta 01: Soma de Área e Densidade Demográfica: %.2f\n", soma1);
            printf("Carta 02: Soma de Área e População: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break; 
            
            default:
                printf("Você escolheu uma opção inexistente!!");
                break;
        };
        break;
    // Comparando Cartas com PIB
    case 3:
        printf("\n Agora escolha a segunda opcao!\n");
        printf("Obs.: Não pode ser igual a primeira escolha.\n");
        printf("[1] - População.\n");
        printf("[2] - Área.\n");
        printf("[4] - Pontos Turísticos.\n");
        printf("[5] - Densidade Demográfica.\n");
        printf("Escolha uma das opções acima... ");
        scanf("%d", &opcao2);
        switch (opcao2)
        {
        // Comparando PIB e População
        case 1:
            soma1 = (float)(pib1 + populacao1);
            soma2 = (float)(pib2 + populacao2);
            
            printf("\nCarta 01: %s (%s) PIB: %.2f, População: %lu\n", cidade1, estado1, pib1, populacao1);
            printf("Carta 02: %s (%s) PIB: %.2f, População: %lu\n", cidade2, estado2, pib2, populacao2);
            printf("Carta 01: Soma de PIB e População: %.2f\n", soma1);
            printf("Carta 02: Soma de PIB e População: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break;
        // Comparando PIB e Área
        case 2:
            soma1 = (float)(pib1 + area1);
            soma2 = (float)(pib2 + area2);
            
            printf("\nCarta 01: %s (%s) PIB: %.2f, Área: %.2f\n", cidade1, estado1, pib1, area1);
            printf("Carta 02: %s (%s) PIB: %.2f, Área: %.2f\n", cidade2, estado2, pib2, area2);
            printf("Carta 01: Soma de PIB e Área: %.2f\n", soma1);
            printf("Carta 02: Soma de PIB e Área: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break;
        // Comparando PIB e Pontos Turísticos
        case 4:
            soma1 = (float)(pib1 + ponto_tur1);
            soma2 = (float)(pib2 + ponto_tur2);
            
            printf("\nCarta 01: %s (%s) PIB: %.2f, Pontos Turísticos: %d\n", cidade1, estado1, pib1, ponto_tur1);
            printf("Carta 02: %s (%s) PIB: %.2f, Pontos Turísticos: %d\n", cidade2, estado2, pib2, ponto_tur2);
            printf("Carta 01: Soma de PIB e Pontos Turísticos: %.2f\n", soma1);
            printf("Carta 02: Soma de PIB e Pontos Turísticos: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break;
        // Comparando PIB com Densidade Demográfica
        case 5:
            soma1 = (float)(pib1 + (area1 / populacao1));
            soma2 = (float)(pib2 + (area2 / populacao2));
            
            printf("\nCarta 01: %s (%s) PIB: %.2f, Densidade Demográfica: %.2f\n", cidade1, estado1, pib1, dens_popul1);
            printf("Carta 02: %s (%s) PIB: %.2f, Densidade Demográfica: %.2f\n", cidade2, estado2, pib2, dens_popul2);
            printf("Carta 01: Soma de PIB e Densidade Demográfica: %.2f\n", soma1);
            printf("Carta 02: Soma de PIB e Densidade Demográfica: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break; 
            
            default:
                printf("Você escolheu uma opção inexistente!!");
                break;
        };
        break;
    //Comparando Cartas com Pontos Turísticos
    case 4:
        printf("\n Agora escolha a segunda opcao!\n");
        printf("Obs.: Não pode ser igual a primeira escolha.\n");
        printf("[1] - População.\n");
        printf("[2] - Área.\n");
        printf("[3] - PIB.\n");
        printf("[5] - Densidade Demográfica.\n");
        printf("Escolha uma das opções acima... ");
        scanf("%d", &opcao2);
        switch (opcao2)
        {
        // Comparando Pontos Turísticos e População
        case 1:
            soma1 = (float)(ponto_tur1 + populacao1);
            soma2 = (float)(ponto_tur2 + populacao2);
            
            printf("\nCarta 01: %s (%s) Pontos Turísticos: %d, População: %lu\n", cidade1, estado1, ponto_tur1, populacao1);
            printf("Carta 02: %s (%s) Pontos Turísticos: %d, População: %lu\n", cidade2, estado2, ponto_tur2, populacao2);
            printf("Carta 01: Soma de Pontos Turísticos e População: %.2f\n", soma1);
            printf("Carta 02: Soma de Pontos Turísticos e População: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break;
        // Comparando Pontos Turísticos e Área
        case 2:
            soma1 = (float)(ponto_tur1 + area1);
            soma2 = (float)(ponto_tur2 + area2);
            
            printf("\nCarta 01: %s (%s) Pontos Turísticos: %d, Área: %.2f\n", cidade1, estado1, ponto_tur1, area1);
            printf("Carta 02: %s (%s) Pontos Turísticos: %d, Área: %.2f\n", cidade2, estado2, ponto_tur2, area2);
            printf("Carta 01: Soma de Pontos Turísticos e Área: %.2f\n", soma1);
            printf("Carta 02: Soma de Pontos Turísticos e Área: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break;
        // Comparando Pontos Turísticos e PIB
        case 3:
            soma1 = (float)(ponto_tur1 + pib1);
            soma2 = (float)(ponto_tur2 + pib2);
            
            printf("\nCarta 01: %s (%s) Pontos Turísticos: %d, PIB: %.2f\n", cidade1, estado1, ponto_tur1, pib1);
            printf("Carta 02: %s (%s) Pontos Turísticos: %d, PIB: %.2f\n", cidade2, estado2, ponto_tur2, pib2);
            printf("Carta 01: Soma de Pontos Turísticos e PIB: %.2f\n", soma1);
            printf("Carta 02: Soma de Pontos Turísticos e PIB: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break;
        // Comparando Pontos Turísticos com Densidade Demográfica
        case 5:
            soma1 = (float)(ponto_tur1 + (area1 / populacao1));
            soma2 = (float)(ponto_tur2 + (area2 / populacao2));
            
            printf("\nCarta 01: %s (%s) Pontos Turísticos: %d, Densidade Demográfica: %.2f\n", cidade1, estado1, ponto_tur1, dens_popul1);
            printf("Carta 02: %s (%s) Pontos Turísticos: %d, Densidade Demográfica: %.2f\n", cidade2, estado2, ponto_tur2, dens_popul2);
            printf("Carta 01: Soma de Pontos Turísticos e Densidade Demográfica: %.2f\n", soma1);
            printf("Carta 02: Soma de Pontos Turísticos e Densidade Demográfica: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break; 
            
            default:
                printf("Você escolheu uma opção inexistente!!");
                break;
        };
        break;
    // Comparando cartas com Densidade Densidade Demográfica
    case 5:
        printf("\n Agora escolha a segunda opcao!\n");
        printf("Obs.: Não pode ser igual a primeira escolha.\n");
        printf("[1] - População.\n");
        printf("[2] - Área.\n");
        printf("[3] - PIB.\n");
        printf("[4] - Pontos Turísticos.\n");
        printf("Escolha uma das opções acima... ");
        scanf("%d", &opcao2);
        switch (opcao2)
        {
        // Comparando Densidade Demográfica e População
        case 1:
            soma1 = (float)((area1 / populacao1) + populacao1);
            soma2 = (float)((area1 / populacao1) + populacao2);
            
            printf("\nCarta 01: %s (%s) Densidade Demográfica: %.2f, População: %lu\n", cidade1, estado1, dens_popul1, populacao1);
            printf("Carta 02: %s (%s) Densidade Demográfica: %.2f, População: %lu\n", cidade2, estado2, dens_popul2, populacao2);
            printf("Carta 01: Soma de Densidade Demográfica e População: %.2f\n", soma1);
            printf("Carta 02: Soma de Densidade Demográfica e População: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break;
        // Comparando Densidade Demográfica e Área
        case 2:
            soma1 = (float)((area1 / populacao1) + area1);
            soma2 = (float)((area1 / populacao1) + area2);
            
            printf("\nCarta 01: %s (%s) Densidade Demográfica: %.2f, Área: %.2f\n", cidade1, estado1, dens_popul1, area1);
            printf("Carta 02: %s (%s) Densidade Demográfica: %.2f, Área: %.2f\n", cidade2, estado2, dens_popul2, area2);
            printf("Carta 01: Soma de Densidade Demográfica e Área: %.2f\n", soma1);
            printf("Carta 02: Soma de Densidade Demográfica e Área: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break;
        // Comparando Densidade Demográfica e PIB
        case 3:
            soma1 = (float)((area1 / populacao1) + pib1);
            soma2 = (float)((area1 / populacao1) + pib2);
            
            printf("\nCarta 01: %s (%s) Densidade Demográfica: %.2f, PIB: %.2f\n", cidade1, estado1, dens_popul1, pib1);
            printf("Carta 02: %s (%s) Densidade Demográfica: %.2f, PIB: %.2f\n", cidade2, estado2, dens_popul2, pib2);
            printf("Carta 01: Soma de Densidade Demográfica e PIB: %.2f\n", soma1);
            printf("Carta 02: Soma de Densidade Demográfica e PIB: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break;
        // Comparando Densidade Demográfica e Pontos Turísticos
        case 4:
            soma1 = (float)((area1 / populacao1) + ponto_tur1);
            soma2 = (float)((area1 / populacao1) + ponto_tur2);
            
            printf("\nCarta 01: %s (%s) Densidade Demográfica: %.2f, Pontos Turísticos: %d\n", cidade1, estado1, dens_popul1, ponto_tur1);
            printf("Carta 02: %s (%s) Densidade Demográfica: %.2f, Pontos Turísticos: %d\n", cidade2, estado2, dens_popul2, ponto_tur2);
            printf("Carta 01: Soma de Densidade Demográfica e Pontos Turísticos: %.2f\n", soma1);
            printf("Carta 02: Soma de Densidade Demográfica e Pontos Turísticos: %.2f\n", soma2);
            resultado = soma1 > soma2 ? 1 : soma2 > soma1 ? 2 : 0;
            if (resultado == 1){
                printf("\nResultado da Comparação: Carta 01 (%s) venceu!\n", cidade1);
            } else if (resultado == 2){
                printf("\nResultado da Comparação: Carta 02 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado da Comparação: Empate!");
            };
            break; 
            
            default:
                printf("Você escolheu uma opção inexistente!!");
                break;
        };
        break;        
    default:
        printf("Vôce escolheu uma opção inexistente!!");
        break;
    };
    return 0;
}
