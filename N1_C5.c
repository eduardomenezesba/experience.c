#include <stdio.h>

//int: -2,147,483,648 a 2,147,483,647
//unsigned int: 0 a 4,294,967,295
//char : -128 a 127
//unsigned char: 0 a 255

int main() { 
    int numeroSinal = 3000000000; // Variável do tipo inteiro
    unsigned int numeroSemSinal = 4000000000; // Variável do tipo inteiro sem sinal
    // O tipo 'int' pode armazenar valores negativos e positivos, enquanto 'unsigned int' só armazena valores positivos.
    char letraSinal = 'A'; // Variável do tipo caractere
    unsigned char letraSemSinal = 'B'; // Variável do tipo caractere sem sinal

    printf("Número com sinal: %d\n", numeroSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal);

    printf("Letra com sinal: %c\n", letraSinal);
    printf("Letra sem sinal: %c\n", letraSemSinal);

    return 0;
    
    }