#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	float s = 0.0, g = 0.0;
	printf("Digite o quanto voce ganha no mes:");
	scanf("%f", &s);
	printf("Digite o quanto voce gasta no mes:");
	scanf("%f", &g);
	if (s > g) {
		s = s - g;
		printf("Sobrou essa quantidade de dinheiro: %.2f\n", s);

	} else {
		if (s == g) {
			printf("Nao sobrou nada");
		} else {
			g = g - s;
			printf("Faltou essa quantidade de dinheiro: %.2f\n", g);
		}
	}
	return 0;
}