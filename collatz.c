#include <stdio.h>

void collatz(int x, int *counter, int *maior, int *passos) {	
	printf("%d ", x);	
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
    int x, counter = 0, maior = 0, passos = 0;

    printf("Informe um número inteiro: ");
    
    if (!scanf("%d", &x)) {
        printf("Erro: número não informado!\n");
        return 0;
    }

    printf("\n\n");
    collatz(x, &counter, &maior, &passos);

    printf("\n\n%d convergiu para 1 em %d passos", x, counter);
    printf("\nMaior número atingido: %d em %d passos\n", maior, passos);

    return 0;
}