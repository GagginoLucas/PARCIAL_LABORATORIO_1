/*
 * Computer.h
 *
 *  Created on: 28 jun. 2022
 *      Author: gaggi
 */

#ifndef SRC_COMPUTER_H_
#define SRC_COMPUTER_H_
#include "../inc/LinkedList.h"

typedef struct {
	int id;
	char descripcion[256];
	float precio;
	float idTipo;

}eComputer;

eComputer* computer_newParametros(char* id, char* desc, char* price, char* idTipo);
eComputer* computer_new();

int eComputer_setDesc(eComputer* this, char* desc);
int eComputer_getDesc(eComputer* this,char* desc);
int eComputer_setPrice(eComputer* this, float price);
int eComputer_getPrice(eComputer* this, float* price);
int eComputer_getId(eComputer* this, int* ID);
int eComputer_setId(eComputer* this, int id);
int eComputer_getIdTipo(eComputer* this, int* idTipo);
int eComputer_setIdTipo(eComputer* this, int idTipo);
int eComputer_sortByIdTipo(void* firstID, void* secondID);

#endif /* SRC_COMPUTER_H_ */
