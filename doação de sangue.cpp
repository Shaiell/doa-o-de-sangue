#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int main() {

	int idade;
	float peso;
	char hemo;

	setlocale(LC_ALL, "Portuguese");
	printf("informe a idade:\n");
	scanf_s("%i", &idade);
	if (idade >= 18 && idade<= 67) {
		printf("Qual seu peso:\n");
		scanf_s("%f", &peso);
		if (peso >= 50) {
			printf("O Hemograma esta OK :\n");
			scanf_s("\n%c", &hemo);
			if (hemo == 'S' || hemo == 's') {
				printf("Pode doar\n\n");
			}
			else
			{
				printf("Você não pode doar devido alguma divergencia no Hemograma\n\n");
			}
		}
		else
		{
			printf("Seu peso não é ideal para doar\n\n");
		}
	}
	else
	{
		printf("Não tem a idade correta para doar\n\n");
	}
}