#include <stdio.h>


int main() {
        int numeroNormal = 2147483647; // Valor máximo para int
        long int numeroGrande = 2147483647;

        printf("Número regular (int): %d\n", numeroNormal);
        printf("Número grande (long int): %ld\n", numeroGrande);

        numeroGrande = 2147483648; // Valor maior que o máximo para long int
        printf("Número grande atualizado (long int): %ld\n", numeroGrande);

    return 0;
}
