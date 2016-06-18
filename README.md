# xGPIO-fr

#Reprenez le controle de vos gpio sur le pcduino sans prise de tete(Prototypage x86 avant compilation ARM)

xGPIO permet de controler les gpio du pc duino en envoyant des commandes via un terminal.

Utilisation:

xgpio [Fonction] [Gpio] [Valeur1, Valeur2]

	[Fonction] 	WRITE write -w -W: pour ecrire une valeur 0 ou 1 ou 8.
			READ read -r -R
			INVERT invert -i -I
			CONFIG config -c -C

	[Gpio] 0 à 13: numero du gpio sur lequel agir.

	[Valeur1, Valeur2] suivant la fonction, 0, 1, 8, ou INPUT, OUTPUT...

Exemples:

	xgpio WRITE 2 1		Gpio2 à la valeur 1
	xgpio -w 2 1		Gpio2 à la valeur 1

	xgpio READ 5		Lecture de la valeur du gpio 5
	xgpio -r 5		Lecture de la valeur du gpio 5
	xgpio READ ALL		Lecture de la valeur de tous les gpio
	xgpio -r -a		Lecture de la valeur de tous les gpio

	xgpio INVERT 3		Inverse la valeur du gpio 3
	xgpio -i 3		Inverse la valeur du gpio 3

	xgpio CONFIG all	invite interractive pour configurer le mode des gpio de 0 à 13
	xgpio CONFIG 1 OUTPUT	Configure le mode du gpio 1 en OUTPUT
	xgpio -c 1 -o		Configure le mode du gpio 1 en OUTPUT
	xgpio CONFIG 1 INPUT	Configure le mode du gpio 1 en INPUT
	xgpio -c 1 -i		Configure le mode du gpio 1 en INPUT
