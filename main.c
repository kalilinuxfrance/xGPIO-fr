/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.c
 * Copyright (C) 2016 julien <kali.linux.france@gmail.com>
 * 
 * xGpio-fr is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * xGpio-fr is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "read.h"
#include "write.h"
#include "invert.h"
#include "config.h"
#include "error.h"
#include "help.h"

int main(int argc, char *argv[])
{
	headerFunct();
	
	if (argc >= 2)
	{
		if ((strcmp(argv[1], "READ") == 0)||(strcmp(argv[1], "read") == 0)||(strcmp(argv[1], "-R") == 0)||(strcmp(argv[1], "-r") == 0))
		{
			printf("read\n");
			readGpio(argc, argv);
			return(0); // Fin normale de la fonction
		}

		if ((strcmp(argv[1], "WRITE") == 0)||(strcmp(argv[1], "write") == 0)||(strcmp(argv[1], "-W") == 0) || (strcmp(argv[1], "-w") == 0))
		{
			printf("write\n");
			writeGpio(argc, argv);
			return(0); // Fin normale de la fonction
		}

		if ((strcmp(argv[1], "INVERT") == 0)||(strcmp(argv[1], "invert") == 0)||(strcmp(argv[1], "-I") == 0) || (strcmp(argv[1], "-i") == 0))
		{
			printf("invert\n");
			invertGpio(argc, argv);
			return(0); // Fin normale de la fonction
		}

		if ((strcmp(argv[1], "CONFIG") == 0)||(strcmp(argv[1], "config") == 0)||(strcmp(argv[1], "-C") == 0) || (strcmp(argv[1], "-c") == 0))
		{
			printf("config\n");
			configGpio(argc, argv);
			return(0); // Fin normale de la fonction
		}

		if ((strcmp(argv[1], "--HELP") == 0)||(strcmp(argv[1], "-H") == 0)||(strcmp(argv[1], "-h") == 0) || (strcmp(argv[1], "--help") == 0))
		{
			help();
			return(0); // Fin normale de la fonction
		}
		
		errorFunct(); // erreur, fonction non reconnue.
		
	}
	if(argc == 1)
		{
		printf("Aucun arguments entrés\n");
		printf("Essayez xgpio -h pour obtenir de l'aide\n");
		}
	return (0);
}

