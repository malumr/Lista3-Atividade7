#include <stdio.h>
void encontrarMaiorValor(int vetor[], int tamanho, int *maior, int *posicao) {
	*maior = vetor[0];
	*posicao = 0;
	for (int i = 1; i < tamanho; i++) {
		if (vetor[i] > *maior) {
			*maior = vetor[i];
			*posicao = i;
		}
	}
}
int main() {
	int tamanho;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	int vetor[tamanho];
	printf("Digite %d valores:\n", tamanho);
	for (int i = 0; i < tamanho; i++) {
		scanf("%d", &vetor[i]);
	}
	int maior, posicao;
	encontrarMaiorValor(vetor, tamanho, &maior, &posicao);
	printf("O maior valor é %d e estCá na posição %d.\n", maior, posicao);
	return 0;
}
