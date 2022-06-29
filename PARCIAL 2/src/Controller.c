/*
 * Controller.c
 *
 *  Created on: 28 jun. 2022
 *      Author: gaggi
 */
#include "Controller.h"
#include "Computer.h"

#define SIZE 500

int Controller_loadFile(LinkedList* eComputer) {

	int rtn = -1;
	char path[4096];
	FILE* pFile;

	if(eComputer != NULL) {

			printf("Ingrese el nombre del archivo(data.csv)\n");
			scanf("%[^\n]", path);
		pFile = fopen(path,"r");
		rtn = parser_PassengerFromText(pFile , eComputer);
		fclose(pFile);
	}

	return rtn;

}


int controller_listComputers(LinkedList* Computer) {

	int rtn = -1;
	eComputer* aux = NULL;
	int len;
	int i;
	char descAux[200];
	int idAux;
	char idTipoAuxStr[50];
	int idTipoAux;
	float priceAux;

		rtn = 1;
		printf("%10s  %110s  %10s  %10s\n", "ID", "DESCRIPCION", "PRECIO", "IDTYPE");
		len = ll_len(Computer);

		for(i = 0; i < len ; i++){

			aux = ll_get(Computer, i);
			if(aux != NULL){

				eComputer_getPrice(aux, &priceAux);
								eComputer_getIdTipo(aux, &idTipoAux);
								eComputer_getId(aux, &idAux);
								eComputer_getDesc(aux, descAux);

				switch(idTipoAux){
				case 1: strcpy(idTipoAuxStr,"DESKTOP");
				break;
				case 2: strcpy(idTipoAuxStr,"LAPTOP");
				}



				printf("%10d  %110s  %10f  %10s\n", idAux, descAux, priceAux, idTipoAuxStr);

			}


		}
	return rtn;
}

