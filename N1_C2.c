# include <stdio.h>
/*Saida de dados em C*/
// Este programa solicita ao usuário que insira sua idade, altura, nome e saldo bancário,
// e exibe essas informações formatadas.
// O programa utiliza tipos de dados primitivos como int, float, char e double.
int main() {
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S/N';
    char nome[20] = "exemplo";
    double saldoBancario = 12345.67;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Seu nome de usuário é: %s\n", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("A idade de %s é: %d\n", nome, idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("A altura de %s é: %.2f\n", nome, altura);

    printf("Digite o saldo bancário: ");
    scanf("%lf", &saldoBancario);
    printf("O saldo bancário de %s é: %.2lf\n", nome, saldoBancario);

    printf("Olá, %s!\n", nome);
    
    printf("Você gosta de Estudar?: %c\n", opcao);
    scanf(" %c", &opcao);
    printf("Você escolheu: %c\n", opcao);

    if (opcao == 'N' || opcao == 'n') {
        printf("Você não gosta de estudar, por que?\n");
    } else if (opcao == 'S' || opcao == 's') {
        printf("Você gosta de estudar, que bom!\n");
        printf("Qual é a sua matéria favorita?\n");
        scanf(" %c", &opcao, "me conta a matéria?");
        printf("Ah, que interessante! Eu também gosto dessa matéria.\n");
        scanf(" %c", &opcao, "me conta mais sobre isso?");
        printf("Que legal! Estudar é sempre bom.\n");
        printf("Então você gosta de estudar.\n");
        printf("Qual é o assunto que você mais gosta de estudar?\n");
        scanf(" %c", &opcao, "me conta o assunto?");
        printf("Ah, que interessante! Eu também gosto desse assunto.\n");
        scanf(" %c", &opcao, "me conta mais sobre isso?");
        printf("Que legal! Estudar é sempre bom.\n");

    } else if (opcao == 'N' || opcao == 'n') {
        printf("Você não gosta de estudar, por que?\n");    
        scanf(" %c", &opcao, "me conta o motivo?");
        printf("Poxa, esperava mais de você.\n");  
        scanf(" %c", &opcao, "desculpa");
        printf("mas tudo bem, cada um tem suas preferências.\n");
    } else {

        printf("Opção inválida. Por favor, escolha S ou N.\n");
    }

    printf("Obrigado por participar!\n");


    return 0;
}