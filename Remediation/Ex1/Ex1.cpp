// Ex1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main() {
	float prix = 1;
	int quantite = 1;
	float total = 0;


	while (prix > 0 && quantite > 0) {
		scanf("%f", &prix);
		scanf("%d", &quantite);
		total = total + (prix * quantite);

	}


	if (total > 500); {

		total = total * 0.9;
	}

	printf("total a payer = %f\n", total);

}