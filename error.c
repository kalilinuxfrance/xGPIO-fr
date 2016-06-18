#include <stdio.h>

void headerFunct()
	{
		printf("\nxGPIO-fr v0.2\n\n");
	}

void errorNumberOfArg()
	{
		printf("Aucun arguments entrés\n");
		printf("Essayez xgpio -h ou xgpio --help pour obtenir de l'aide\n");
	}

void errorFunct()
	{
		printf("Fonction appelee non reconnue \n");
		printf("Essayez xgpio -h ou xgpio --help pour obtenir de l'aide\n");
	}