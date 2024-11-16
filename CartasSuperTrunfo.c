
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Definicao das variaveis para o cadastro das cartas.
    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definindo as variaveis do projeto cartas.
// Criada a estrutura para armazenar os dados das cidades
typedef struct{
  char codigo[4];
  int populacao;
  float area;
  float pib;
  int ponto_turistico;

 }Carta;


 // Estrutura para exibir os dados das cidades cadastradas.

void exibir_dados(Carta carta){
    printf("-----------------------------------\n\n");
    printf("Codigo da cidade %s\n",carta.codigo);
    printf("Populacao da cidade %d\n",carta.populacao);
    printf("Area da cidade %.2f\n",carta.area);
    printf("Pib da cidade %.2f\n",carta.pib);
    printf("Numero de pontos turisticos da cidade %d\n\n",carta.ponto_turistico);
    printf("-----------------------------------\n\n");
    }

// Estrutrua para cadastras as cartas cidades.

Carta cadastrar_carta(){

    Carta carta;

    printf("Digite o Codigo da Cidade : ");
    scanf("%s", &carta.codigo);
    printf("Digite a Populacao da Cidade: ");
    scanf("%d", &carta.populacao);
    printf("Digite a Area da Cidade: ");
    scanf("%f", &carta.area);
    printf("Digite o Pib da Cidade: ");
    scanf("%f", &carta.pib);
    printf("Digite o numero de pontos turisticos da Cidade: ");
    scanf("%d", &carta.ponto_turistico);

    printf("-----------------------------------\n\n");
    return carta;
    }



int main(){
//Definicao do numero de cartas sendo 8 estados e 4 cidades dando um total de 32 cartas.
    Carta carta[32];
    int opcao, count =0;

// Estrutura de repeticao para cadastrar e imprimir dados das cartas, atraves de um menu de tres opcao.
while(1){
printf("1- Cadastrar Cidade\n");
printf("2- Imprimir Dados Cidade cadastrada\n");
printf("3- Sair\n\n");
printf("Escolha uma opcao:\n");
scanf("%d", &opcao);

// opcao 1 para iniciar o cadastro das cartas.

if (opcao == 1){
    if(count <2){
        carta[count]=cadastrar_carta();
        count++;
    }else{
        printf("Limite de cartas cadastradas atingido. \n");
    }
 // opcao 2 para imprimir os dados inseridos das cartas.

  } else if(opcao == 2){
        for(int i=0; i<count; i++){
            exibir_dados(carta[i]);
            }
// para sair da funcao while e terminar o programa.

 }else if(opcao == 3){
    break;
// caso tenham digitado um valor fora das tres opcoes.

    }else {
        printf("Opcao invalida. Tente novamente.\n");
    }

}

return(0);
}

