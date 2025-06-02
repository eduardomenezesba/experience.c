#include<stdio.h>
// Saída de dados em C
// Este programa solicita ao usuário que insira sua idade, altura, nome e matrícula,
// e exibe essas informações formatadas.
// O programa utiliza tipos de dados primitivos como int, float, char e string (array de char).
// O objetivo é demonstrar a entrada e saída de dados em C, bem como o uso de variáveis.
int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    
    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - matrícula: %d\n", nome, matricula);
    printf("Idade do aluno: %d Altura %f\n", idade, altura);

    return 0;
}