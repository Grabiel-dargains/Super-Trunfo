#include <stdio.h>
int main(){

� � char estado, codigo[3], codigo_num[2];

� � int populacao, pontos_turisticos;

� � float pib, area;

� � char nome_da_cidade[50];



� � printf("Insira os dados para a primeira carta:\n");

� � printf("Escolha uma letra de A-H");

� � scanf("%c", &estado);



� � printf("Escolha um n�mero entre 01-04");

� � scanf("%c", &codigo_num);

� � char codigo = estado + codigo_num;



� � printf("Digite o nome da cidade:");

� � scanf("%c", &nome_da_cidade);



� � printf("Digite a popula��o da cidade:");

� � scanf("%i", &populacao);



� � printf("Digite a �rea da cidade:");

� � scanf("%f", &area);



� � printf("Digite o PIB da cidade:");

� � scanf("%f", &pib);



� � printf("Quantos pontos tur�sticos a cidade tem?");

� � scanf("%i", &pontos_turisticos);



� � char carta1[] = "Estado: %c \n", estado;

� � � � � � � � � � "C�digo da carta: %c \n", codigo;

� � � � � � � � � � "Nome da cidade: %c", nome_da_cidade;

� � � � � � � � � � "Popula��o: %i \n", populacao;

� � � � � � � � � � "�rea: %fkm� \n", area;

� � � � � � � � � � "Pib: %f \n", pib;

� � � � � � � � � � "Qtd Pontos Tur�sticos: %i \n", pontos_turisticos;

� �

� � printf("Insira os dados para a segunda carta:\n");

� � printf("Escolha uma letra de A-H");

� � scanf("%c", &estado);



� � printf("Escolha um n�mero entre 01-04");

� � scanf("%c", &codigo_num);

� � char codigo = estado + codigo_num;



� � printf("Digite o nome da cidade:");

� � scanf("%c", &nome_da_cidade);



� � printf("Digite a popula��o da cidade:");

� � scanf("%i", &populacao);



� � printf("Digite a �rea da cidade:");

� � scanf("%f", &area);



� � printf("Digite o PIB da cidade:");

� � scanf("%f", &pib);



� � printf("Quantos pontos tur�sticos a cidade tem?");

� � scanf("%i", &pontos_turisticos);



� � char carta2[] = "Estado: %c \n", estado;

� � � � � � � � � � "C�digo da carta: %c \n", codigo;

� � � � � � � � � � "Nome da cidade: %c", nome_da_cidade;

� � � � � � � � � � "Popula��o: %i \n", populacao;

� � � � � � � � � � "�rea: %fkm� \n", area;

� � � � � � � � � � "Pib: %f \n", pib;

� � � � � � � � � � "Qtd Pontos Tur�sticos: %i \n", pontos_turisticos;



� � char separador[] = "==========================\n";

� �

� � printf(carta1, separador, carta2) ;

}
