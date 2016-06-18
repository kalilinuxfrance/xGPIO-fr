#include <stdio.h>

void help()
{
printf("xGPIO permet de controler les gpio du pc duino en envoyant des commandes via un terminal.\n\n");

printf("Utilisation:\n\n");

printf("xgpio [Fonction] [Gpio] [Valeur1, Valeur2]\n");

printf("	[Fonction] 	WRITE write -w -W: pour ecrire une valeur 0 ou 1 ou 8.\n");
printf("			READ read -r -R\n");
printf("			INVERT invert -i -I\n");
printf("			CONFIG config -c -C\n\n");

printf("	[Gpio] 0 à 13: numero du gpio sur lequel agir.\n\n");

printf("	[Valeur1, Valeur2] suivant la fonction, 0, 1, 8, ou INPUT, OUTPUT...\n\n");

printf("Exemples:\n\n");

printf("	xgpio WRITE 2 1		Gpio2 à la valeur 1\n");
printf("	xgpio -w 2 1		Gpio2 à la valeur 1\n\n");

printf("	xgpio READ 5		Lecture de la valeur du gpio 5\n");
printf("	xgpio -r 5		Lecture de la valeur du gpio 5\n");
printf("	xgpio READ ALL		Lecture de la valeur de tous les gpio\n");
printf("	xgpio -r -a		Lecture de la valeur de tous les gpio\n\n");

printf("	xgpio INVERT 3		Inverse la valeur du gpio 3\n");
printf("	xgpio -i 3		Inverse la valeur du gpio 3\n\n");

printf("	xgpio CONFIG all	invite interractive pour configurer le mode des gpio de 0 à 13\n");
printf("	xgpio CONFIG 1 OUTPUT	Configure le mode du gpio 1 en OUTPUT\n");
printf("	xgpio -c 1 -o		Configure le mode du gpio 1 en OUTPUT\n");
printf("	xgpio CONFIG 1 INPUT	Configure le mode du gpio 1 en INPUT\n");
printf("	xgpio -c 1 -i		Configure le mode du gpio 1 en INPUT\n\n");
}


