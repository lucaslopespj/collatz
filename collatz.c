#include <stdio.h>

typedef unsigned long int BigInt;

void collatz(BigInt x, BigInt *counter, BigInt *maior, BigInt *passos) {	
	printf("%ld ", x);	
    if (x > *maior) {
        *maior = x;
        *passos = *counter;
    }

	if (1 == x)
		return;
	else if (x % 2 == 0) {	
        (*counter)++;	
		collatz(x/2, counter, maior, passos);
    }
	else {
        (*counter)++;
		collatz(3*x+1, counter, maior, passos);
    }
}

int main() {
    BigInt x, counter = 0, maior = 0, passos = 0;

    printf("Informe um número inteiro: ");
    
    if (!scanf("%lu", &x)) {
        printf("Erro: número não informado!\n");
        return 0;
    }

    printf("\n\n");
    collatz(x, &counter, &maior, &passos);

    printf("\n\n%ld convergiu para 1 em %ld passos", x, counter);
    printf("\nMaior número atingido: %ld em %ld passos\n", maior, passos);

    return 0;
}