// Ex5.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


int main()
{
	int a;
	int b;
	int c;
	printf("donne moi chiffre a\n");
	scanf("%d", &a);

	printf("donne moi chiffre b\n");
	scanf("%d", &b);

	printf("donnne moi chiffre c\n");
	scanf("%d", &c);

	if (a > b) {
		a = a + b;
		b = a - b;
		a = a - b;
	}
	if (a > c) {
		a = a + c;
		c = a - c;
		a = a - c;
	}
	if (b > c) {
		b = b + c;
		c = b - c;
		b = b - c;
	}


	printf("Les nombres triés dans l'ordre croissant sont : %d %d %d\n", a, b, c);




}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
