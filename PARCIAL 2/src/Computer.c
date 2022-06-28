/*
 * Computer.c
 *
 *  Created on: 28 jun. 2022
 *      Author: gaggi
 */

#include "Computer.h"
#include "utn.h"


eComputer* computer_new() {

	return (eComputer*)malloc(sizeof(eComputer));

}


eComputer* computer_newParametros(char* id, char* desc, char* price, char* idTipo) {

	int idAux;
	int priceAux;
	int idTipoAux;
	eComputer* aux;
	aux = computer_new();

	idAux = atoi(id);
	priceAux = atof(price);
	idTipoAux = atoi(idTipo);

	eComputer_setId(aux, idAux);
	eComputer_setDesc(aux, desc);
	eComputer_setPrice(aux, priceAux);
	eComputer_setIdTipo(aux, idTipoAux);

	return aux;

}


int eComputer_setId(eComputer* this, int id) {

	int rtn = -1;

	if(this != NULL && id > 0) {

		this->id = id;
		rtn = 1;
	}

	return rtn;
}

int eComputer_getId(eComputer* this, int* ID) {

	int rtn = -1;
	if(this!= NULL) {

		*ID = this->id;
		rtn = 1;
	}
	return rtn;
}

int eComputer_setDesc(eComputer* this, char* desc) {
	int rtn = -1;
	if(this != NULL && desc != NULL)
	{
		strcpy(this->descripcion, desc);
		rtn = 1;
	}

	return rtn;
}

int eComputer_getDesc(eComputer* this,char* desc) {
	int rtn = -1;

	if(this!=NULL && desc!=NULL) {

		strcpy(desc , this->descripcion);
		rtn=1;
	}

	return rtn;
}

int eComputer_setPrice(eComputer* this, float price) {

	int rtn = -1;
	if(this != NULL && price > 0) {

		this->precio = price;
		rtn = 1;
	}

	return rtn;
}

int eComputer_getPrice(eComputer* this, float* price) {

	int rtn = -1;

	if(this!= NULL) {

		*price = this->precio;
		rtn = 1;
	}

	return rtn;
}

int eComputer_setIdTipo(eComputer* this, int idTipo) {

	int rtn = -1;

	if(this != NULL && idTipo > 0) {

		this->idTipo = idTipo;
		rtn = 1;
	}

	return rtn;
}

int eComputer_getIdTipo(eComputer* this, int* idTipo) {

	int rtn = -1;
	if(this!= NULL) {

		*idTipo = this->idTipo;
		rtn = 1;
	}
	return rtn;
}

int eComputer_sortByIdTipo(void* firstID, void* secondID) {

	int rtn = 0;
	eComputer* auxPassengerOne = (eComputer*) firstID;
	eComputer* auxPassengerTwo = (eComputer*) secondID;
	int idOne;
	int idTwo;
	if(auxPassengerOne != NULL && auxPassengerTwo != NULL) {

		if(eComputer_getId(auxPassengerOne, &idOne) == 1 &&
		   eComputer_getId(auxPassengerTwo, &idTwo) == 1) {

			if(idOne > idTwo) {

				rtn = 1;
			}else {
				if(idOne < idTwo) {

					rtn = -1;
				}
			}

		}
	}

	return rtn;
}
