#include <stdio.h>
#include <string.h>

int main() {
	// Programa para coletar e exibir dados de duas cartas do jogo super trunfo
	
    // Arrays para armazenar os dados de duas cartas
    char estado[2];								// Letra que representa o estado (ex: 'A')
    char codigoCarta[2][4];						// Código da carta (formato: Letra + dois dígitos, ex: A01 a D04)
	char nomeCidade[2][30];						// Nome da cidade
    int populacao[2], pontosTuristicos[2];		// População e número de pontos turísticos
    double area[2], pib[2];						// Área e PIB da cidade

    // Coleta dos dados da primeira carta
    printf("Digite o estado da primeira carta:\n");
    scanf(" %c", &estado[0]);
    
    printf("Digite o codigo da primeira carta:\n");
    scanf("%s", codigoCarta[0]);
    
    // Usando fgets para ler o nome da cidade
    printf("Digite o nome da cidade da primeira carta:\n");
    getchar();  // Limpa o buffer de entrada (remove o '\n' deixado pelo scanf) para evitar problemas com fgets()
    fgets(nomeCidade[0], sizeof(nomeCidade[0]), stdin);
    nomeCidade[0][strcspn(nomeCidade[0], "\n")] = '\0'; // Remover o caractere de nova linha que pode ser deixado pelo fgets

    printf("Digite a populacao da cidade da primeira carta:\n");
    scanf("%d", &populacao[0]);
    
    printf("Digite o pib da cidade da primeira carta:\n");
    scanf("%lf", &pib[0]);
    
    printf("Digite a area da cidade da primeira carta:\n");
    scanf("%lf", &area[0]);
    
    printf("Digite o numero de pontos turisticos da cidade da primeira carta:\n");
    scanf("%d", &pontosTuristicos[0]);

    // Coleta dos dados da segunda carta (mesmos campos da primeira)
    printf("\nDigite o estado da segunda carta:\n");
    scanf(" %c", &estado[1]);
    
    printf("Digite o codigo da segunda carta:\n");
    scanf("%s", codigoCarta[1]);
    
    // Usando fgets para ler o nome da cidade
    printf("Digite o nome da cidade da segunda carta:\n");
    getchar();	// Limpa o buffer de entrada (remove o '\n' deixado pelo scanf) para evitar problemas com fgets()
    fgets(nomeCidade[1], sizeof(nomeCidade[1]), stdin);
    nomeCidade[1][strcspn(nomeCidade[1], "\n")] = '\0'; // Remove o caractere de nova linha que pode ser deixado pelo fgets

    printf("Digite a populacao da cidade da segunda carta:\n");
    scanf("%d", &populacao[1]);
    
    printf("Digite o pib da cidade da segunda carta:\n");
    scanf("%lf", &pib[1]);
    
    printf("Digite a area da cidade da segunda carta:\n");
    scanf("%lf", &area[1]);
    
    printf("Digite o numero de pontos turisticos da cidade da segunda carta:\n");
    scanf("%d", &pontosTuristicos[1]);

    // Exibição dos dados da primeira carta
    printf("\nDados da primeira carta:\n");
    printf("Estado: %c\n", estado[0]);
    printf("Codigo: %s\n", codigoCarta[0]);
    printf("Nome da cidade: %s\n", nomeCidade[0]);
    printf("Populacao: %d\n", populacao[0]);
    printf("PIB: %.2lf\n", pib[0]);
    printf("Area: %.2lf\n", area[0]);
    printf("Pontos Turisticos: %d\n", pontosTuristicos[0]);

    // Exibição dos dados da segunda carta
    printf("\nDados da segunda carta:\n");
    printf("Estado: %c\n", estado[1]);
    printf("Codigo: %s\n", codigoCarta[1]);
    printf("Nome da cidade: %s\n", nomeCidade[1]);
    printf("Populacao: %d\n", populacao[1]);
    printf("PIB: %.2lf\n", pib[1]);
    printf("Area: %.2lf\n", area[1]);
    printf("Pontos Turisticos: %d\n", pontosTuristicos[1]);

    return 0;
}