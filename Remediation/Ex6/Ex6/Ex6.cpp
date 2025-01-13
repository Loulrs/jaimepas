// Ex6.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>

int main()
{
	int age;
	char sex[100];
	int cine;
	int ff;
	int sport;
	int nbr;

	std::vector<std::string> fastFoods;
	fastFoods.push_back("McDo");
	fastFoods.push_back("BK");
	fastFoods.push_back("KFC");
	fastFoods.push_back("Quick");
	fastFoods.push_back("Autre");

	std::vector<std::string> sports;
	sports.push_back("Football");
	sports.push_back("Tennis");
	sports.push_back("Basketball");
	sports.push_back("Judo");
	sports.push_back("Natation");
	sports.push_back("Autre");


	printf("Donne moi ton age\n");
	scanf("%d", &age);

	printf("Donne moi ton sexeeee\n");
	scanf("%s", sex);
	printf("Combien de fois vas tu au cine par mois?\n");
	scanf("%d", &cine);
	printf("Donne moi ton fast food favoris ,MCDO=1,BK=2,KFC=3,QUICK=4, AUTRE=5->N\n");
	scanf("%d", &ff);
	printf("Combien de fois y vas tu par mois ?");
	scanf("%d", &nbr);
	printf("Donne moi ton sport, FOOTBALL=1, TENNIS=2,BASKETBALL=3, JUDO=4, NATATION=5, AUTRE=6->N\n");
	scanf("%d", &sport);

	printf("Age : %d\nSexe : %s\nCine : %d\nFast food %s\nNombre de fois par mois %d\nSport %s\n", age, sex, cine, fastFoods[ff-1].c_str(), nbr, sports[sport-1].c_str());
}


