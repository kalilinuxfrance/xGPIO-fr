#include <stdio.h>
#include <string.h>
#include "error.h"

// -----------------------------------------------------------------------
// WRITE - WRITE - WRITE - WRITE - WRITE - WRITE - WRITE - WRITE - WRITE - 
// -----------------------------------------------------------------------

void ecrireGpio (int num_gpio, char valeurGpio)
{
	// Creation du nom de fichier et ouverture de celui-ci
	
    FILE *gpio = NULL;
   
    char fichier[128] = "";
	snprintf(fichier, sizeof fichier, "/sys/devices/virtual/misc/gpio/pin/gpio%d", num_gpio);
	gpio = fopen(fichier, "w");
	
    if (gpio != NULL)
		{
			if(valeurGpio == 0)
					fputc('0', gpio);
		
			else if(valeurGpio == 1)
					fputc('1', gpio);
		
			else if(valeurGpio == 8)
					fputc('8', gpio);
		
        fclose(gpio), gpio = NULL;
		}
	
    else
		{
        errorWritingAcces();
		}
}
// -----------------------------------------------------------------------
// /WRITE - /WRITE - /WRITE - /WRITE - /WRITE - /WRITE - /WRITE - /WRITE - 
// -----------------------------------------------------------------------






int writeGpio(int argc, char *argv[])
{
	printf("test index 1: %d\n", argc);
	printf("test Valeur de l'index 1: %s\n\n", argv[0]);

	int valeurParametre1 = 99;
	int valeurParametre2 = 99;

	if (argc != 4)// test pour verifier le bon nombre d'arguments juste 2 pour WRITE
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

// Transformation en int de argv[3]
	if (strcmp(argv[3], "0") == 0){valeurParametre2 = 0;}
	if (strcmp(argv[3], "1") == 0){valeurParametre2 = 1;}
	if (strcmp(argv[3], "8") == 0){valeurParametre2 = 8;}
		
// gestion des erreurs: argument non conforme
	if (valeurParametre1 == 99 || valeurParametre2 == 99)
		{
			errorArgValue();
			return(0);
		}
		
ecrireGpio(valeurParametre1, valeurParametre2);
return(0);
}



