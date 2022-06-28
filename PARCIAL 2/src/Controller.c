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
	char descAux[100];
	int idAux;
	int idTipoAux;
	float priceAux;

		rtn = 1;
		printf("\nID     DESCRI<PCION       PRECIO      IDTIPO");
		len = ll_len(Computer);

		for(i = 0; i < len ; i++){

			aux = ll_get(Computer, i);
			if(aux != NULL){

				eComputer_getId(Computer, &idAux);
				eComputer_getDesc(Computer, descAux);
				eComputer_getIdTipo(Computer, &idTipoAux);
				eComputer_getPrice(Computer, &priceAux);

				printf("%10d  %10s  %10f  %10d\n", idAux, descAux, priceAux, idTipoAux);

			}


		}

	return rtn;
}




