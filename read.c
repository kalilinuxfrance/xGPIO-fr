#include <stdio.h>
#include <string.h>
#include "error.h"

// -----------------------------------------------------------------------
// READ Pin - READ - READ - READ - READ - READ - READ - READ - READ - READ - 
// -----------------------------------------------------------------------

void lireGpioPin(int num_gpio)
{
	char valeurLue = 9; //code d'erreur = 9
	// Creation du nom de fichier et ouverture de celui-ci
	
    FILE *gpio = NULL;

    char fichier[128] = "";
	snprintf(fichier, sizeof fichier, "gpio%d", num_gpio);// /sys/devices/virtual/misc/gpio/pin/

	gpio = fopen(fichier, "r");

    if (gpio != NULL)
		{	
		valeurLue = fgetc(gpio);
		
		printf(" %2d  : %3c  :",num_gpio, valeurLue);	

		fclose(gpio), gpio = NULL;
		}
	
    else
		{
			errorReadingAcces();
   		} 
}



// -----------------------------------------------------------------------
// /READ - /READ - /READ - /READ - /READ - /READ - /READ - /READ - /READ - 
// -----------------------------------------------------------------------


// -----------------------------------------------------------------------
// READ Mode - READ - READ - READ - READ - READ - READ - READ - READ - READ - 
// -----------------------------------------------------------------------

void lireGpioMode(int num_gpio)
{
	char valeurLue = 9; //code d'erreur = 9
	// Creation du nom de fichier et ouverture de celui-ci
	
    FILE *gpio = NULL;

    char fichier[128] = "";
	snprintf(fichier, sizeof fichier, "/sys/devices/virtual/misc/gpio/mode/gpio%d", num_gpio);// 

	gpio = fopen(fichier, "r");

    if (gpio != NULL)
		{	
		valeurLue = fgetc(gpio);

		printf(" %2c\n", valeurLue);	

		fclose(gpio), gpio = NULL;
		}
	
    else
		{
			errorReadingAcces();
   		}
}



// -----------------------------------------------------------------------
// /READ - /READ - /READ - /READ - /READ - /READ - /READ - /READ - /READ - 
// -----------------------------------------------------------------------


// -----------------------------------------------------------------------
// CHECK Before READ Func.
// -----------------------------------------------------------------------
int readGpio(int argc, char *argv[])
{
	printf("test index 1: %d\n", argc);
	printf("test Valeur de l'index 1: %s\n\n", argv[0]);

	int valeurParametre1 = 99;

	if (argc != 3)// test pour verifier le bon nombre d'arguments juste 1 pour READ
		{
			errorNumberOfArg();
			return(0);
		}
		
// Transformation en int de argv[2]
	if (strcmp(argv[2], "0") == 0){valeurParametre1 = 0;}
	if (strcmp(argv[2], "1") == 0){valeurParametre1 = 1;}
	if (strcmp(argv[2], "2") == 0){valeurParametre1 = 2;}
	if (strcmp(argv[2], "3") == 0){valeurParametre1 = 3;}
	if (strcmp(argv[2], "4") == 0){valeurParametre1 = 4;}
	if (strcmp(argv[2], "5") == 0){valeurParametre1 = 5;}
	if (strcmp(argv[2], "6") == 0){valeurParametre1 = 6;}
	if (strcmp(argv[2], "7") == 0){valeurParametre1 = 7;}
	if (strcmp(argv[2], "8") == 0){valeurParametre1 = 8;}
	if (strcmp(argv[2], "9") == 0){valeurParametre1 = 9;}
	if (strcmp(argv[2], "10") == 0){valeurParametre1 = 10;}
	if (strcmp(argv[2], "11") == 0){valeurParametre1 = 11;}
	if (strcmp(argv[2], "12") == 0){valeurParametre1 = 12;}
	if (strcmp(argv[2], "13") == 0){valeurParametre1 = 13;}
	if ((strcmp(argv[2], "ALL") == 0) || (strcmp(argv[2], "all") == 0) || (strcmp(argv[2], "-a") == 0) || (strcmp(argv[2], "-A") == 0)){valeurParametre1 = 14;}

		
// gestion des erreurs: argument non conforme
	if (valeurParametre1 == 99)
		{
			errorArgValue();
			return(0);
		}
	// routine lecture un seul gpio
	if (valeurParametre1 <= 13 && valeurParametre1 >= 0)
	{
		printf("\n------------------");
		printf("\n|GPIO|VALEUR|MODE|");
		printf("\n------------------\n");
		lireGpioPin(valeurParametre1); // lecture de la valeur pin
		lireGpioMode(valeurParametre1); // lecture de la valeur mode
	}
	// Option READ ALL ---------------------------------------------
	if (valeurParametre1 == 14)
	{
		int i = 0;
		printf("\n------------------");
		printf("\n|GPIO|VALEUR|MODE|");
		printf("\n------------------\n");
		for(i=0; i<2; i++)
		{
			lireGpioPin(i); // lecture de la valeur pin
			lireGpioMode(i); // lecture de la valeur mode
			//printf("\n");
		}
	}
	// Fin option READ ALL -----------------------------------------
		
return(0);
}

// -----------------------------------------------------------------------
// END-CHECK CHECK Before READ Func.
// -----------------------------------------------------------------------
