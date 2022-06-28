/*
 * Parser.c
 *
 *  Created on: 28 jun. 2022
 *      Author: gaggi
 */

#include "Parser.h"
int parser_PassengerFromText(FILE* pFile , LinkedList* pArrayEcomputer) {

	int rtn = -1;
	eComputer* aux = NULL;
	char idAux[FILESIZE];
	char descripcionAux[FILESIZE];
	char priceAux[FILESIZE];
	char idTipoAux[FILESIZE];
	if(pFile != NULL && pArrayEcomputer != NULL) {

		fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]",  idAux, descripcionAux, priceAux,
																	 idTipoAux);

		do{
			if(fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]", idAux, descripcionAux, priceAux,
																idTipoAux) == 4) {

				aux = computer_newParametros(idAux, descripcionAux,priceAux, idTipoAux);
				if(aux!=NULL) {

					ll_add(pArrayEcomputer, aux);
					rtn = 1;
				}
			}
		}while(feof(pFile)==0);
	}

    return rtn;
}

