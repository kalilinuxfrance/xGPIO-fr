#include <stdio.h>

void headerFunct()
	{
		printf("\nxGPIO-fr v0.2\n\n");
	}

void errorNumberOfArg()
	{
		printf("Erreur nombre d'arguments entrés\n");
		printf("Essayez xgpio -h ou xgpio --help pour obtenir de l'aide\n");
	}

void errorFunct()
	{
		printf("Fonction appelee non reconnue \n");
		printf("Essayez xgpio -h ou xgpio --help pour obtenir de l'aide\n");
	}

void errorArgValue()
	{
		printf("Valeur argument non valide \n");
		printf("Essayez xgpio -h ou xgpio --help pour obtenir de l'aide\n");
	}

void errorWritingAcces()
	{
		printf("Erreur lors de l'acces au fichier en ecriture. verifiez que vous avez\n");
		printf("bien fait demarrer automatiquement les modules manquant du pcduino\n");
		printf("ou que les valeurs entrees sont valables\n");
	}

void errorReadingAcces()
	{
		printf("Erreur lors de l'acces au fichier en lecture. verifiez que vous avez\n");
		printf("bien fait demarrer automatiquement les modules manquant du pcduino\n");
		printf("ou que les valeurs entrees sont valables\n");
	}